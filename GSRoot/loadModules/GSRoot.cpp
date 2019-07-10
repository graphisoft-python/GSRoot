// GSRoot.cpp : 定义 DLL 应用程序的导出函数。
#include "../stdafx.h"

#include "../implementations/gsGuidFunc.hpp"

#define TEST 0;

#if TEST == 1
class Pet {
public:
	Pet() {}
	Pet(const std::string &name) { this->name = name; }

	void setName(const std::string &name_) { name = name_; }
	const std::string &getName() const { return name; }

	int add(int a = 1, int b = 5) { return a + b; }

	std::string name;
};

void load_test(py::module m) {
	py::class_<Pet> m_pet(m, "Pet");
	m_pet
		.def(py::init<>())
		.def(py::init<const std::string &>())

		.def("setName", &Pet::setName)
		.def("getName", &Pet::getName)
		.def("add", &Pet::add, py::arg("a"), py::arg("b") = 5)

		.def("__str__", [](const Pet &p) {
		return "name is " + p.name;
	});
}
#endif // TEST == 1





PYBIND11_MODULE(GSRoot, m) {

	m.doc() = "version 2019.7.10";

	// Add bindings here
	m.def("foo", []() {
		return "Hello, World! GSRoot";
	});

#if  TEST == 1
	load_test(m);
#else
	load_gs_Guid(m);
#endif //  TEST == 1
}