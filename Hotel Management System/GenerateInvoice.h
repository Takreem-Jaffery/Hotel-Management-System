#pragma once

namespace HotelManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient; // For SqlCommand
	using namespace System::Data;

	/// <summary>
	/// Summary for GenerateInvoice
	/// </summary>
	public ref class GenerateInvoice : public System::Windows::Forms::Form
	{
	public:
		GenerateInvoice(void)
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
		~GenerateInvoice()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
		   SqlConnection^ con = gcnew SqlConnection("Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;");


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->panel1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::Color::White;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(177, 24);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(271, 32);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Invoice Generation";
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Location = System::Drawing::Point(260, 92);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(121, 24);
			   this->comboBox1->TabIndex = 1;
			   this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &GenerateInvoice::comboBox1_SelectedIndexChanged);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::Color::White;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(121, 92);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(107, 22);
			   this->label2->TabIndex = 2;
			   this->label2->Text = L"Booking ID";
			   this->label2->Click += gcnew System::EventHandler(this, &GenerateInvoice::label2_Click);
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				   static_cast<System::Int32>(static_cast<System::Byte>(220)));
			   this->panel1->Controls->Add(this->textBox6);
			   this->panel1->Controls->Add(this->label8);
			   this->panel1->Controls->Add(this->textBox5);
			   this->panel1->Controls->Add(this->textBox4);
			   this->panel1->Controls->Add(this->textBox3);
			   this->panel1->Controls->Add(this->textBox2);
			   this->panel1->Controls->Add(this->textBox1);
			   this->panel1->Controls->Add(this->label7);
			   this->panel1->Controls->Add(this->label6);
			   this->panel1->Controls->Add(this->label5);
			   this->panel1->Controls->Add(this->label4);
			   this->panel1->Controls->Add(this->label3);
			   this->panel1->Location = System::Drawing::Point(114, 136);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(392, 268);
			   this->panel1->TabIndex = 3;
			   // 
			   // textBox6
			   // 
			   this->textBox6->Location = System::Drawing::Point(213, 217);
			   this->textBox6->Name = L"textBox6";
			   this->textBox6->Size = System::Drawing::Size(100, 22);
			   this->textBox6->TabIndex = 11;
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label8->Location = System::Drawing::Point(32, 179);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(139, 22);
			   this->label8->TabIndex = 10;
			   this->label8->Text = L"Duration of Stay";
			   // 
			   // textBox5
			   // 
			   this->textBox5->Location = System::Drawing::Point(213, 181);
			   this->textBox5->Name = L"textBox5";
			   this->textBox5->Size = System::Drawing::Size(100, 22);
			   this->textBox5->TabIndex = 9;
			   // 
			   // textBox4
			   // 
			   this->textBox4->Location = System::Drawing::Point(213, 139);
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->Size = System::Drawing::Size(100, 22);
			   this->textBox4->TabIndex = 8;
			   // 
			   // textBox3
			   // 
			   this->textBox3->Location = System::Drawing::Point(213, 99);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(100, 22);
			   this->textBox3->TabIndex = 7;
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(213, 61);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(100, 22);
			   this->textBox2->TabIndex = 6;
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(213, 21);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(100, 22);
			   this->textBox1->TabIndex = 5;
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label7->Location = System::Drawing::Point(32, 217);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(121, 22);
			   this->label7->TabIndex = 4;
			   this->label7->Text = L"Total Payable";
			   this->label7->Click += gcnew System::EventHandler(this, &GenerateInvoice::label7_Click);
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label6->Location = System::Drawing::Point(30, 137);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(119, 22);
			   this->label6->TabIndex = 3;
			   this->label6->Text = L"Price per Day";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->Location = System::Drawing::Point(30, 97);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(103, 22);
			   this->label5->TabIndex = 2;
			   this->label5->Text = L"Room Type";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->Location = System::Drawing::Point(29, 59);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(139, 22);
			   this->label4->TabIndex = 1;
			   this->label4->Text = L"Customer Name";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(29, 22);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(109, 22);
			   this->label3->TabIndex = 0;
			   this->label3->Text = L"Customer ID";
			   // 
			   // button1
			   // 
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(183, 425);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(99, 41);
			   this->button1->TabIndex = 4;
			   this->button1->Text = L"OK";
			   this->button1->UseVisualStyleBackColor = true;
			   // 
			   // button2
			   // 
			   this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button2->Location = System::Drawing::Point(327, 425);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(100, 41);
			   this->button2->TabIndex = 5;
			   this->button2->Text = L"Cancel";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &GenerateInvoice::button2_Click);
			   // 
			   // GenerateInvoice
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				   static_cast<System::Int32>(static_cast<System::Byte>(103)));
			   this->ClientSize = System::Drawing::Size(610, 495);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->comboBox1);
			   this->Controls->Add(this->label1);
			   this->Name = L"GenerateInvoice";
			   this->Text = L"GenerateInvoice";
			   this->Load += gcnew System::EventHandler(this, &GenerateInvoice::GenerateInvoice_Load);
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GenerateInvoice_Load(System::Object^ sender, System::EventArgs^ e) {
		con->Open();
		// Create SQL command to execute the stored procedure
		SqlCommand^ command = gcnew SqlCommand("view_bookings", con);
		command->CommandType = CommandType::StoredProcedure;

		// Execute the command
		SqlDataReader^ reader = command->ExecuteReader();

		// Populate the ComboBox with the retrieved values
		while (reader->Read())
		{
			String^ bookingId = safe_cast<String^>(reader["bookingid"]);
			comboBox1->Items->Add(bookingId);

		}

		// Close connections
		reader->Close();
		con->Close();
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Check if there is a selected item in the ComboBox
		if (comboBox1->SelectedItem != nullptr) {
			// Retrieve the selected booking ID
			String^ bookingId = comboBox1->SelectedItem->ToString();

			// Call the stored procedure to fetch customer information
			con->Open();
			SqlCommand^ command = gcnew SqlCommand("EXEC fetch_info '" + bookingId + "'", con);
			SqlDataReader^ reader = command->ExecuteReader();

			// Check if the reader has rows
			if (reader->Read()) {
				// Retrieve information from the reader
				int customerId = safe_cast<int>(reader["CustomerId"]);
				String^ customerName = safe_cast<String^>(reader["Name"]);
				String^ roomType = safe_cast<String^>(reader["RoomType"]);
				double pricePerDay = safe_cast<double>(reader["amount"]);
				DateTime checkInDate = safe_cast<DateTime>(reader["CheckInDate"]);
				DateTime checkOutDate = safe_cast<DateTime>(reader["CheckOutDate"]);
				TimeSpan duration = checkOutDate - checkInDate;

				pricePerDay = pricePerDay / 2;
				// Close the reader and connection
				reader->Close();
				con->Close();

				// Convert duration to days
				int durationDays = duration.Days;

				float total = pricePerDay * durationDays;

				String^ customerIdStr = customerId.ToString();
				String^ pricePerDayStr = pricePerDay.ToString();
				String^ durationDaysStr = durationDays.ToString();
				String^ totals = total.ToString();

				textBox1->Text = customerIdStr;
				textBox2->Text = customerName;
				textBox3->Text = roomType;
				textBox4->Text = pricePerDayStr;
				textBox5->Text = durationDaysStr;
				textBox6->Text = totals;


			}
			else {
				// Handle case when no rows are returned
				MessageBox::Show("No booking information found for selected booking ID.");
				con->Close();
			}
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
