#pragma once
#include <Windows.h>
#include <vcclr.h>
#include <string>

namespace HotelManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for DeleteRoom
	/// </summary>
	public ref class DeleteRoom : public System::Windows::Forms::Form
	{
	public:
		DeleteRoom(void)
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
		~DeleteRoom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ lbNavigation;
	private: System::Windows::Forms::Label^ HMSLabel;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ComboBox^ roomNumcmb;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ roomTypetxtbox;

	private: System::Windows::Forms::Button^ btnCancel;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ deleteBtn;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DeleteRoom::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->HMSLabel = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->roomNumcmb = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->roomTypetxtbox = (gcnew System::Windows::Forms::TextBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->panel1->Controls->Add(this->lbNavigation);
			this->panel1->Controls->Add(this->HMSLabel);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(885, 58);
			this->panel1->TabIndex = 7;
			// 
			// lbNavigation
			// 
			this->lbNavigation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(620, 17);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(252, 32);
			this->lbNavigation->TabIndex = 14;
			this->lbNavigation->Text = L"Room | Delete";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// HMSLabel
			// 
			this->HMSLabel->AutoSize = true;
			this->HMSLabel->Font = (gcnew System::Drawing::Font(L"Sitka Text", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HMSLabel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->HMSLabel->Location = System::Drawing::Point(64, 10);
			this->HMSLabel->Name = L"HMSLabel";
			this->HMSLabel->Size = System::Drawing::Size(359, 40);
			this->HMSLabel->TabIndex = 1;
			this->HMSLabel->Text = L"Hotel Management System";
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(3, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 55);
			this->button5->TabIndex = 0;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// roomNumcmb
			// 
			this->roomNumcmb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomNumcmb->FormattingEnabled = true;
			this->roomNumcmb->Location = System::Drawing::Point(204, 155);
			this->roomNumcmb->Name = L"roomNumcmb";
			this->roomNumcmb->Size = System::Drawing::Size(645, 39);
			this->roomNumcmb->TabIndex = 8;
			this->roomNumcmb->SelectedIndexChanged += gcnew System::EventHandler(this, &DeleteRoom::roomNumcmb_SelectedIndexChanged_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 158);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 32);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Room Num:";
			this->label1->Click += gcnew System::EventHandler(this, &DeleteRoom::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 240);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 32);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Room Type:";
			// 
			// roomTypetxtbox
			// 
			this->roomTypetxtbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomTypetxtbox->Location = System::Drawing::Point(204, 237);
			this->roomTypetxtbox->Name = L"roomTypetxtbox";
			this->roomTypetxtbox->ReadOnly = true;
			this->roomTypetxtbox->Size = System::Drawing::Size(645, 38);
			this->roomTypetxtbox->TabIndex = 11;
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::White;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(642, 381);
			this->btnCancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(230, 120);
			this->btnCancel->TabIndex = 14;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &DeleteRoom::btnCancel_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(12, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 61);
			this->button1->TabIndex = 16;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DeleteRoom::button1_Click);
			// 
			// deleteBtn
			// 
			this->deleteBtn->BackColor = System::Drawing::Color::White;
			this->deleteBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteBtn->Location = System::Drawing::Point(12, 381);
			this->deleteBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(230, 120);
			this->deleteBtn->TabIndex = 15;
			this->deleteBtn->Text = L"Delete";
			this->deleteBtn->UseVisualStyleBackColor = false;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &DeleteRoom::deleteBtn_Click);
			// 
			// DeleteRoom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->ClientSize = System::Drawing::Size(885, 512);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->deleteBtn);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->roomTypetxtbox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->roomNumcmb);
			this->Controls->Add(this->panel1);
			this->Name = L"DeleteRoom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DeleteRoom";
			this->Load += gcnew System::EventHandler(this, &DeleteRoom::DeleteRoom_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void DeleteRoom_Load(System::Object^ sender, System::EventArgs^ e) {

	SqlConnection^ sqlConn = gcnew SqlConnection();
	sqlConn->ConnectionString = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";
	sqlConn->Open();
	SqlCommand^ cmd = sqlConn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "SELECT [RoomNum] FROM Rooms";

	SqlDataReader^ DR = cmd->ExecuteReader();

	while (DR->Read())
	{
		roomNumcmb->Items->Add(DR[0]);

	}
}
private: System::Void roomNumcmb_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedRoomNumber = roomNumcmb->SelectedItem->ToString();


	SqlConnection^ sqlConn = gcnew SqlConnection();
	sqlConn->ConnectionString = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";
	sqlConn->Open();
	SqlCommand^ cmd = sqlConn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "SELECT RoomTypeId FROM Rooms WHERE [RoomNum] = @RoomNum";
	cmd->Parameters->AddWithValue("@RoomNum", selectedRoomNumber);

	SqlDataReader^ DR = cmd->ExecuteReader();

	// Process the results from the query
	if (DR->Read()) {
		int roomType = DR->GetInt32(0);
		SqlCommand^ cmd2 = sqlConn->CreateCommand();
		cmd2->CommandType = CommandType::Text;
		cmd2->CommandText = "SELECT * FROM RoomType WHERE [RoomTypeId] = @RoomTypeId";
		cmd2->Parameters->AddWithValue("@RoomTypeId", roomType);
		DR->Close();
		String^ roomtypedetails;
		SqlDataReader^ DR2 = cmd2->ExecuteReader();
		if (DR2->Read()) {
			roomtypedetails = DR2->GetInt32(0).ToString();
			roomtypedetails += ", ";
			roomtypedetails += DR2->GetString(1);
			roomtypedetails += ", ";
			roomtypedetails += DR2->GetInt32(2).ToString();
			roomtypedetails += ", ";
			roomtypedetails += DR2->GetString(3);
			roomtypedetails += ", ";
			roomtypedetails += DR2->GetDouble(4).ToString();

		}
		
		roomTypetxtbox->Text = roomtypedetails;

		DR2->Close();
	}

	sqlConn->Close();
}
	private: System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {


		String^ selectedRoomNumber = roomNumcmb->SelectedItem->ToString();

			SqlConnection^ sqlConn = gcnew SqlConnection();
			sqlConn->ConnectionString = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";
			sqlConn->Open();
			SqlCommand^ cmd = sqlConn->CreateCommand();
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "Delete FROM Rooms WHERE [RoomNum] = @RoomNum";
			cmd->Parameters->AddWithValue("@RoomNum", selectedRoomNumber);
			cmd->ExecuteReader();
			this -> Close();
	}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this-> Close();
}
};
}
