#pragma once
#include "Header.h"
namespace HotelManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for SignUp
	/// </summary>
	public ref class SignUp : public System::Windows::Forms::Form
	{
	public:
		SignUp(void)
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
		~SignUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	protected:

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(299, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign Up";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"First Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(37, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Last Name:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(37, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"CNIC:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(37, 219);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Phone Number:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(37, 258);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Password:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(37, 58);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(104, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"EmployeeID:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(222, 58);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(159, 22);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(222, 102);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(151, 22);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(222, 141);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(151, 22);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(222, 177);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(349, 22);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(222, 218);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(276, 22);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(222, 258);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->PasswordChar = '*';
			this->textBox6->Size = System::Drawing::Size(224, 22);
			this->textBox6->TabIndex = 12;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(37, 295);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(152, 20);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Confirm Password:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(222, 295);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->PasswordChar = '*';
			this->textBox7->Size = System::Drawing::Size(227, 22);
			this->textBox7->TabIndex = 14;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(222, 337);
			this->radioButton1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(66, 20);
			this->radioButton1->TabIndex = 15;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Admin";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(340, 337);
			this->radioButton2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(103, 20);
			this->radioButton2->TabIndex = 16;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Receptionist";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &SignUp::radioButton2_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(233, 375);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 43);
			this->button1->TabIndex = 17;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SignUp::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(330, 375);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 43);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SignUp::button2_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(675, 398);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(50, 20);
			this->linkLabel1->TabIndex = 19;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"LogIn";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &SignUp::linkLabel1_LinkClicked);
			// 
			// SignUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->ClientSize = System::Drawing::Size(740, 438);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"SignUp";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SignUp";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: bool switchtologin = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchtologin = true;
		this->Close();
	}
		   Employees^ emp = nullptr;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ employeeID = this->textBox1->Text;
		String^ fname = this->textBox2->Text;
		String^ lname = this->textBox3->Text;
		String^ cnic = this->textBox4->Text;
		String^ phoneNum = this->textBox5->Text;
		String^ password = this->textBox6->Text;
		String^ confirmpassword = this->textBox7->Text;

		if (employeeID->Length == 0 || password->Length == 0 || lname->Length == 0 || fname->Length == 0 || cnic->Length == 0 || phoneNum->Length == 0 || confirmpassword->Length == 0) {
			MessageBox::Show("Please enter all the fields", "One or more empty fields", MessageBoxButtons::OK);
			return;
		}
		if (String::Compare(password, confirmpassword) != 0) {
			MessageBox::Show("Password and Confirm Password do not match", "Password Error", MessageBoxButtons::OK);
			return;
		}
		try {
			String^ connString = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO employees" + "(employeeid, fname, lname, cnic, phoneNum, password) VALUES" + "(@employeeid, @fname, @lname, @cnic, @phoneNum, @password); ";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@employeeid", employeeID);
			command.Parameters->AddWithValue("@fname", fname); command.Parameters->AddWithValue("@lname", lname); command.Parameters->AddWithValue("@cnic", cnic); command.Parameters->AddWithValue("@phoneNum", phoneNum); command.Parameters->AddWithValue("@password", password);
			command.ExecuteNonQuery();
			emp = gcnew Employees;
			int employeeIdValue = Convert::ToInt32(employeeID);
			emp->employeeId = employeeIdValue;
			emp->fname = fname;
			emp->lname = lname;
			emp->cnic = cnic;
			emp->phoneNum = phoneNum;
			emp->password = password;
			this->Close();


		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		// Connection string to your SQL Server database
		String^ connectionString = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";

		// SQL query to create table if it doesn't exist
		//String^ createTableQuery = /*"IF NOT EXISTS (SELECT * FROM sys.objects WHERE object_id =*/ /*OBJECT_ID(N'[dbo].[Recep]') AND type in (N'U'))*/ "IF NOT EXISTS(SELECT * FROM sys.objects WHERE object_id = OBJECT_ID(N'[dbo].[Recep]')) AND type in(N'U')"
		//	"BEGIN CREATE TABLE Recep  (ID INT PRIMARY KEY IDENTITY,employeeId INT, fname VARCHAR(MAX), lname VARCHAR(MAX), cnic VARCHAR(MAX), phoneNum VARCHAR(MAX), password VARCHAR(MAX)); END";

		String^ createTableQuery = "IF NOT EXISTS(SELECT * FROM sys.objects WHERE object_id = OBJECT_ID(N'[dbo].[Recep]'))" /*AND type in(N'U')*/
			"BEGIN CREATE TABLE Recep  (employeeId INT, fname VARCHAR(MAX), lname VARCHAR(MAX), cnic VARCHAR(MAX), phoneNum VARCHAR(MAX), password VARCHAR(MAX)); END";

		// SQL query to insert data into the table
		String^ insertDataQuery = "INSERT INTO Recep (employeeId, fname, lname, cnic, phoneNum, password) VALUES (@employeeId, @fname, @lname, @cnic,@phoneNum, @password)";

		try {
			// Establish connection
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			connection->Open();

			// Create table if it doesn't exist
			SqlCommand^ createTableCommand = gcnew SqlCommand(createTableQuery, connection);
			createTableCommand->ExecuteNonQuery();

			// Insert data into the table
			SqlCommand^ insertDataCommand = gcnew SqlCommand(insertDataQuery, connection);
			// Assuming textBox1 and textBox2 are your textboxes containing data to be inserted
			insertDataCommand->Parameters->AddWithValue("@employeeId", textBox1->Text);
			insertDataCommand->Parameters->AddWithValue("@fname", textBox2->Text);
			insertDataCommand->Parameters->AddWithValue("@lname", textBox3->Text);
			insertDataCommand->Parameters->AddWithValue("@cnic", textBox4->Text);
			insertDataCommand->Parameters->AddWithValue("@phoneNum", textBox5->Text);
			insertDataCommand->Parameters->AddWithValue("@password", textBox6->Text);
			/*insertDataCommand->Parameters->AddWithValue("@Value6", textBox7->Text);*/

			// Add more parameters as needed

			insertDataCommand->ExecuteNonQuery();

			// Close connection
			connection->Close();

			// Optionally, display a message or perform any other actions after successful insertion
			MessageBox::Show("Data inserted into table successfully.");
		}
		catch (Exception^ ex) {
			// Handle any exceptions
			MessageBox::Show("Error: " + ex->Message);
		}
	}
	};
}
