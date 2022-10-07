#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimedActionExecuter {
        namespace {
            app::TimedActionExecuter__Class* type_info_ref = nullptr;
        }
        app::TimedActionExecuter__Class** type_info = &type_info_ref;
        inline app::TimedActionExecuter__Class* get_class() {
            return il2cpp::get_class<app::TimedActionExecuter__Class>(type_info, "", "TimedActionExecuter");
        }
        inline app::TimedActionExecuter* create() {
            return il2cpp::create_object<app::TimedActionExecuter>(get_class());
        }
        inline app::TimedActionExecuter__Array* create_array(int size) {
            return il2cpp::array_new<app::TimedActionExecuter__Array>(get_class(), size);
        }
        inline app::TimedActionExecuter__Array* create_array(const std::vector<app::TimedActionExecuter*>& items) {
            return il2cpp::array_new<app::TimedActionExecuter__Array>(get_class(), items);
        }
    } // namespace TimedActionExecuter
} // namespace app::classes::types