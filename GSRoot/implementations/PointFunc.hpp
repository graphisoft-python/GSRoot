#pragma once

#include "../stdafx.h"
#include "adapter/gs_point.hpp"


// --- PointEX ----------------------------------------------------------------------------

void load_PointEX(py::module m) {
	// --- AdapterPoint ---------------------------------------------------------------------
	py::class_<adapter::Point>(m, "Point")
		.def(py::init<>())
		.def(py::init<double &, double &>())
		.def(py::init<double &, double&, double&>())
		.def("Set", &adapter::Point::Set)
		.def("GetX", &adapter::Point::GetX)
		.def("GetY", &adapter::Point::GetY)
		.def("SetX", &adapter::Point::SetX)
		.def("SetY", &adapter::Point::SetY)
		.def("Offset", &adapter::Point::Offset)
		.def("GetScale", &adapter::Point::GetScale)
		.def(py::self == py::self)
		.def(py::self != py::self)
		.def("__str__", [](const adapter::Point &p) {
		return "Point = (" + std::to_string(p.GetX()) + "," + std::to_string(p.GetY()) + ")";
	});

}

