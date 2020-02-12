#pragma once

#include "../stdafx.h"

#include "DGUtility.hpp"
#include "Point.hpp"

using namespace GS;


// --- PointEX ----------------------------------------------------------------------------

void load_PointEX(py::module m) {
	// --- FloatPoint ---------------------------------------------------------------------
	py::class_<Point<float>>(m, "FloatPoint")
		.def(py::init<>())
		.def(py::init<float &, float &>())
		.def("Set", &Point<float>::Set)
		.def("GetX", &Point<float>::GetX)
		.def("GetY", &Point<float>::GetY)
		.def("SetX", &Point<float>::SetX)
		.def("SetY", &Point<float>::SetY)
		.def("Offset", &Point<float>::Offset)
		.def(py::self == py::self)
		.def(py::self != py::self)
		.def("__str__", [](const Point<float> &p) {
		return "Point = (" + std::to_string(p.GetX()) + "," + std::to_string(p.GetY()) + ")"; 
		});

	// --- ShortPoint ---------------------------------------------------------------------
	py::class_<Point<short>>(m, "ShortPoint")
		.def(py::init<>())
		.def(py::init<short &, short &>())
		.def("Set", &Point<short>::Set)
		.def("GetX", &Point<short>::GetX)
		.def("GetY", &Point<short>::GetY)
		.def("SetX", &Point<short>::SetX)
		.def("SetY", &Point<short>::SetY)
		.def("Offset", &Point<short>::Offset)
		.def(py::self == py::self)
		.def(py::self != py::self)
		.def("__str__", [](const Point<short> &p) {
		return "Point = (" + std::to_string(p.GetX()) + "," + std::to_string(p.GetY()) + ")";
		});

	// --- NativeUnitPoint ----------------------------------------------------------------
	//py::class_<Point<DG::NativeUnit>>(m, "NativeUnitPoint")
	//	.def(py::init<>())
	//	.def(py::init<DG::NativeUnit &, DG::NativeUnit &>())
	//	.def("Set", &Point<DG::NativeUnit>::Set)
	//	.def("GetX", &Point<DG::NativeUnit>::GetX)
	//	.def("GetY", &Point<DG::NativeUnit>::GetY)
	//	.def("SetX", &Point<DG::NativeUnit>::SetX)
	//	.def("SetY", &Point<DG::NativeUnit>::SetY)
	//	.def("Offset", &Point<DG::NativeUnit>::Offset)
	//	.def(py::self == py::self)
	//	.def(py::self != py::self);
}

