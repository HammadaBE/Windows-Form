#include "MyForm.h"
#include "stdafx.h"
#include <stdlib.h>
#include < cstdlib >




using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LoginUserForm::MyForm myForm;

 
	

	myForm.ShowDialog();
	User^ user = myForm.userLog;

	if (user != nullptr) {
		MessageBox::Show("Succesfull authentication "+ user->name,
			"Authetication", MessageBoxButtons::OK);
		   int result = system("start C:\\Users\\User\\Desktop\\RoverControls_v0.15_13FEB22.1500-Stable\\Debug\\RoverControlConsole.exe");
	}
	else {
		MessageBox::Show("Authentication Canceled",
			"Authetication", MessageBoxButtons::OK);
	}


	

	
}

