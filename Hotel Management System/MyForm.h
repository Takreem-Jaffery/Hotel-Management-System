#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <msclr\marshal_cppstd.h>

namespace HotelManagementSystem {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient; // For SqlCommand
	using namespace System::Data;            // For DataTable, SqlDataAdapter, etc.


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button3;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;






	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Column6;



		   SqlConnection^ con = gcnew SqlConnection("Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;");
#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->Column6 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			   this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			   this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(97, 141);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(56, 22);
			   this->label1->TabIndex = 1;
			   this->label1->Text = L"Price";
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				   L"Regular", L"Regular Twin", L"Suit", L"Suit Queen",
					   L"Ultra Suit", L"", L"", L""
			   });
			   this->comboBox1->Location = System::Drawing::Point(215, 96);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(121, 24);
			   this->comboBox1->TabIndex = 2;
			   this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(97, 98);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(112, 22);
			   this->label2->TabIndex = 3;
			   this->label2->Text = L"Room Type";
			   // 
			   // comboBox2
			   // 
			   this->comboBox2->FormattingEnabled = true;
			   this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"3000", L"5000", L"7000", L"10000", L"" });
			   this->comboBox2->Location = System::Drawing::Point(215, 143);
			   this->comboBox2->Name = L"comboBox2";
			   this->comboBox2->Size = System::Drawing::Size(121, 24);
			   this->comboBox2->TabIndex = 4;
			   this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->AllowUserToAddRows = false;
			   this->dataGridView1->AllowUserToDeleteRows = false;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column6 });
			   this->dataGridView1->Location = System::Drawing::Point(69, 383);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->ReadOnly = true;
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->RowTemplate->Height = 24;
			   this->dataGridView1->Size = System::Drawing::Size(804, 201);
			   this->dataGridView1->TabIndex = 5;
			   this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			   // 
			   // Column6
			   // 
			   this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			   dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			   dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->Column6->DefaultCellStyle = dataGridViewCellStyle1;
			   this->Column6->Frozen = true;
			   this->Column6->HeaderText = L"Book";
			   this->Column6->MinimumWidth = 6;
			   this->Column6->Name = L"Column6";
			   this->Column6->ReadOnly = true;
			   this->Column6->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			   this->Column6->Text = L"Book";
			   this->Column6->UseColumnTextForButtonValue = true;
			   this->Column6->Width = 125;
			   // 
			   // dateTimePicker1
			   // 
			   this->dateTimePicker1->Location = System::Drawing::Point(593, 98);
			   this->dateTimePicker1->Name = L"dateTimePicker1";
			   this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			   this->dateTimePicker1->TabIndex = 6;
			   // 
			   // dateTimePicker2
			   // 
			   this->dateTimePicker2->Location = System::Drawing::Point(593, 141);
			   this->dateTimePicker2->Name = L"dateTimePicker2";
			   this->dateTimePicker2->Size = System::Drawing::Size(200, 22);
			   this->dateTimePicker2->TabIndex = 7;
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(434, 98);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(137, 22);
			   this->label3->TabIndex = 8;
			   this->label3->Text = L"Check-In Date";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->Location = System::Drawing::Point(434, 143);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(153, 22);
			   this->label4->TabIndex = 9;
			   this->label4->Text = L"Check-Out Date";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->Location = System::Drawing::Point(97, 249);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(61, 22);
			   this->label5->TabIndex = 10;
			   this->label5->Text = L"Name";
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label6->Location = System::Drawing::Point(97, 295);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(79, 22);
			   this->label6->TabIndex = 11;
			   this->label6->Text = L"Contact";
			   this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label7->Location = System::Drawing::Point(96, 345);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(57, 22);
			   this->label7->TabIndex = 12;
			   this->label7->Text = L"CNIC";
			   this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(215, 251);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(100, 22);
			   this->textBox2->TabIndex = 13;
			   this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			   // 
			   // textBox3
			   // 
			   this->textBox3->Location = System::Drawing::Point(215, 297);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(100, 22);
			   this->textBox3->TabIndex = 14;
			   this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			   // 
			   // textBox4
			   // 
			   this->textBox4->Location = System::Drawing::Point(215, 347);
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->Size = System::Drawing::Size(100, 22);
			   this->textBox4->TabIndex = 15;
			   this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			   // 
			   // button1
			   // 
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(261, 614);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(103, 53);
			   this->button1->TabIndex = 16;
			   this->button1->Text = L"OK";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button2->Location = System::Drawing::Point(501, 614);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(101, 53);
			   this->button2->TabIndex = 17;
			   this->button2->Text = L"Cancel";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label8->Location = System::Drawing::Point(357, 27);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(170, 32);
			   this->label8->TabIndex = 18;
			   this->label8->Text = L"Book Room";
			   this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			   // 
			   // button3
			   // 
			   this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button3->Location = System::Drawing::Point(674, 319);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(119, 48);
			   this->button3->TabIndex = 19;
			   this->button3->Text = L"Find Room";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label9->Location = System::Drawing::Point(297, 194);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(305, 32);
			   this->label9->TabIndex = 20;
			   this->label9->Text = L"Customer Information";
			   this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				   static_cast<System::Int32>(static_cast<System::Byte>(220)));
			   this->ClientSize = System::Drawing::Size(919, 679);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->textBox4);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->textBox3);
			   this->Controls->Add(this->label9);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->dateTimePicker2);
			   this->Controls->Add(this->dateTimePicker1);
			   this->Controls->Add(this->dataGridView1);
			   this->Controls->Add(this->comboBox2);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->comboBox1);
			   this->Controls->Add(this->label1);
			   this->Name = L"MyForm";
			   this->Text = L"Booking";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Add your logic here to handle the SelectedIndexChanged event of comboBox1
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Add your logic here to handle the SelectedIndexChanged event of comboBox1
	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//room num
			Object^ selectedValueObject1 = comboBox1->SelectedItem;
			String^ roomtype = dynamic_cast<String^>(selectedValueObject1);
			//price
			Object^ selectedValueObject2 = comboBox2->SelectedItem;
			String^ pric = safe_cast<String^>(selectedValueObject2);
			float price = float::Parse(pric);
			DateTime checkin = dateTimePicker1->Value.Date;
			DateTime checkout = dateTimePicker2->Value.Date;
			con->Open();
			SqlCommand^ command = gcnew SqlCommand("exec find_Rooms " + "'"
				+ roomtype + "' , " + price + ", '" + checkin + "' , '" + checkout + "'", con);
			//command->CommandType = CommandType::StoredProcedure;

			//// Add parameters to the SqlCommand
			//command->Parameters->Add("@roomtype", SqlDbType::VarChar, 50)->Value = roomtype;
			//command->Parameters->Add("@price", SqlDbType::Float)->Value = price;

			// Execute the command
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
			DataTable^ dataTable = gcnew DataTable();
			adapter->Fill(dataTable);

			// Bind the DataTable to the DataGridView
			dataGridView1->DataSource = dataTable;
			con->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: something wrong with combobox values!");
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		try {// Check if the clicked cell is the book button
			DataGridView^ senderGrid = dynamic_cast<DataGridView^>(sender);

			if (senderGrid->Columns[e->ColumnIndex]->GetType() == DataGridViewButtonColumn::typeid &&
				e->RowIndex >= 0) {
				DataGridViewRow^ selectedRow = dataGridView1->Rows[e->RowIndex];
				String^ roomnum = selectedRow->Cells[1]->Value->ToString();
				int roomnom = int::Parse(roomnum);
				String^ roomType = selectedRow->Cells[2]->Value->ToString();
				String^ bedNum = selectedRow->Cells[3]->Value->ToString();
				String^ bedType = selectedRow->Cells[4]->Value->ToString();
				String^ pric = selectedRow->Cells[5]->Value->ToString();
				float price = float::Parse(pric);

				dateTimePicker1->Format = DateTimePickerFormat::Custom;
				dateTimePicker1->CustomFormat = "yyyy/MM/dd";
				DateTime checkin = dateTimePicker1->Value.Date;


				dateTimePicker2->Format = DateTimePickerFormat::Custom;
				dateTimePicker2->CustomFormat = "yyyy/MM/dd";
				DateTime checkout = dateTimePicker2->Value.Date;

				String^ name = textBox2->Text;
				String^ contact = textBox3->Text;
				String^ cnic = textBox4->Text;
				con->Open();
				int flag; // Initialize flag variable

				// Concatenate parameters correctly
				SqlCommand^ command = gcnew SqlCommand("EXEC room_reservation " + roomnom + ", '" + roomType + "', " + price + ", '" + checkin + "', '" + checkout + "', '" + name + "', '" + contact + "', '" + cnic + "', @flag OUTPUT", con);

				// Add the @flag parameter
				command->Parameters->Add("@flag", SqlDbType::Int)->Direction = ParameterDirection::Output;

				// Execute the stored procedure
				command->ExecuteNonQuery();

				// Retrieve the value of @flag after executing the stored procedure
				flag = Convert::ToInt32(command->Parameters["@flag"]->Value);

				// Check the value of flag
				MessageBox::Show("Booking Successful!");
				con->Close();
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: something wrong with booking!");
		}
	}

	};
};
