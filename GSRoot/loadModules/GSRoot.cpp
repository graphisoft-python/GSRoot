// GSRoot.cpp : 定义 DLL 应用程序的导出函数。
#include "../stdafx.h"

#include "../implementations/GuidFunc.hpp"
#include "../implementations/ColorFunc.hpp"
#include "../implementations/PatternFunc.hpp"
#include "../implementations/PointFunc.hpp"
#include "../implementations/RectFunc.hpp"
#include "../implementations/PatternFunc.hpp"
#include "../implementations/CHFunc.hpp"

PYBIND11_MODULE(GSRoot, m) {

	m.def("version", []() {	return "version 0.1.1"; });

// --- Add bindings here ------------------------------------------------------------------

	// --- GSGuid
	load_Guid(m);

	// --- Color
	load_Color(m);

	// --- Pattern
	load_Pattern(m);

	// --- Point
	load_PointEX(m);

	// --- Rect
	load_RectEX(m);

	// --- CH
	load_GSCharCode(m);

// --- Add bindings end -------------------------------------------------------------------
}