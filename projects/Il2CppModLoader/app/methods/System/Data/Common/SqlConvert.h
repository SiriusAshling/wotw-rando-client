#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::Common::SqlConvert {
    IL2CPP_REGISTER_METHOD(0x028489B0, app::SqlByte, ConvertToSqlByte, (app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x047479C0, SqlConvert_ConvertToSqlByte__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02848BC0, app::SqlInt16, ConvertToSqlInt16, (app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x047894D0, SqlConvert_ConvertToSqlInt16__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02848FC0, app::SqlInt32, ConvertToSqlInt32, (app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04739858, SqlConvert_ConvertToSqlInt32__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028495C0, app::SqlInt64, ConvertToSqlInt64, (app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x047441E8, SqlConvert_ConvertToSqlInt64__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02849B10, app::SqlDouble, ConvertToSqlDouble, (app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x0471D1B0, SqlConvert_ConvertToSqlDouble__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0284A330, app::SqlDecimal, ConvertToSqlDecimal, (app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x047517E8, SqlConvert_ConvertToSqlDecimal__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0284AD60, app::SqlSingle, ConvertToSqlSingle, (app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x0478DDE0, SqlConvert_ConvertToSqlSingle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0284B920, app::SqlMoney, ConvertToSqlMoney, (app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04730F80, SqlConvert_ConvertToSqlMoney__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0284C380, app::SqlDateTime, ConvertToSqlDateTime, (app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04744200, SqlConvert_ConvertToSqlDateTime__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0284C5C0, app::SqlBoolean, ConvertToSqlBoolean, (app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04704CC0, SqlConvert_ConvertToSqlBoolean__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0284C7C0, app::SqlGuid, ConvertToSqlGuid, (app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04753F90, SqlConvert_ConvertToSqlGuid__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0284C9D0, app::SqlBinary, ConvertToSqlBinary, (app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x047014C8, SqlConvert_ConvertToSqlBinary__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0284CC00, app::SqlString, ConvertToSqlString, (app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04731858, SqlConvert_ConvertToSqlString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0284CE40, app::SqlChars*, ConvertToSqlChars, (app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x0474D548, SqlConvert_ConvertToSqlChars__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0284CFC0, app::SqlBytes*, ConvertToSqlBytes, (app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x047554D8, SqlConvert_ConvertToSqlBytes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0284D140, app::DateTimeOffset, ConvertStringToDateTimeOffset, (app::String * value, app::IFormatProvider* format_provider))
    IL2CPP_REGISTER_METHOD(0x0284D210, app::Object*, ChangeTypeForDefaultValue, (app::Object * value, app::Type* type, app::IFormatProvider* format_provider))
    IL2CPP_REGISTER_METHOD(0x0284D410, app::Object*, ChangeType2, (app::Object * value, app::StorageType__Enum stype, app::Type* type, app::IFormatProvider* format_provider))
    IL2CPP_REGISTER_METHODINFO(0x04780878, SqlConvert_ChangeType2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0284E9E0, app::Object*, ChangeTypeForXML, (app::Object * value, app::Type* type))
} // namespace app::classes::System::Data::Common::SqlConvert
