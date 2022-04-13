#include <randomizer/animation/animation.h>

#include <dev/object_visualizer.h>
#include <game/game.h>
#include <game/player.h>
#include <randomizer/dirty_value.h>
#include <randomizer/render/sprite.h>
#include <randomizer/render/textures.h>
#include <utils/json_serializers.h>
#include <utils/operations.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/il2cpp_math.h>
#include <Il2CppModLoader/interception_macros.h>

#include <json/json.hpp>

#include <fstream>
#include <unordered_map>

using namespace modloader;
using namespace randomizer;

namespace randomizer
{
    CachedLoader<std::shared_ptr<AnimationDefinition>, std::shared_ptr<AnimationDefinition>, load_animation, copy_animation> animation_cache;

    std::shared_ptr<AnimationDefinition>&& load_animation(std::string path)
    {
        nlohmann::json j;
        load_json_file(path, j);
        std::shared_ptr<AnimationDefinition> anim(new AnimationDefinition());
        try
        {
            anim->duration = 0.f;
            auto frames = j.at("frames");
            for (auto frame : frames)
            {
                auto frame_definition = anim->frames.emplace_back();
                frame_definition.position = frame.value("position", app::Vector3{ 0.f, 0.f, 0.f });
                frame_definition.scale = frame.value("scale", app::Vector3{ 1.f, 1.f, 1.f });
                frame_definition.rotation = frame.value("rotation", 0.0f);
                frame_definition.duration = frame.value("duration", 1.0f);
                anim->duration += frame_definition.duration;
                frame_definition.real_duration = anim->duration;
                auto texture_str = convert_string_to_wstring(frame.value("texture", std::string("")));
                frame_definition.texture = textures::get_texture(texture_str);
                app::Vector2 texture_size;
                auto has_texture_size = frame.contains("texture_size");
                if (has_texture_size)
                {
                    texture_size = frame.value("texture_size", app::Vector2{ 1.f, 1.f });
                    frame_definition.aspect_ratio = texture_size.y / texture_size.x;
                }

                if (frame.contains("texture_params"))
                {
                    auto params = frame["texture_params"];
                    textures::MaterialParams mat_params;
                    mat_params.color = params.value("color", app::Color{ 1.f, 1.f, 1.f, 1.f });
                    mat_params.scroll_rot = params.value("scroll_rot", app::Vector4{ 0.f, 0.f, 0.f, 0.f });
                    mat_params.uvs = params.value("uvs", app::Vector4{ 0.f, 0.f, 1.f, 1.f });
                    auto& value = mat_params.uvs.value();
                    if (has_texture_size)
                    {
                        frame_definition.aspect_ratio = value.w / value.z;
                        value.x /= texture_size.x;
                        value.y /= texture_size.y;
                        value.z /= texture_size.x;
                        value.w /= texture_size.y;
                    }

                    value.y = 1.f - value.y - value.w;
                    frame_definition.params = std::optional(mat_params);
                }

                anim->frames.push_back(frame_definition);
            }
        }
        catch (std::exception& ex)
        {
            trace(MessageType::Warning, 3, "anim_renderer", format("failed to read '%s%s' error '%s'", base_path.c_str(), path, ex.what()));
        }

        return std::move(anim);
    }
    
    std::shared_ptr<AnimationDefinition>&& copy_animation(std::shared_ptr<AnimationDefinition> value)
    {
        return std::move(value);
    }

    Animation::Animation(AnimationDefinition const& definition)
        : m_sprite()
        , m_color_modulate{1, 1, 1, 1}
        , m_duration(definition.duration)
        , m_frame(0)
        , m_frames(definition.frames)
    {
        m_root = il2cpp::create_object<app::GameObject>("UnityEngine", "GameObject");
        il2cpp::invoke(m_root, ".ctor");
        game::add_to_container(game::RandoContainer::GameObjects, m_root);
        m_sprite.set_parent(m_root);
    }

    Animation::~Animation()
    {
        if (il2cpp::unity::is_valid(m_root))
        {
            il2cpp::unity::destroy_object(m_root);
            m_root = nullptr;
        }
    }

    void Animation::start(bool repeat)
    {
        m_stopped = false;
        m_time = repeat ? m_time - m_duration : 0;
        m_sprite.enabled(true);
        apply();
    }

    void Animation::stop()
    {
        m_stopped = true;
        m_sprite.enabled(false);
    }

    void Animation::update(float dt)
    {
        if (!m_sprite.enabled() || is_finished() || is_stopped())
            return;

        m_time += dt;
        int old_frame = m_frame;
        while (m_time >= m_frames[m_frame].real_duration)
            ++m_frame;

        if (old_frame != m_frame)
            apply();
    }

    void Animation::apply()
    {
        auto const& frame = m_frames[m_frame];
        m_sprite.layer(frame.layer);
        m_sprite.local_position(frame.position);
        m_sprite.local_rotation(frame.rotation);
        m_sprite.local_scale(frame.scale);

        auto params = frame.params;
        if (!params.has_value())
            params = textures::MaterialParams();

        params->color = params->color.has_value()
            ? params->color.value() * m_color_modulate
            : m_color_modulate;

        m_sprite.texture(frame.texture, frame.params);
    }
}