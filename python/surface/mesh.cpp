#include "geometrycentral/surface/surface_mesh.h"
#include "geometrycentral/surface/manifold_surface_mesh.h"

#include <Eigen/Dense>
#include <nanobind/nanobind.h>
#include <nanobind/stl/vector.h>
#include <nanobind/eigen/dense.h>

namespace nb = nanobind;
using namespace geometrycentral::surface;

void export_mesh(nb::module_ &m) {
    nb::class_<SurfaceMesh>(m, "SurfaceMesh")
        .def(nb::init<std::vector<std::vector<size_t>>>());

    nb::class_<ManifoldSurfaceMesh, SurfaceMesh>(m, "ManifoldSurfaceMesh")
        .def(nb::init<std::vector<std::vector<size_t>>>())
        .def(nb::init<Eigen::Matrix<size_t, -1, 3>>());
}