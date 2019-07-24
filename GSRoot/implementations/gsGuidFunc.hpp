#pragma once

#include "../stdafx.h"

#include "GSGuid.hpp"

using namespace GS;


// --- Guid -------------------------------------------------------------------------------

void load_gs_Guid(py::module m) {
	py::class_<Guid>(m, "Guid")
		.def(py::init<>())
		.def(py::init<UniString &>())
		//.def(py::self = py::self)
		.def("Generate", [](Guid &self) { 
			return self.Generate() == NoError;
		})
		.def("Clear", &Guid::Clear)
		.def("ToUniString", &Guid::ToUniString)
		.def("ConvertFromString", [](Guid &self,const UniString &string) {
			return self.ConvertFromString(string) == NoError;
		})
		.def("ConvertFromPrefixString", [](Guid &self, const UniString &string) {
			return self.ConvertFromPrefixString(string) == NoError;
		})
		.def("Invert", &Guid::Invert)
		.def("IsEqual", &Guid::IsEqual)
		.def("IsNull", &Guid::IsNull)
		.def("Compare", [](Guid &self,Guid &rightOp) {
			return self.Compare(rightOp) == NoError;
		})
		.def("HasPrefix", &Guid::HasPrefix)
		.def(py::self == py::self)
		.def(py::self != py::self)
		.def(py::self < py::self)
		.def(py::self > py::self)
		.def(py::self <= py::self)
		.def(py::self >= py::self)
		.def("GetHashValue", &Guid::GetHashValue)
		.def("GetPrefix", &Guid::GetPrefix)
		.def("SetPrefix", &Guid::SetPrefix)
		.def("__str__", [](const Guid &g) {
		return "Guid = (" + g.ToUniString() + ")"; });
}


