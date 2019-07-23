// GSRoot.cpp : 定义 DLL 应用程序的导出函数。
#include "../stdafx.h"

#include "../implementations/gsGuidFunc.hpp"
#include "../implementations/gsColorFunc.hpp"


PYBIND11_MODULE(GSRoot, m) {

	m.def("version", []() {	return "version 0.0.2"; });

	// --- Add bindings here ------------------------------------------------------------------

	m.def("foo", []() {
		return "Hello, World! GSRoot";
	});

// --- GSGuid
	load_gs_Guid(m);

// --- Color
	load_gs_Color(m);

	// --- Add bindings end -------------------------------------------------------------------
}