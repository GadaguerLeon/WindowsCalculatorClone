#include "StandardCalc.h"
#include <chrono>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
using namespace std::chrono;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	auto start = high_resolution_clock::now();
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Calculator::StandardCalc form;
	Application::Run(% form);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	std::cout << "Time taken by program: "
		<< duration.count() << " microseconds" << std::endl;
}