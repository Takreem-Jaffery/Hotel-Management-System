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
	/// Summary for EditRoomType
	/// </summary>
	public ref class EditRoomType : public System::Windows::Forms::Form
	{

		String^ connectionString = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";
	private: System::Windows::Forms::Label^ lbCustomerInfo;
	private: System::Windows::Forms::ComboBox^ cbSearch;
		   SqlConnection^ connection = gcnew SqlConnection(connectionString);
	public:
		EditRoomType(void)
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
		~EditRoomType()
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
	private: System::Windows::Forms::Panel^ panelDriverInfo;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnSave;

	private: System::Windows::Forms::ToolStrip^ toolStripAddDriver;

	private: System::Windows::Forms::TextBox^ tbBedType;

	private: System::Windows::Forms::Label^ lbPhoneNo;


	private: System::Windows::Forms::Label^ lbCNIC;
	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Label^ labelPrice;
	private: System::Windows::Forms::NumericUpDown^ tbNoOfBeds;
	private: System::Windows::Forms::TextBox^ tbprice;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditRoomType::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->HMSLabel = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panelDriverInfo = (gcnew System::Windows::Forms::Panel());
			this->cbSearch = (gcnew System::Windows::Forms::ComboBox());
			this->tbNoOfBeds = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelPrice = (gcnew System::Windows::Forms::Label());
			this->tbprice = (gcnew System::Windows::Forms::TextBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->toolStripAddDriver = (gcnew System::Windows::Forms::ToolStrip());
			this->lbCustomerInfo = (gcnew System::Windows::Forms::Label());
			this->tbBedType = (gcnew System::Windows::Forms::TextBox());
			this->lbPhoneNo = (gcnew System::Windows::Forms::Label());
			this->lbCNIC = (gcnew System::Windows::Forms::Label());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panelDriverInfo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbNoOfBeds))->BeginInit();
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
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->lbNavigation->Text = L"Room Type | Add";
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
			this->button5->Location = System::Drawing::Point(3, 2);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 55);
			this->button5->TabIndex = 0;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// panelDriverInfo
			// 
			this->panelDriverInfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panelDriverInfo->BackColor = System::Drawing::SystemColors::MenuBar;
			this->panelDriverInfo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelDriverInfo->Controls->Add(this->cbSearch);
			this->panelDriverInfo->Controls->Add(this->tbNoOfBeds);
			this->panelDriverInfo->Controls->Add(this->labelPrice);
			this->panelDriverInfo->Controls->Add(this->tbprice);
			this->panelDriverInfo->Controls->Add(this->btnCancel);
			this->panelDriverInfo->Controls->Add(this->btnSave);
			this->panelDriverInfo->Controls->Add(this->toolStripAddDriver);
			this->panelDriverInfo->Controls->Add(this->lbCustomerInfo);
			this->panelDriverInfo->Controls->Add(this->tbBedType);
			this->panelDriverInfo->Controls->Add(this->lbPhoneNo);
			this->panelDriverInfo->Controls->Add(this->lbCNIC);
			this->panelDriverInfo->Controls->Add(this->lbName);
			this->panelDriverInfo->Controls->Add(this->tbName);
			this->panelDriverInfo->Location = System::Drawing::Point(72, 95);
			this->panelDriverInfo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelDriverInfo->Name = L"panelDriverInfo";
			this->panelDriverInfo->Size = System::Drawing::Size(662, 372);
			this->panelDriverInfo->TabIndex = 21;
			// 
			// cbSearch
			// 
			this->cbSearch->AllowDrop = true;
			this->cbSearch->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->cbSearch->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbSearch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbSearch->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbSearch->FormattingEnabled = true;
			this->cbSearch->Location = System::Drawing::Point(252, 28);
			this->cbSearch->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cbSearch->Name = L"cbSearch";
			this->cbSearch->Size = System::Drawing::Size(316, 31);
			this->cbSearch->TabIndex = 26;
			this->cbSearch->SelectedIndexChanged += gcnew System::EventHandler(this, &EditRoomType::cbSearch_SelectedIndexChanged);
			// 
			// tbNoOfBeds
			// 
			this->tbNoOfBeds->Location = System::Drawing::Point(232, 137);
			this->tbNoOfBeds->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tbNoOfBeds->Name = L"tbNoOfBeds";
			this->tbNoOfBeds->Size = System::Drawing::Size(160, 22);
			this->tbNoOfBeds->TabIndex = 25;
			// 
			// labelPrice
			// 
			this->labelPrice->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPrice->Location = System::Drawing::Point(36, 239);
			this->labelPrice->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPrice->Name = L"labelPrice";
			this->labelPrice->Size = System::Drawing::Size(149, 25);
			this->labelPrice->TabIndex = 24;
			this->labelPrice->Text = L"Price";
			// 
			// tbprice
			// 
			this->tbprice->BackColor = System::Drawing::SystemColors::Info;
			this->tbprice->Location = System::Drawing::Point(232, 239);
			this->tbprice->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tbprice->Name = L"tbprice";
			this->tbprice->Size = System::Drawing::Size(336, 22);
			this->tbprice->TabIndex = 23;
			// 
			// btnCancel
			// 
			this->btnCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnCancel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(40, 318);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(132, 38);
			this->btnCancel->TabIndex = 22;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &EditRoomType::btnCancel_Click);
			// 
			// btnSave
			// 
			this->btnSave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnSave->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->btnSave->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(500, 318);
			this->btnSave->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(132, 38);
			this->btnSave->TabIndex = 21;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &EditRoomType::btnSave_Click);
			// 
			// toolStripAddDriver
			// 
			this->toolStripAddDriver->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toolStripAddDriver->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStripAddDriver->Location = System::Drawing::Point(0, 0);
			this->toolStripAddDriver->Name = L"toolStripAddDriver";
			this->toolStripAddDriver->Size = System::Drawing::Size(660, 25);
			this->toolStripAddDriver->TabIndex = 12;
			this->toolStripAddDriver->Text = L"Add Customer Tool Tip";
			// 
			// lbCustomerInfo
			// 
			this->lbCustomerInfo->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCustomerInfo->Location = System::Drawing::Point(35, 31);
			this->lbCustomerInfo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbCustomerInfo->Name = L"lbCustomerInfo";
			this->lbCustomerInfo->Size = System::Drawing::Size(209, 25);
			this->lbCustomerInfo->TabIndex = 11;
			this->lbCustomerInfo->Text = L"Search RoomType";
			this->lbCustomerInfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbBedType
			// 
			this->tbBedType->BackColor = System::Drawing::SystemColors::Info;
			this->tbBedType->Location = System::Drawing::Point(232, 188);
			this->tbBedType->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tbBedType->Name = L"tbBedType";
			this->tbBedType->Size = System::Drawing::Size(336, 22);
			this->tbBedType->TabIndex = 5;
			// 
			// lbPhoneNo
			// 
			this->lbPhoneNo->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPhoneNo->Location = System::Drawing::Point(36, 188);
			this->lbPhoneNo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbPhoneNo->Name = L"lbPhoneNo";
			this->lbPhoneNo->Size = System::Drawing::Size(149, 25);
			this->lbPhoneNo->TabIndex = 4;
			this->lbPhoneNo->Text = L"Bed Type";
			// 
			// lbCNIC
			// 
			this->lbCNIC->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCNIC->Location = System::Drawing::Point(36, 137);
			this->lbCNIC->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbCNIC->Name = L"lbCNIC";
			this->lbCNIC->Size = System::Drawing::Size(185, 25);
			this->lbCNIC->TabIndex = 2;
			this->lbCNIC->Text = L"Number of Beds";
			// 
			// lbName
			// 
			this->lbName->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbName->Location = System::Drawing::Point(36, 84);
			this->lbName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(185, 25);
			this->lbName->TabIndex = 1;
			this->lbName->Text = L"Room Type Name";
			// 
			// tbName
			// 
			this->tbName->BackColor = System::Drawing::SystemColors::Info;
			this->tbName->Location = System::Drawing::Point(232, 84);
			this->tbName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(336, 22);
			this->tbName->TabIndex = 0;
			// 
			// EditRoomType
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->ClientSize = System::Drawing::Size(885, 512);
			this->Controls->Add(this->panelDriverInfo);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"EditRoomType";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EditRoomType";
			this->Load += gcnew System::EventHandler(this, &EditRoomType::EditRoomType_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panelDriverInfo->ResumeLayout(false);
			this->panelDriverInfo->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbNoOfBeds))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = this->tbName->Text;
		String^ noofbeds = this->tbNoOfBeds->Text;
		String^ bedtype = this->tbBedType->Text;
		String^ price = this->tbprice->Text;
		if (name->Trim() == "" || noofbeds->Trim() == "" || bedtype->Trim() == ""
			|| price->Trim() == "") {
			MessageBox::Show(" * required fields can not be empty");
			return;
		}
		for (int i = 0; i < price->Length; i++) {
			if (!Char::IsDigit(price[i])) {
				MessageBox::Show("Price can only be numerical");
				return;
			}
		}



		try {

			String^ selectedID = cbSearch->SelectedItem->ToString();

			connection->Open();
			SqlCommand^ command = gcnew SqlCommand();
			command->Connection = connection;
			command->CommandType = CommandType::StoredProcedure;
			command->CommandText = "UPDATE_SET_ROOMTYPE";

			command->Parameters->Add(gcnew SqlParameter("@id", selectedID));
			command->Parameters->Add(gcnew SqlParameter("@roomtype", name));
			command->Parameters->Add(gcnew SqlParameter("@noofbeds", noofbeds));
			command->Parameters->Add(gcnew SqlParameter("@bedtype", bedtype));
			command->Parameters->Add(gcnew SqlParameter("@price", price));
			command->ExecuteNonQuery();

			MessageBox::Show("Successfully updated roomtype.");
			this->Close();
		}
		catch (SqlException^ ex) {
			MessageBox::Show("Error: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void cbSearch_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		try {
			String^ selectedID = cbSearch->SelectedItem->ToString();
			connection->Open();
			// populate Customer textbox
			SqlCommand^ command = gcnew SqlCommand("SELECT * FROM RoomType where roomtypeid=@selectedID", connection);
			command->Parameters->AddWithValue("@selectedID", selectedID);

			SqlDataReader^ reader = command->ExecuteReader();
			if (reader->Read()) {
				String^ ID = Convert::ToString(reader["roomTypeId"]);
				String^ name = Convert::ToString(reader["roomType"]);
				String^ bedtype = Convert::ToString(reader["bedType"]);
				String^ noofbeds = Convert::ToString(reader["noOfBeds"]);
				String^ price = Convert::ToString(reader["price"]);

				tbName->Text = name;
				tbBedType->Text = bedtype;
				tbNoOfBeds->Text = noofbeds;
				tbprice->Text = price;

			}
			reader->Close();
			connection->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("Error: " + e->Message, "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
	private: System::Void EditRoomType_Load(System::Object^ sender, System::EventArgs^ e) {
		//populate comboBox
		try {
			connection->Open();

			SqlCommand^ command = gcnew SqlCommand("SELECT roomtypeID FROM RoomType", connection);
			SqlDataReader^ reader = command->ExecuteReader();
			cbSearch->Items->Clear();
			while (reader->Read()) {
				cbSearch->Items->Add(reader["roomtypeID"]->ToString());
			}
			reader->Close();
			connection->Close();
		}
		catch (SqlException^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			connection->Close();
		}
	}
	};
}
