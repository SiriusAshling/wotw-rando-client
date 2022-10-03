#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TriangleNet::Meshing::Converter {
    IL2CPP_REGISTER_METHOD(0x0263D7F0, app::Mesh_1*, ToMesh_1, (app::Polygon * polygon, app::IList_1_TriangleNet_Geometry_ITriangle_* triangles))
    IL2CPP_REGISTER_METHOD(0x0263D890, app::Mesh_1*, ToMesh_2, (app::Polygon * polygon, app::ITriangle__Array* triangles))
    IL2CPP_REGISTER_METHOD(0x0263DC80, app::List_1_TriangleNet_Topology_Otri___Array*, SetNeighbors, (app::Mesh_1 * mesh, app::ITriangle__Array* triangles))
    IL2CPP_REGISTER_METHODINFO(0x0477BDA8, Converter_1_SetNeighbors__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0263E7A0, void, SetSegments, (app::Mesh_1 * mesh, app::Polygon* polygon, app::List_1_TriangleNet_Topology_Otri___Array* vertexarray))
    IL2CPP_REGISTER_METHODINFO(0x0476C640, Converter_1_SetSegments__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0263F200, app::DcelMesh*, ToDCEL, (app::Mesh_1 * mesh))
} // namespace app::classes::TriangleNet::Meshing::Converter
