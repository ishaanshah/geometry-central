#pragma once

#include <nanobind/nanobind.h>

namespace nb = nanobind;

void export_mesh(nb::module_ &m);
void export_vector(nb::module_ &m);
void export_geometry(nb::module_ &m);