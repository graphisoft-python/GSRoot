#pragma once

#include "../stdafx.h"

#include "Pattern.hpp"

using namespace Gfx;


// --- Pattern -----------------------------------------------------------------------------

void load_Pattern(py::module m) {
	py::class_<Pattern>(m, "Pattern")
		.def(py::init<>())
		.def(py::init([](GS::Array<UINT8> arg) {
			unsigned char pat[8] = { 0 };
			int i = { 0 };
			for (auto it = arg.Begin(); it != arg.End() && i < 8; it++) {
				pat[i] = *it;
				i++;
			}
			return Pattern(pat);
		}))
		.def("IsEmpty", &Pattern::IsEmpty)
		.def("IsFull", &Pattern::IsFull);
}

