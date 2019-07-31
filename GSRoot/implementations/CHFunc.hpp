#pragma once

#include "../stdafx.h"

#include "CH.hpp"


// --- GSCharCode -----------------------------------------------------------------------

void load_GSCharCode(py::module m) {
	py::enum_<GSCharCode>(m, "GSCharCode")
		.value("CC_Default", GSCharCode::CC_Default)
		.value("CC_System", GSCharCode::CC_System)
		.value("CC_User", GSCharCode::CC_User)
		.value("CC_Application", GSCharCode::CC_Application)
		.value("CC_Legacy", GSCharCode::CC_Legacy)

		.value("CC_WestEuropean", GSCharCode::CC_WestEuropean)
		.value("CC_EastEuropean", GSCharCode::CC_EastEuropean)
		.value("CC_Baltic", GSCharCode::CC_Baltic)
		.value("CC_Cyrillic", GSCharCode::CC_Cyrillic)
		.value("CC_Greek", GSCharCode::CC_Greek)
		.value("CC_Turkish", GSCharCode::CC_Turkish)

		.value("CC_Hebrew", GSCharCode::CC_Hebrew)
		.value("CC_Arabic", GSCharCode::CC_Arabic)

		.value("CC_Thai", GSCharCode::CC_Thai)
		.value("CC_Japanese", GSCharCode::CC_Japanese)
		.value("CC_TradChinese", GSCharCode::CC_TradChinese)
		.value("CC_SimpChinese", GSCharCode::CC_SimpChinese)
		.value("CC_Korean", GSCharCode::CC_Korean)

		.value("CC_Symbol", GSCharCode::CC_Symbol)
		
		.value("CC_UTF8", GSCharCode::CC_UTF8)
		.value("CC_UTF16", GSCharCode::CC_UTF16)
		.value("CC_UniCode", GSCharCode::CC_UniCode)
		.export_values();
}
