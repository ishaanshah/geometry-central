#include "geometrycentral/utilities/vector2.h"

#include <nanobind/nanobind.h>

namespace nb = nanobind;
namespace gc = geometrycentral;

void export_vector(nb::module_ &m) {
    nb::class_<gc::Vector2>(m, "Vector2")
        .def(nb::init<>())
        .def_rw("x", &gc::Vector2::x)
        .def_rw("y", &gc::Vector2::y);
}
