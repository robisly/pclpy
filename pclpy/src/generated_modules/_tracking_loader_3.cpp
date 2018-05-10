
#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include <pcl/point_types.h>

namespace py = pybind11;
using namespace pybind11::literals;

PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
#include "../make_opaque_vectors.hpp"

#include "tracking/kld_adaptive_particle_filter_omp.hpp"
#include "tracking/particle_filter_omp.hpp"


void defineTrackingClasses3(py::module &m) {
    py::module m_tracking = m.def_submodule("tracking", "Submodule tracking");
    defineTrackingKldAdaptiveParticleFilterOmpClasses(m_tracking);
    defineTrackingParticleFilterOmpClasses(m_tracking);
}