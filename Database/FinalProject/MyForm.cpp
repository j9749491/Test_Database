#include "MyForm.h"
#include "MyForm6.h"


///////�U��include���i���
#include <Windows.h>
#include <mysql.h>

///////�ݩ�->�s����->�t��->�l�t��->Window
///////�ݩ�->�s����->�i�J�I->�s��->main

using namespace System;
using namespace System::Windows::Forms;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	FinalProject::MyForm form;
	Application::Run(%form);
}
