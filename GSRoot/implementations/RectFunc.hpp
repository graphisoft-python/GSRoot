#pragma once

#include "../stdafx.h"

//#include "DGUtility.hpp"
//#include "Point.hpp"
#include "Rect.hpp"

using namespace GS;


// --- RectEX -----------------------------------------------------------------------------

void load_RectEX(py::module m) {
	// --- FloatRect ----------------------------------------------------------------------
	py::class_<Rect<float>>(m, "FloatRect")
		.def(py::init<>())
		.def(py::init<float &, float &, float &, float &>())
		.def(py::init<Point<float> &>())
		.def("Reset", &Rect<float>::Reset)
		.def("Set", (void (Rect<float>::*)(const float &, const float &, const float &, const float &)) &Rect<float>::Set)
		.def("Set", (void (Rect<float>::*)(const Point<float> &)) &Rect<float>::Set)
		.def("SetWithSize", &Rect<float>::SetWithSize)
		.def("GetLeft", &Rect<float>::GetLeft)
		.def("GetTop", &Rect<float>::GetTop)
		.def("GetRight", &Rect<float>::GetRight)
		.def("GetBottom", &Rect<float>::GetBottom)
		.def("GetWidth", &Rect<float>::GetWidth)
		.def("GetHeight", &Rect<float>::GetHeight)
		.def("SetLeft", &Rect<float>::SetLeft)
		.def("SetTop", &Rect<float>::SetTop)
		.def("SetRight", &Rect<float>::SetRight)
		.def("SetBottom", &Rect<float>::SetBottom)
		.def("SetWidth", &Rect<float>::SetWidth)
		.def("SetHeight", &Rect<float>::SetHeight)
		.def("SetSize", &Rect<float>::SetSize)
		.def("Resize", &Rect<float>::Resize)
		.def("Inset", &Rect<float>::Inset)
		.def("Offset", &Rect<float>::Offset)
		.def(py::self == py::self)
		.def(py::self != py::self)
		.def("IsOverlapping", &Rect<float>::IsOverlapping)
		.def("IsInside", (bool (Rect<float>::*)(const float &, const float &)const) &Rect<float>::IsInside)
		.def("IsInside", (bool (Rect<float>::*)(const Point<float> &)const) &Rect<float>::IsInside)
		.def("IsInside", (bool (Rect<float>::*)(const Rect<float> &)const) &Rect<float>::IsInside)
		.def("IsOutside", &Rect<float>::IsOutside)
		.def("IsEmpty", &Rect<float>::IsEmpty)
		.def("Union", (Rect<float> (Rect<float>::*)(const Rect<float> &)const) &Rect<float>::Union)
		.def("Union", (Rect<float> (Rect<float>::*)(const Point<float> &)const) &Rect<float>::Union)
		.def("Intersection", &Rect<float>::Intersection)
		.def("Unify", (void (Rect<float>::*)(const Rect<float> &)) &Rect<float>::Unify)
		.def("Unify", (void (Rect<float>::*)(const Point<float> &)) &Rect<float>::Unify)
		.def("Intersect", &Rect<float>::Intersect)
		.def("__str__", [](const Rect<float> &r) {
		return "Rect = (" + std::to_string(r.GetTop()) + "," + std::to_string(r.GetLeft())
			+ "," + std::to_string(r.GetRight()) + "," + std::to_string(r.GetBottom()) + ")"; });

	// --- ShortRect ----------------------------------------------------------------------
	py::class_<Rect<short>>(m, "ShortRect")
		.def(py::init<>())
		.def(py::init<short &, short &, short &, short &>())
		.def(py::init<Point<short> &>())
		.def("Reset", &Rect<short>::Reset)
		.def("Set", (void (Rect<short>::*)(const short &, const short &, const short &, const short &)) &Rect<short>::Set)
		.def("Set", (void (Rect<short>::*)(const Point<short> &)) &Rect<short>::Set)
		.def("SetWithSize", &Rect<short>::SetWithSize)
		.def("GetLeft", &Rect<short>::GetLeft)
		.def("GetTop", &Rect<short>::GetTop)
		.def("GetRight", &Rect<short>::GetRight)
		.def("GetBottom", &Rect<short>::GetBottom)
		.def("GetWidth", &Rect<short>::GetWidth)
		.def("GetHeight", &Rect<short>::GetHeight)
		.def("SetLeft", &Rect<short>::SetLeft)
		.def("SetTop", &Rect<short>::SetTop)
		.def("SetRight", &Rect<short>::SetRight)
		.def("SetBottom", &Rect<short>::SetBottom)
		.def("SetWidth", &Rect<short>::SetWidth)
		.def("SetHeight", &Rect<short>::SetHeight)
		.def("SetSize", &Rect<short>::SetSize)
		.def("Resize", &Rect<short>::Resize)
		.def("Inset", &Rect<short>::Inset)
		.def("Offset", &Rect<short>::Offset)
		.def(py::self == py::self)
		.def(py::self != py::self)
		.def("IsOverlapping", &Rect<short>::IsOverlapping)
		.def("IsInside", (bool (Rect<short>::*)(const short &, const short &)const) &Rect<short>::IsInside)
		.def("IsInside", (bool (Rect<short>::*)(const Point<short> &)const) &Rect<short>::IsInside)
		.def("IsInside", (bool (Rect<short>::*)(const Rect<short> &)const) &Rect<short>::IsInside)
		.def("IsOutside", &Rect<short>::IsOutside)
		.def("IsEmpty", &Rect<short>::IsEmpty)
		.def("Union", (Rect<short>(Rect<short>::*)(const Rect<short> &)const) &Rect<short>::Union)
		.def("Union", (Rect<short>(Rect<short>::*)(const Point<short> &)const) &Rect<short>::Union)
		.def("Intersection", &Rect<short>::Intersection)
		.def("Unify", (void (Rect<short>::*)(const Rect<short> &)) &Rect<short>::Unify)
		.def("Unify", (void (Rect<short>::*)(const Point<short> &)) &Rect<short>::Unify)
		.def("Intersect", &Rect<short>::Intersect)
		.def("__str__", [](const Rect<short> &r) {
		return "Rect = (" + std::to_string(r.GetTop()) + "," + std::to_string(r.GetLeft())
			+ "," + std::to_string(r.GetRight()) + "," + std::to_string(r.GetBottom()) + ")"; });

	// --- NativeUnitRect -----------------------------------------------------------------
	//py::class_<Rect<DG::NativeUnit>>(m, "NativeUnitRect")
	//	.def(py::init<>())
	//	.def(py::init<DG::NativeUnit &, DG::NativeUnit &, DG::NativeUnit &, DG::NativeUnit &>())
	//	.def(py::init<Point<DG::NativeUnit> &>())
	//	.def("Reset", &Rect<DG::NativeUnit>::Reset)
	//	.def("Set", (void (Rect<DG::NativeUnit>::*)(const DG::NativeUnit &, const DG::NativeUnit &, const DG::NativeUnit &, const DG::NativeUnit &)) &Rect<DG::NativeUnit>::Set)
	//	.def("Set", (void (Rect<DG::NativeUnit>::*)(const Point<DG::NativeUnit> &)) &Rect<DG::NativeUnit>::Set)
	//	.def("SetWithSize", &Rect<DG::NativeUnit>::SetWithSize)
	//	.def("GetLeft", &Rect<DG::NativeUnit>::GetLeft)
	//	.def("GetTop", &Rect<DG::NativeUnit>::GetTop)
	//	.def("GetRight", &Rect<DG::NativeUnit>::GetRight)
	//	.def("GetBottom", &Rect<DG::NativeUnit>::GetBottom)
	//	.def("GetWidth", &Rect<DG::NativeUnit>::GetWidth)
	//	.def("GetHeight", &Rect<DG::NativeUnit>::GetHeight)
	//	.def("SetLeft", &Rect<DG::NativeUnit>::SetLeft)
	//	.def("SetTop", &Rect<DG::NativeUnit>::SetTop)
	//	.def("SetRight", &Rect<DG::NativeUnit>::SetRight)
	//	.def("SetBottom", &Rect<DG::NativeUnit>::SetBottom)
	//	.def("SetWidth", &Rect<DG::NativeUnit>::SetWidth)
	//	.def("SetHeight", &Rect<DG::NativeUnit>::SetHeight)
	//	.def("SetSize", &Rect<DG::NativeUnit>::SetSize)
	//	.def("Resize", &Rect<DG::NativeUnit>::Resize)
	//	.def("Inset", &Rect<DG::NativeUnit>::Inset)
	//	.def("Offset", &Rect<DG::NativeUnit>::Offset)
	//	.def(py::self == py::self)
	//	.def(py::self != py::self)
	//	.def("IsOverlapping", &Rect<DG::NativeUnit>::IsOverlapping)
	//	.def("IsInside", (bool (Rect<DG::NativeUnit>::*)(const DG::NativeUnit &, const DG::NativeUnit &)const) &Rect<DG::NativeUnit>::IsInside)
	//	.def("IsInside", (bool (Rect<DG::NativeUnit>::*)(const Point<DG::NativeUnit> &)const) &Rect<DG::NativeUnit>::IsInside)
	//	.def("IsInside", (bool (Rect<DG::NativeUnit>::*)(const Rect<DG::NativeUnit> &)const) &Rect<DG::NativeUnit>::IsInside)
	//	.def("IsOutside", &Rect<DG::NativeUnit>::IsOutside)
	//	.def("IsEmpty", &Rect<DG::NativeUnit>::IsEmpty)
	//	.def("Union", (Rect<DG::NativeUnit>(Rect<DG::NativeUnit>::*)(const Rect<DG::NativeUnit> &)const) &Rect<DG::NativeUnit>::Union)
	//	.def("Union", (Rect<DG::NativeUnit>(Rect<DG::NativeUnit>::*)(const Point<DG::NativeUnit> &)const) &Rect<DG::NativeUnit>::Union)
	//	.def("Intersection", &Rect<DG::NativeUnit>::Intersection)
	//	.def("Unify", (void (Rect<DG::NativeUnit>::*)(const Rect<DG::NativeUnit> &)) &Rect<DG::NativeUnit>::Unify)
	//	.def("Unify", (void (Rect<DG::NativeUnit>::*)(const Point<DG::NativeUnit> &)) &Rect<DG::NativeUnit>::Unify)
	//	.def("Intersect", &Rect<DG::NativeUnit>::Intersect);
}

