#pragma once

#include "../stdafx.h"

#include "Color.hpp"

using namespace GS;
using namespace Gfx;


// --- Color -------------------------------------------------------------------------------

void load_gs_Color(py::module m) {
	py::class_<Color>(m, "Color")
		.def(py::init<>())
		.def(py::init<UChar, UChar, UChar, UChar>(),
			py::arg("r"),
			py::arg("g"),
			py::arg("b"),
			py::arg("a") = 0xFF)
		.def("Set", (void (Color::*)(UChar, UChar, UChar, UChar)) &Color::Set)
		.def("SetRed", (void (Color::*)(UChar)) &Color::SetRed)
		.def("SetGreen", (void (Color::*)(UChar)) &Color::SetGreen)
		.def("SetBlue", (void (Color::*)(UChar)) &Color::SetBlue)
		.def("SetAlpha", (void (Color::*)(UChar)) &Color::SetAlpha)
		.def("GetRed", (UChar(Color::*)(void)const) &Color::GetRed)
		.def("GetGreen", (UChar(Color::*)(void)const) &Color::GetGreen)
		.def("GetBlue", (UChar(Color::*)(void)const) &Color::GetBlue)
		.def("GetAlpha", (UChar(Color::*)(void)const) &Color::GetAlpha)
		.def(py::self == py::self)
		.def(py::self != py::self);
}

