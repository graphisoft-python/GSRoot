#pragma once

#include "../stdafx.h"

#include "Pattern.hpp"

using namespace Gfx;


// --- Pattern -----------------------------------------------------------------------------

void load_Pattern(py::module m) {
	py::class_<Pattern>(m, "Pattern")
		.def(py::init<>())
		.def(py::init<unsigned char *>())
		.def("IsEmpty", &Pattern::IsEmpty)
		.def("IsFull", &Pattern::IsFull);
}

