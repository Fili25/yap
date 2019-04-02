#include "stdafx.h" 

using namespace System;
using namespace System::Windows::Forms;

void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	YapC::GlavForm nameObjectForm;
	Application::Run(%nameObjectForm);
}
