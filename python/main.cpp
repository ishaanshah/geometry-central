#include <nanobind/nanobind.h>
#include "main.h"

NB_MODULE(geometry_central, m) {
    export_vector(m);
    export_mesh(m);
    export_geometry(m);
}