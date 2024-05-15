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
	/// Summary for EditCustomer
	/// </summary>
	public ref class EditCustomer : public System::Windows::Forms::Form
	{
	private:
		ToolTip^ errorToolTip = gcnew ToolTip();
		String^ connectionString = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";
	private: System::Windows::Forms::Panel^ panelsearch;
	private: System::Windows::Forms::Label^ lbSearchCNIC;
	private: System::Windows::Forms::ComboBox^ cbSearch;

		   SqlConnection^ connection = gcnew SqlConnection(connectionString);
	public:
		EditCustomer(void)
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
		~EditCustomer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ HMSLabel;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panelDriverInfo;
	private: System::Windows::Forms::ToolStrip^ toolStripAddDriver;


	private: System::Windows::Forms::Label^ lbCustomerInfo;

	private: System::Windows::Forms::TextBox^ tbPhoneNo;
	private: System::Windows::Forms::Label^ lbPhoneNo;
	private: System::Windows::Forms::TextBox^ tbCNIC;
	private: System::Windows::Forms::Label^ lbCNIC;
	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::TextBox^ tbName;

	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Label^ lbNavigation;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditCustomer::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->HMSLabel = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panelDriverInfo = (gcnew System::Windows::Forms::Panel());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->toolStripAddDriver = (gcnew System::Windows::Forms::ToolStrip());
			this->lbCustomerInfo = (gcnew System::Windows::Forms::Label());
			this->tbPhoneNo = (gcnew System::Windows::Forms::TextBox());
			this->lbPhoneNo = (gcnew System::Windows::Forms::Label());
			this->tbCNIC = (gcnew System::Windows::Forms::TextBox());
			this->lbCNIC = (gcnew System::Windows::Forms::Label());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->panelsearch = (gcnew System::Windows::Forms::Panel());
			this->lbSearchCNIC = (gcnew System::Windows::Forms::Label());
			this->cbSearch = (gcnew System::Windows::Forms::ComboBox());
			this->panel1->SuspendLayout();
			this->panelDriverInfo->SuspendLayout();
			this->panelsearch->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->panel1->Controls->Add(this->HMSLabel);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(885, 58);
			this->panel1->TabIndex = 5;
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
			this->panelDriverInfo->Controls->Add(this->btnCancel);
			this->panelDriverInfo->Controls->Add(this->btnSave);
			this->panelDriverInfo->Controls->Add(this->toolStripAddDriver);
			this->panelDriverInfo->Controls->Add(this->lbCustomerInfo);
			this->panelDriverInfo->Controls->Add(this->tbPhoneNo);
			this->panelDriverInfo->Controls->Add(this->lbPhoneNo);
			this->panelDriverInfo->Controls->Add(this->tbCNIC);
			this->panelDriverInfo->Controls->Add(this->lbCNIC);
			this->panelDriverInfo->Controls->Add(this->lbName);
			this->panelDriverInfo->Controls->Add(this->tbName);
			this->panelDriverInfo->Location = System::Drawing::Point(72, 217);
			this->panelDriverInfo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelDriverInfo->Name = L"panelDriverInfo";
			this->panelDriverInfo->Size = System::Drawing::Size(594, 295);
			this->panelDriverInfo->TabIndex = 20;
			// 
			// btnCancel
			// 
			this->btnCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnCancel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(37, 240);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(132, 38);
			this->btnCancel->TabIndex = 22;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &EditCustomer::btnCancel_Click);
			// 
			// btnSave
			// 
			this->btnSave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnSave->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->btnSave->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(432, 240);
			this->btnSave->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(132, 38);
			this->btnSave->TabIndex = 21;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &EditCustomer::btnSave_Click);
			// 
			// toolStripAddDriver
			// 
			this->toolStripAddDriver->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toolStripAddDriver->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStripAddDriver->Location = System::Drawing::Point(0, 0);
			this->toolStripAddDriver->Name = L"toolStripAddDriver";
			this->toolStripAddDriver->Size = System::Drawing::Size(592, 25);
			this->toolStripAddDriver->TabIndex = 12;
			this->toolStripAddDriver->Text = L"Add Customer Tool Tip";
			// 
			// lbCustomerInfo
			// 
			this->lbCustomerInfo->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCustomerInfo->Location = System::Drawing::Point(124, 28);
			this->lbCustomerInfo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbCustomerInfo->Name = L"lbCustomerInfo";
			this->lbCustomerInfo->Size = System::Drawing::Size(317, 25);
			this->lbCustomerInfo->TabIndex = 11;
			this->lbCustomerInfo->Text = L"Customer\'s Information";
			this->lbCustomerInfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbPhoneNo
			// 
			this->tbPhoneNo->BackColor = System::Drawing::SystemColors::Info;
			this->tbPhoneNo->Location = System::Drawing::Point(193, 188);
			this->tbPhoneNo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tbPhoneNo->Name = L"tbPhoneNo";
			this->tbPhoneNo->Size = System::Drawing::Size(336, 22);
			this->tbPhoneNo->TabIndex = 5;
			this->tbPhoneNo->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditCustomer::tbPhoneNo_Validating);
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
			this->lbPhoneNo->Text = L"Phone No.";
			// 
			// tbCNIC
			// 
			this->tbCNIC->BackColor = System::Drawing::SystemColors::Info;
			this->tbCNIC->Location = System::Drawing::Point(193, 137);
			this->tbCNIC->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tbCNIC->Name = L"tbCNIC";
			this->tbCNIC->Size = System::Drawing::Size(336, 22);
			this->tbCNIC->TabIndex = 3;
			this->tbCNIC->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &EditCustomer::tbCNIC_Validating);
			// 
			// lbCNIC
			// 
			this->lbCNIC->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCNIC->Location = System::Drawing::Point(36, 137);
			this->lbCNIC->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbCNIC->Name = L"lbCNIC";
			this->lbCNIC->Size = System::Drawing::Size(149, 25);
			this->lbCNIC->TabIndex = 2;
			this->lbCNIC->Text = L"CNIC";
			// 
			// lbName
			// 
			this->lbName->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbName->Location = System::Drawing::Point(36, 84);
			this->lbName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(149, 25);
			this->lbName->TabIndex = 1;
			this->lbName->Text = L"Full Name";
			// 
			// tbName
			// 
			this->tbName->BackColor = System::Drawing::SystemColors::Info;
			this->tbName->Location = System::Drawing::Point(193, 84);
			this->tbName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(336, 22);
			this->tbName->TabIndex = 0;
			// 
			// lbNavigation
			// 
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(65, 71);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(575, 32);
			this->lbNavigation->TabIndex = 21;
			this->lbNavigation->Text = L"Home Page  |  Customer > Edit Customer";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panelsearch
			// 
			this->panelsearch->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panelsearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelsearch->Controls->Add(this->lbSearchCNIC);
			this->panelsearch->Controls->Add(this->cbSearch);
			this->panelsearch->Location = System::Drawing::Point(72, 126);
			this->panelsearch->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelsearch->Name = L"panelsearch";
			this->panelsearch->Size = System::Drawing::Size(594, 83);
			this->panelsearch->TabIndex = 23;
			// 
			// lbSearchCNIC
			// 
			this->lbSearchCNIC->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSearchCNIC->Location = System::Drawing::Point(8, 26);
			this->lbSearchCNIC->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbSearchCNIC->Name = L"lbSearchCNIC";
			this->lbSearchCNIC->Size = System::Drawing::Size(212, 25);
			this->lbSearchCNIC->TabIndex = 13;
			this->lbSearchCNIC->Text = L"Search CustomerID";
			// 
			// cbSearch
			// 
			this->cbSearch->AllowDrop = true;
			this->cbSearch->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbSearch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbSearch->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbSearch->FormattingEnabled = true;
			this->cbSearch->Location = System::Drawing::Point(228, 22);
			this->cbSearch->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cbSearch->Name = L"cbSearch";
			this->cbSearch->Size = System::Drawing::Size(337, 31);
			this->cbSearch->TabIndex = 18;
			this->cbSearch->SelectedIndexChanged += gcnew System::EventHandler(this, &EditCustomer::cbSearch_SelectedIndexChanged);
			// 
			// EditCustomer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->ClientSize = System::Drawing::Size(885, 542);
			this->Controls->Add(this->panelsearch);
			this->Controls->Add(this->lbNavigation);
			this->Controls->Add(this->panelDriverInfo);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"EditCustomer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EditCustomer";
			this->Load += gcnew System::EventHandler(this, &EditCustomer::EditCustomer_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panelDriverInfo->ResumeLayout(false);
			this->panelDriverInfo->PerformLayout();
			this->panelsearch->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
	private: System::Void tbPhoneNo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbPhoneNo_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		String^ Text = tbPhoneNo->Text;
		for (int i = 0; i < Text->Length; i++) {
			if (!Char::IsDigit(Text[i])) {
				e->Cancel = true;  // Cancel the event to keep focus on the control
				tbPhoneNo->Text = "";
				errorToolTip->Show("Phone Number can only be numerical", tbPhoneNo);
				errorToolTip->AutoPopDelay = 1000;
				tbPhoneNo->Focus();
				return;
			}
		}

		if (Text->Length != 11)
		{
			//MessageBox::Show("Contact number should only have 11 digits", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			tbPhoneNo->Text = "";
			errorToolTip->Show("Phone Number should only have 11 digits", tbPhoneNo);
			errorToolTip->AutoPopDelay = 1000;
			tbPhoneNo->Focus();
			return;
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbCNIC_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbCNIC_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		String^ cnicText = tbCNIC->Text;
		for (int i = 0; i < cnicText->Length; i++) {
			if (!Char::IsDigit(cnicText[i])) {
				e->Cancel = true;  // Cancel the event to keep focus on the control
				tbCNIC->Text = "";
				errorToolTip->Show("CNIC can only be numerical", tbCNIC);
				errorToolTip->AutoPopDelay = 1000;
				tbCNIC->Focus();
				return;
			}
		}
		if (cnicText->Length != 13) {
			errorToolTip->Show("CNIC can only be 13 characters long", tbCNIC);
			return;
		}
	}
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ name = this->tbName->Text;
		String^ CNIC = this->tbCNIC->Text;
		String^ phoneNo = this->tbPhoneNo->Text;
		if (name->Trim() == "" || CNIC->Trim() == "" || phoneNo->Trim() == "") {
			MessageBox::Show(" * required fields can not be empty");
			return;
		}

		try {
			String^ selectedID = cbSearch->SelectedItem->ToString();

			connection->Open();
			SqlCommand^ command = gcnew SqlCommand();
			command->Connection = connection;
			command->CommandType = CommandType::StoredProcedure;
			command->CommandText = "UPDATE_SET_CUSTOMER";

			command->Parameters->Add(gcnew SqlParameter("@customerid", selectedID));
			command->Parameters->Add(gcnew SqlParameter("@name", name));
			command->Parameters->Add(gcnew SqlParameter("@contact", phoneNo));
			command->Parameters->Add(gcnew SqlParameter("@CNIC", CNIC));

			command->ExecuteNonQuery();

			MessageBox::Show("Successfully updated customer.");
			connection->Close();
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
			tbName->Text = "";
			tbPhoneNo->Text = "";
			tbCNIC->Text = "";

			connection->Open();
			// populate Customer textbox
			SqlCommand^ command = gcnew SqlCommand("SELECT * FROM Customer where customerID=@selectedID", connection);
			command->Parameters->AddWithValue("@selectedID", selectedID);

			SqlDataReader^ reader = command->ExecuteReader();
			if (reader->Read()) {
				String^ customerID = Convert::ToString(reader["customerID"]);
				String^ customerName = Convert::ToString(reader["name"]);
				String^ customerContact = Convert::ToString(reader["contact"]);
				String^ customerCNIC = Convert::ToString(reader["cnic"]);

				tbName->Text = customerName;
				tbPhoneNo->Text = customerContact;
				tbCNIC->Text = customerCNIC;
			}
			reader->Close();
			connection->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("Error: " + e->Message, "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
	private: System::Void EditCustomer_Load(System::Object^ sender, System::EventArgs^ e) {
		//populate comboBox
		try {
			connection->Open();

			SqlCommand^ command = gcnew SqlCommand("SELECT customerID FROM Customer", connection);
			SqlDataReader^ reader = command->ExecuteReader();
			cbSearch->Items->Clear();
			while (reader->Read()) {
				cbSearch->Items->Add(reader["customerID"]->ToString());
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
