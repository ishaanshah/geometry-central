#include "geometrycentral/surface/manifold_surface_mesh.h"
#include "geometrycentral/surface/poisson_disk_sampler.h"

#include <nanobind/nanobind.h>

namespace nb = nanobind;
using namespace geometrycentral::surface;

void export_poisson_disk_sampler(nb::module_ &m) {
    nb::class_<PoissonDiskSampler>(m, "PoissonDiskSampler")
        .def(nb::init<ManifoldSurfaceMesh &, VertexPositionGeometry &>())
        .def("sample", &PoissonDiskSampler::sample);
}