#include "LogIn.h"
#include "SignUp.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Employees^ emp = nullptr;
    while (true) {
        HotelManagementSystem::LogIn loginForm;
        loginForm.ShowDialog();
        if (loginForm.switchtoregister) {
            HotelManagementSystem::SignUp signupForm;
            signupForm.ShowDialog();
            if (signupForm.switchtologin) {
                continue;
            }
            else {
                emp = loginForm.emp;
                break; // Exit the loop if emp is not nullptr
            }
        }
        // Check if emp is not nullptr after the LogIn form is closed
        emp = loginForm.emp;
        if (emp != nullptr) {
            break; // Exit the loop if emp is not nullptr
        }
    }

    if (emp != nullptr) {
        MessageBox::Show("Successful Authentication of " + emp->fname, "Source.cpp", MessageBoxButtons::OK);
    }
    else {
        MessageBox::Show("Authentication Cancelled", "Source.cpp", MessageBoxButtons::OK);
    }
}


