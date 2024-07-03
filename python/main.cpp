#include "geometrycentral/surface/meshio.h"
#include "geometrycentral/surface/embedded_geometry_interface.h"
#include "geometrycentral/surface/surface_mesh.h"
#include "main.h"

#include <nanobind/nanobind.h>
#include <nanobind/stl/string.h>
#include <string>

using namespace geometrycentral::surface;

NB_MODULE(geometry_central, m) {
    export_vector(m);
    export_mesh(m);
    export_geometry(m);
    m.def("writeSurfaceMesh", nb::overload_cast<SurfaceMesh&, EmbeddedGeometryInterface&, std::string, std::string>(&writeSurfaceMesh));
}