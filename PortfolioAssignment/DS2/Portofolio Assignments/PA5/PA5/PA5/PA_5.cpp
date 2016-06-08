#include "PA_5.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ agrs)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PA5::PA_5 form;
	Application::Run(%form);
}

