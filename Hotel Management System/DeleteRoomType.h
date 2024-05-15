#pragma once

namespace HotelManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for DeleteRoomType
	/// </summary>
	public ref class DeleteRoomType : public System::Windows::Forms::Form
	{
	public:
		DeleteRoomType(void)
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
		~DeleteRoomType()
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ deleteBtn;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::TextBox^ roomTypetxtbox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ roomTypeIDcmb;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ noOfBedstb;
	private: System::Windows::Forms::TextBox^ bedTypetb;
	private: System::Windows::Forms::TextBox^ pricetb;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DeleteRoomType::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->HMSLabel = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->roomTypetxtbox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->roomTypeIDcmb = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->noOfBedstb = (gcnew System::Windows::Forms::TextBox());
			this->bedTypetb = (gcnew System::Windows::Forms::TextBox());
			this->pricetb = (gcnew System::Windows::Forms::TextBox());
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
			this->panel1->TabIndex = 8;
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
			this->lbNavigation->Text = L"Room Type | Delete";
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
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(12, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 61);
			this->button1->TabIndex = 23;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DeleteRoomType::button1_Click);
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
			this->deleteBtn->TabIndex = 22;
			this->deleteBtn->Text = L"Delete";
			this->deleteBtn->UseVisualStyleBackColor = false;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &DeleteRoomType::deleteBtn_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::White;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(643, 381);
			this->btnCancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(230, 120);
			this->btnCancel->TabIndex = 21;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &DeleteRoomType::btnCancel_Click);
			// 
			// roomTypetxtbox
			// 
			this->roomTypetxtbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomTypetxtbox->Location = System::Drawing::Point(248, 176);
			this->roomTypetxtbox->Name = L"roomTypetxtbox";
			this->roomTypetxtbox->ReadOnly = true;
			this->roomTypetxtbox->Size = System::Drawing::Size(601, 38);
			this->roomTypetxtbox->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 32);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Room Type:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(201, 32);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Room Type ID:";
			// 
			// roomTypeIDcmb
			// 
			this->roomTypeIDcmb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomTypeIDcmb->FormattingEnabled = true;
			this->roomTypeIDcmb->Location = System::Drawing::Point(248, 129);
			this->roomTypeIDcmb->Name = L"roomTypeIDcmb";
			this->roomTypeIDcmb->Size = System::Drawing::Size(601, 39);
			this->roomTypeIDcmb->TabIndex = 17;
			this->roomTypeIDcmb->SelectedIndexChanged += gcnew System::EventHandler(this, &DeleteRoomType::roomTypeIDcmb_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(24, 230);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 32);
			this->label3->TabIndex = 24;
			this->label3->Text = L"No. of Beds:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(24, 279);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(143, 32);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Bed Type:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(24, 321);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 32);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Price:";
			// 
			// noOfBedstb
			// 
			this->noOfBedstb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noOfBedstb->Location = System::Drawing::Point(248, 224);
			this->noOfBedstb->Name = L"noOfBedstb";
			this->noOfBedstb->ReadOnly = true;
			this->noOfBedstb->Size = System::Drawing::Size(601, 38);
			this->noOfBedstb->TabIndex = 27;
			// 
			// bedTypetb
			// 
			this->bedTypetb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bedTypetb->Location = System::Drawing::Point(248, 273);
			this->bedTypetb->Name = L"bedTypetb";
			this->bedTypetb->ReadOnly = true;
			this->bedTypetb->Size = System::Drawing::Size(601, 38);
			this->bedTypetb->TabIndex = 28;
			// 
			// pricetb
			// 
			this->pricetb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pricetb->Location = System::Drawing::Point(248, 321);
			this->pricetb->Name = L"pricetb";
			this->pricetb->ReadOnly = true;
			this->pricetb->Size = System::Drawing::Size(601, 38);
			this->pricetb->TabIndex = 29;
			// 
			// DeleteRoomType
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->ClientSize = System::Drawing::Size(885, 512);
			this->Controls->Add(this->pricetb);
			this->Controls->Add(this->bedTypetb);
			this->Controls->Add(this->noOfBedstb);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->deleteBtn);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->roomTypetxtbox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->roomTypeIDcmb);
			this->Controls->Add(this->panel1);
			this->Name = L"DeleteRoomType";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DeleteRoomType";
			this->Load += gcnew System::EventHandler(this, &DeleteRoomType::DeleteRoomType_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DeleteRoomType_Load(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ sqlConn = gcnew SqlConnection();
		sqlConn->ConnectionString = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";
		sqlConn->Open();
		SqlCommand^ cmd = sqlConn->CreateCommand();
		cmd->CommandType = CommandType::Text;
		cmd->CommandText = "SELECT [roomTypeId] FROM RoomType";

		SqlDataReader^ DR = cmd->ExecuteReader();

		while (DR->Read())
		{
			roomTypeIDcmb->Items->Add(DR[0]);

		}
	}
private: System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedRoomType = roomTypeIDcmb->SelectedItem->ToString();

	SqlConnection^ sqlConn = gcnew SqlConnection();
	sqlConn->ConnectionString = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";
	sqlConn->Open();
	SqlCommand^ cmd = sqlConn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "Delete FROM RoomType WHERE [RoomTypeId] = @RoomTypeId";
	cmd->Parameters->AddWithValue("@RoomTypeId", selectedRoomType);
	cmd->ExecuteReader();

	MessageBox::Show("Room Type Deleted successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

	this->Close();
}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void roomTypeIDcmb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedRoomTypeId = roomTypeIDcmb->SelectedItem->ToString();


	SqlConnection^ sqlConn = gcnew SqlConnection();
	sqlConn->ConnectionString = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";
	sqlConn->Open();
	SqlCommand^ cmd = sqlConn->CreateCommand();
	cmd->CommandType = CommandType::Text;
	cmd->CommandText = "SELECT RoomType,noOfBeds,bedType,Price FROM RoomType WHERE [RoomTypeId] = @RoomTypeID";
	cmd->Parameters->AddWithValue("@RoomTypeID", selectedRoomTypeId);

	SqlDataReader^ DR = cmd->ExecuteReader();

	// Process the results from the query
	if (DR->Read()) {
		String^ roomType = DR->GetString(0);
		int noOfBeds = DR->GetInt32(1);
		String^ bedType = DR->GetString(2);
		float price = DR->GetDouble(3);

		DR->Close();

		roomTypetxtbox->Text = roomType;
		noOfBedstb->Text = noOfBeds.ToString();
		bedTypetb->Text = bedType;
		pricetb->Text = price.ToString();

	}

	sqlConn->Close();
}
};
}
