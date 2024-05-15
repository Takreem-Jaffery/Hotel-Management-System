#pragma once

#include <windows.h>
#include <WinInet.h>
#include "SignUp.h"
#include "AdminHomePage.h"
#include "ReceptionistHomePage.h"

// Additional headers specific to your project
#include <vcclr.h>
namespace HotelManagementSystem {

	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LogIn
	/// </summary>
	public ref class LogIn : public System::Windows::Forms::Form
	{
	public:
		LogIn(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LogIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Button^ okbutton;

	private: System::Windows::Forms::Button^ cancelbutton;
	private: System::Windows::Forms::LinkLabel^ Signup;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->okbutton = (gcnew System::Windows::Forms::Button());
			this->cancelbutton = (gcnew System::Windows::Forms::Button());
			this->Signup = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->label1->Location = System::Drawing::Point(184, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Log In";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->label2->Location = System::Drawing::Point(33, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"EmployeeID:";
			this->label2->Click += gcnew System::EventHandler(this, &LogIn::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->label3->Location = System::Drawing::Point(33, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(144, 93);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &LogIn::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(144, 153);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(210, 22);
			this->textBox2->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->label4->Location = System::Drawing::Point(116, 259);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 18);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Not registered yet\?";
			// 
			// okbutton
			// 
			this->okbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->okbutton->Location = System::Drawing::Point(77, 201);
			this->okbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->okbutton->Name = L"okbutton";
			this->okbutton->Size = System::Drawing::Size(132, 28);
			this->okbutton->TabIndex = 7;
			this->okbutton->Text = L"OK";
			this->okbutton->UseVisualStyleBackColor = true;
			this->okbutton->Click += gcnew System::EventHandler(this, &LogIn::okbutton_Click);
			// 
			// cancelbutton
			// 
			this->cancelbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->cancelbutton->Location = System::Drawing::Point(226, 201);
			this->cancelbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cancelbutton->Name = L"cancelbutton";
			this->cancelbutton->Size = System::Drawing::Size(128, 28);
			this->cancelbutton->TabIndex = 8;
			this->cancelbutton->Text = L"Cancel";
			this->cancelbutton->UseVisualStyleBackColor = true;
			this->cancelbutton->Click += gcnew System::EventHandler(this, &LogIn::button3_Click);
			// 
			// Signup
			// 
			this->Signup->AutoSize = true;
			this->Signup->Location = System::Drawing::Point(256, 261);
			this->Signup->Name = L"Signup";
			this->Signup->Size = System::Drawing::Size(52, 16);
			this->Signup->TabIndex = 9;
			this->Signup->TabStop = true;
			this->Signup->Text = L"SignUp";
			this->Signup->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LogIn::Signup_LinkClicked);
			// 
			// LogIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->ClientSize = System::Drawing::Size(442, 294);
			this->Controls->Add(this->Signup);
			this->Controls->Add(this->cancelbutton);
			this->Controls->Add(this->okbutton);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"LogIn";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LogIn";
			this->Load += gcnew System::EventHandler(this, &LogIn::LogIn_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: Employees^ emp = nullptr;

	private: System::Void okbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ employeeID = this->textBox1->Text;
		String^ password = this->textBox2->Text;

		if (employeeID->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter Employee ID and Password", "ID or Password empty", MessageBoxButtons::OK);
			return;
		}
		try {
			String^ connstring = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";
			SqlConnection sqlConn(connstring);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM EMPLOYEES WHERE employeeid=@employeeid AND password=@password";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@employeeid", employeeID);
			command.Parameters->AddWithValue("@password", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				emp = gcnew Employees;
				emp->employeeId = reader->GetInt32(0);
				emp->fname = reader->GetString(1);
				emp->lname = reader->GetString(2);
				emp->cnic = reader->GetString(3);
				emp->phoneNum = reader->GetString(4);
				emp->password = reader->GetString(5);
				reader->Close();

				String^ sqlQuery = "SELECT employeeType FROM EMPLOYEES WHERE employeeid=@employeeid AND password=@password";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@employeeid", employeeID);
				command.Parameters->AddWithValue("@password", password);
				reader = command.ExecuteReader();

				if (reader->Read()) {
					String^ type = reader->GetString(0);
					if (type->Equals("Admin")) {
						AdminHomePage^ adminpage = gcnew AdminHomePage();
						adminpage->Show();
					}
					else { //OPEN RECEPTIONISTS HOME PAGE HERE
						ReceptionistHomePage^ page = gcnew ReceptionistHomePage();
						page->Show();
					}
				}
				else
				{
					MessageBox::Show("Something Went Wrong :(", "Something Went Wrong when trying to get Employee Type", MessageBoxButtons::OK);

				}

			}
			else {
				MessageBox::Show("EmployeeID or Password is incorrect", "ID or Password error", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database", "Database Connection Error"+e->ToString(), MessageBoxButtons::OK);
		}
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   //private: System::Void signupbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		   //	this->Hide(); // or this->Close(); if you want to close the login form
		   //
		   //	 //Create and display the signup form
		   //	SignUp^ signupForm = gcnew SignUp();
		   //	signupForm->Show();
		   //}
	private: System::Void LogIn_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	public: bool  switchtoregister = false;
	private: System::Void Signup_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchtoregister = true;
		this->Close();
	}
	};
}
