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
	using namespace System::Data;

	/// <summary>
	/// Summary for EditPayments
	/// </summary>
	public ref class EditPayments : public System::Windows::Forms::Form
	{
	public:
		EditPayments(void)
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
		~EditPayments()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Column1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->Column1 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(356, 40);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(148, 32);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Payments";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(57, 89);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(120, 22);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"Customer ID";
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Location = System::Drawing::Point(196, 86);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(121, 24);
			   this->comboBox1->TabIndex = 2;
			   this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &EditPayments::comboBox1_SelectedIndexChanged);
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->AllowUserToAddRows = false;
			   this->dataGridView1->AllowUserToDeleteRows = false;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			   this->dataGridView1->Location = System::Drawing::Point(61, 145);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->ReadOnly = true;
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->RowTemplate->Height = 24;
			   this->dataGridView1->Size = System::Drawing::Size(732, 219);
			   this->dataGridView1->TabIndex = 3;
			   this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &EditPayments::dataGridView1_CellContentClick);
			   // 
			   // Column1
			   // 
			   dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			   dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->Column1->DefaultCellStyle = dataGridViewCellStyle1;
			   this->Column1->HeaderText = L"Set As Paid";
			   this->Column1->MinimumWidth = 6;
			   this->Column1->Name = L"Column1";
			   this->Column1->ReadOnly = true;
			   this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			   this->Column1->Text = L"Set As Paid";
			   this->Column1->UseColumnTextForButtonValue = true;
			   this->Column1->Width = 125;
			   // 
			   // button1
			   // 
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(276, 396);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(92, 49);
			   this->button1->TabIndex = 4;
			   this->button1->Text = L"OK";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &EditPayments::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button2->Location = System::Drawing::Point(480, 396);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(92, 49);
			   this->button2->TabIndex = 5;
			   this->button2->Text = L"Cancel";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &EditPayments::button2_Click);
			   // 
			   // EditPayments
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				   static_cast<System::Int32>(static_cast<System::Byte>(220)));
			   this->ClientSize = System::Drawing::Size(857, 496);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->dataGridView1);
			   this->Controls->Add(this->comboBox1);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Name = L"EditPayments";
			   this->Text = L"EditPayments";
			   this->Load += gcnew System::EventHandler(this, &EditPayments::EditPayments_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void EditPayments_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadComboBoxValues();
	}
		   // Call the stored procedure to retrieve data
		   void LoadComboBoxValues()
		   {
			   con->Open();
			   // Create SQL command to execute the stored procedure
			   SqlCommand^ command = gcnew SqlCommand("view_payments", con);
			   command->CommandType = CommandType::StoredProcedure;

			   // Execute the command
			   SqlDataReader^ reader = command->ExecuteReader();

			   // Populate the ComboBox with the retrieved values
			   while (reader->Read())
			   {
				   int customerId = safe_cast<int>(reader["Customerid"]);
				   String^ value = customerId.ToString();
				   comboBox1->Items->Add(value);

			   }

			   // Close connections
			   reader->Close();
			   con->Close();
		   }

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//room num
		Object^ selectedValueObject1 = comboBox1->SelectedItem;
		String^ customerid = dynamic_cast<String^>(selectedValueObject1);

		con->Open();
		SqlCommand^ command = gcnew SqlCommand("exec GET_CUSTOMERS " + customerid, con);

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
		DataTable^ dataTable = gcnew DataTable();
		adapter->Fill(dataTable);

		dataGridView1->DataSource = dataTable;
		con->Close();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		DataGridView^ senderGrid = dynamic_cast<DataGridView^>(sender);
		try {
			if (senderGrid->Columns[e->ColumnIndex]->GetType() == DataGridViewButtonColumn::typeid &&
				e->RowIndex >= 0) {

				DataGridViewRow^ selectedRow = dataGridView1->Rows[e->RowIndex];

				String^ bookingid = selectedRow->Cells[1]->Value->ToString();
				String^ customerid = selectedRow->Cells[2]->Value->ToString();
				int custid = int::Parse(customerid);
				con->Open();
				int flag; // Initialize flag variable

				// Concatenate parameters correctly
				SqlCommand^ command = gcnew SqlCommand("EXEC mark_paid @bookingid, @customerid", con);
				command->Parameters->AddWithValue("@bookingid", bookingid);
				command->Parameters->AddWithValue("@customerid", custid);

				command->ExecuteNonQuery();

				// Check the value of flag
				MessageBox::Show("Payment Successful!");
				con->Close();
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: something wrong with payments!");
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
