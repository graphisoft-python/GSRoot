#pragma once

#include "../stdafx.h"

//#include "DGUtility.hpp"
//#include "Point.hpp"
//#include "Rect.hpp"

//using namespace GS;

#include "adapter/gs_rect.hpp"


// --- RectEX -----------------------------------------------------------------------------

void load_RectEX(py::module m) {

	py::class_<adapter::Rect>(m, "Rect")
		.def(py::init<>())
		.def(py::init<double &, double &, double &, double &>())
		.def(py::init<double &, double &, double &, double &,double &>())
		.def(py::init<adapter::Point &>())
		.def(py::init<adapter::Point &,double &>())
		.def("Reset", &adapter::Rect::Reset)
		.def("Set", (void (adapter::Rect::*)(const double &, const double &, const double &, const double &)) &adapter::Rect::Set)
		.def("Set", (void (adapter::Rect::*)(const adapter::Point &)) &adapter::Rect::Set)
		.def("SetWithSize", &adapter::Rect::SetWithSize)
		.def("GetLeft", &adapter::Rect::GetLeft)
		.def("GetTop", &adapter::Rect::GetTop)
		.def("GetRight", &adapter::Rect::GetRight)
		.def("GetBottom", &adapter::Rect::GetBottom)
		.def("GetWidth", &adapter::Rect::GetWidth)
		.def("GetHeight", &adapter::Rect::GetHeight)
		.def("SetLeft", &adapter::Rect::SetLeft)
		.def("SetTop", &adapter::Rect::SetTop)
		.def("SetRight", &adapter::Rect::SetRight)
		.def("SetBottom", &adapter::Rect::SetBottom)
		.def("SetWidth", &adapter::Rect::SetWidth)
		.def("SetHeight", &adapter::Rect::SetHeight)
		.def("SetSize", &adapter::Rect::SetSize)
		.def("Resize", &adapter::Rect::Resize)
		.def("Inset", &adapter::Rect::Inset)
		.def("Offset", &adapter::Rect::Offset)
		.def(py::self == py::self)
		.def(py::self != py::self)
		.def("IsOverlapping", &adapter::Rect::IsOverlapping)
		.def("IsInside", (bool (adapter::Rect::*)(const double &, const double &)const) &adapter::Rect::IsInside)
		.def("IsInside", (bool (adapter::Rect::*)(const adapter::Point &)const) &adapter::Rect::IsInside)
		.def("IsInside", (bool (adapter::Rect::*)(const adapter::Rect &)const) &adapter::Rect::IsInside)
		.def("IsOutside", &adapter::Rect::IsOutside)
		.def("IsEmpty", &adapter::Rect::IsEmpty)
		.def("Union", (adapter::Rect (adapter::Rect::*)(const adapter::Rect &)const) &adapter::Rect::Union)
		.def("Union", (adapter::Rect (adapter::Rect::*)(const adapter::Point &)const) &adapter::Rect::Union)
		.def("Intersection", &adapter::Rect::Intersection)
		.def("Unify", (void (adapter::Rect::*)(const adapter::Rect &)) &adapter::Rect::Unify)
		.def("Unify", (void (adapter::Rect::*)(const adapter::Point &)) &adapter::Rect::Unify)
		.def("Intersect", &adapter::Rect::Intersect)
		.def("GetScale",&adapter::Rect::GetScale)

		.def(py::init<adapter::Point &, adapter::Point&>())
		.def(py::init<adapter::Point &,adapter::Point&,double &>())
		.def(py::init<adapter::Point &,double &,double &>())
		.def(py::init<adapter::Point &,double &,double &,double &>())
		.def("Set", (void (adapter::Rect::*)(const adapter::Rect &)) &adapter::Rect::Set)
		.def("Set", (void (adapter::Rect::*)(const adapter::Point &,const adapter::Point &)) &adapter::Rect::Set)
		.def("Set", (void (adapter::Rect::*)(const adapter::Point &, const double &,const double &)) &adapter::Rect::Set)
		.def("SetLeftTop", &adapter::Rect::SetLeftTop)
		.def("GetLeftTop", &adapter::Rect::GetLeftTop)
		.def("SetLeftBottom", &adapter::Rect::SetLeftBottom)
		.def("GetLeftBottom", &adapter::Rect::GetLeftBottom)
		.def("SetRightTop", &adapter::Rect::SetRightTop)
		.def("GetRightTop", &adapter::Rect::GetRightTop)
		.def("SetRightBottom", &adapter::Rect::GetRightBottom)
		.def("SetCenter", &adapter::Rect::SetCenter)
		.def("GetCenter", &adapter::Rect::GetCenter)
		.def("Move", &adapter::Rect::Move)
		.def("Inflate", &adapter::Rect::Inflate)
		.def("Contains", (bool (adapter::Rect::*)(const adapter::Point &) const)&adapter::Rect::Contains)
		.def("Contains", (bool (adapter::Rect::*)(const double &, const double &) const)&adapter::Rect::Contains)
		.def("IsIntersecting", &adapter::Rect::IsIntersecting)

		.def("__str__", [](const adapter::Rect &r) {
		return "Rect = (" + std::to_string(r.GetTop()) + "," + std::to_string(r.GetLeft())
			+ "," + std::to_string(r.GetRight()) + "," + std::to_string(r.GetBottom()) + ")"; });

}

