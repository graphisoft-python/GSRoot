// GSRoot.cpp : 定义 DLL 应用程序的导出函数。
#include "../stdafx.h"

#include "../implementations/GuidFunc.hpp"
#include "../implementations/ColorFunc.hpp"


PYBIND11_MODULE(GSRoot, m) {

	m.def("version", []() {	return "version 0.0.3"; });

// --- Add bindings here ------------------------------------------------------------------


// --- GSGuid
	load_Guid(m);

// --- Color
	load_Color(m);

// --- Add bindings end -------------------------------------------------------------------
}