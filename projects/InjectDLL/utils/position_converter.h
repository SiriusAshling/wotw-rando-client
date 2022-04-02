#pragma once

#include <macros.h>

INJECT_C_DLLEXPORT app::Vector3 world_to_ui_position(app::Vector3 position);
INJECT_C_DLLEXPORT app::Vector3 ui_to_world_position(app::Vector3 position);
INJECT_C_DLLEXPORT app::Vector2 world_to_ui_position_2d(app::Vector2 position);
INJECT_C_DLLEXPORT app::Vector2 ui_to_world_position_2d(app::Vector2 position);
