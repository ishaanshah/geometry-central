#include "geometrycentral/surface/base_geometry_interface.h"
#include "geometrycentral/surface/intrinsic_geometry_interface.h"
#include "geometrycentral/surface/extrinsic_geometry_interface.h"
#include "geometrycentral/surface/embedded_geometry_interface.h"
#include "geometrycentral/surface/vertex_position_geometry.h"
#include "geometrycentral/surface/surface_mesh.h"

#include <Eigen/Dense>
#include <nanobind/nanobind.h>
#include <nanobind/eigen/dense.h>

namespace nb = nanobind;
using namespace geometrycentral::surface;

void export_geometry(nb::module_ &m) {
    nb::class_<BaseGeometryInterface>(m, "BaseGeometryInterface");

    nb::class_<IntrinsicGeometryInterface,BaseGeometryInterface>(m, "IntrinsicGeometryInterface");

    nb::class_<ExtrinsicGeometryInterface,IntrinsicGeometryInterface>(m, "ExtrinsicGeometryInterface");

    nb::class_<EmbeddedGeometryInterface,ExtrinsicGeometryInterface>(m, "EmbeddedGeometryInterface");

    nb::class_<VertexPositionGeometry,EmbeddedGeometryInterface>(m, "VertexPositionGeometry")
        .def(nb::init<SurfaceMesh &>())
        .def(nb::init<SurfaceMesh &, Eigen::Matrix<float, -1, 3>>())
}