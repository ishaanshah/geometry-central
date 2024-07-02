#include "geometrycentral/surface/surface_mesh.h"
#include "geometrycentral/surface/manifold_surface_mesh.h"

#include <nanobind/nanobind.h>
#include <nanobind/stl/vector.h>

namespace nb = nanobind;
using namespace geometrycentral::surface;

void export_mesh(nb::module_ &m) {
    nb::class_<SurfaceMesh>(m, "SurfaceMesh")
        .def(nb::init<std::vector<std::vector<size_t>>>());

    nb::class_<ManifoldSurfaceMesh, SurfaceMesh>(m, "ManifoldSurfaceMesh")
        .def(nb::init<std::vector<std::vector<size_t>>>());
}