// GSRoot.cpp : 定义 DLL 应用程序的导出函数。
#include "../stdafx.h"

#include "../implementations/gsGuidFunc.hpp"

PYBIND11_MODULE(GSRoot, m) {
	// Add bindings here
	m.def("version", []() {
		return "0.0.1 Beta";
	});

	load_gs_Guid(m);
}