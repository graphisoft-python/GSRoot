#include "../stdafx.h"
#include "GSGuid.hpp"

using namespace GS;

void load_gs_Guid(py::module m) {
	py::class_<Guid>(m, "Guid")
		.def(py::init<>())
		.def(py::init<char *>())
		
		.def("Generate", [](Guid &self) { 
			return self.Generate() == NoError; 
		})
		.def("Clear", &Guid::Clear)
		.def("ConvertToString", [](Guid &self) {
			char buffer[GUIDStringLength];
			if (self.ConvertToString(buffer) == NoError) {
				return std::string(buffer);
			}else {
				return std::string("");
			}
			//GS::UniString -> unicode  
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
		.def("SetPrefix", &Guid::SetPrefix);
}


