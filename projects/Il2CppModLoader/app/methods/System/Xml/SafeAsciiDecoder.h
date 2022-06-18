#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::SafeAsciiDecoder {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SafeAsciiDecoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0199D990, int32_t, GetCharCount, (app::SafeAsciiDecoder * this_ptr, app::Byte__Array * bytes, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0199FB90, int32_t, GetChars, (app::SafeAsciiDecoder * this_ptr, app::Byte__Array * bytes, int32_t byte_index, int32_t byte_count, app::Char__Array * chars, int32_t char_index))
    IL2CPP_REGISTER_METHOD(0x0199FC30, void, Convert, (app::SafeAsciiDecoder * this_ptr, app::Byte__Array * bytes, int32_t byte_index, int32_t byte_count, app::Char__Array * chars, int32_t char_index, int32_t char_count, bool flush, int32_t * bytes_used, int32_t * chars_used, bool * completed))
}