#pragma once

#include "../stdafx.h"

#include "Color.hpp"

using namespace GS;
using namespace Gfx;


// --- Color -------------------------------------------------------------------------------

void load_gs_Color(py::module m) {
	py::class_<Color>(m, "Color")
		.def_readonly_static("Black",&Color::Black)
		.def_readonly_static("DarkGray", &Color::DarkGray)
		.def_readonly_static("Gray", &Color::Gray)
		.def_readonly_static("LightGray", &Color::LightGray)
		.def_readonly_static("White", &Color::White)
		.def_readonly_static("Red", &Color::Red)
		.def_readonly_static("Green", &Color::Green)
		.def_readonly_static("Blue", &Color::Blue)
		.def_readonly_static("Cyan", &Color::Cyan)
		.def_readonly_static("Magenta", &Color::Magenta)
		.def_readonly_static("Yellow", &Color::Yellow)

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
		.def("GetRed", (UChar (Color::*)(void) const) &Color::GetRed)
		.def("GetGreen", (UChar (Color::*)(void) const) &Color::GetGreen)
		.def("GetBlue", (UChar (Color::*)(void) const) &Color::GetBlue)
		.def("GetAlpha", (UChar (Color::*)(void) const) &Color::GetAlpha)
		.def(py::self == py::self)
		.def(py::self != py::self)

		.def("__str__", [](const Color &c) {
		return "Color = ("+ std::to_string(c.GetAlpha()) + "," + std::to_string(c.GetRed()) + "," + std::to_string(c.GetGreen()) + "," + std::to_string(c.GetBlue())  +")"; });

}

