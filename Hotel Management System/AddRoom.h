
#pragma once

namespace HotelManagementSystem {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::SqlClient;

    public ref class AddRoom : public System::Windows::Forms::Form
    {
    public:
        AddRoom(void)
        {
            InitializeComponent();
        }

    protected:
        ~AddRoom()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ txtRoomNumber;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ txtRoomType;


    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ lbNavigation;
    private: System::Windows::Forms::Label^ HMSLabel;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ Save;

    private: System::Windows::Forms::Button^ Cancel;


    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddRoom::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->txtRoomNumber = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->txtRoomType = (gcnew System::Windows::Forms::TextBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->lbNavigation = (gcnew System::Windows::Forms::Label());
            this->HMSLabel = (gcnew System::Windows::Forms::Label());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->Save = (gcnew System::Windows::Forms::Button());
            this->Cancel = (gcnew System::Windows::Forms::Button());
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(219, 170);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(204, 32);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Room Number:";
            // 
            // txtRoomNumber
            // 
            this->txtRoomNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtRoomNumber->Location = System::Drawing::Point(429, 170);
            this->txtRoomNumber->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->txtRoomNumber->Name = L"txtRoomNumber";
            this->txtRoomNumber->Size = System::Drawing::Size(160, 38);
            this->txtRoomNumber->TabIndex = 1;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(219, 252);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(167, 32);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Room Type:";
            // 
            // txtRoomType
            // 
            this->txtRoomType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtRoomType->Location = System::Drawing::Point(429, 252);
            this->txtRoomType->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->txtRoomType->Name = L"txtRoomType";
            this->txtRoomType->Size = System::Drawing::Size(160, 38);
            this->txtRoomType->TabIndex = 3;
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
            this->lbNavigation->Location = System::Drawing::Point(671, 17);
            this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lbNavigation->Name = L"lbNavigation";
            this->lbNavigation->Size = System::Drawing::Size(201, 32);
            this->lbNavigation->TabIndex = 14;
            this->lbNavigation->Text = L"Room | Add";
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
            // Save
            // 
            this->Save->BackColor = System::Drawing::Color::White;
            this->Save->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Save->Location = System::Drawing::Point(12, 381);
            this->Save->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Save->Name = L"Save";
            this->Save->Size = System::Drawing::Size(230, 120);
            this->Save->TabIndex = 16;
            this->Save->Text = L"Add";
            this->Save->UseVisualStyleBackColor = false;
            this->Save->Click += gcnew System::EventHandler(this, &AddRoom::Save_Click);
            // 
            // Cancel
            // 
            this->Cancel->BackColor = System::Drawing::Color::White;
            this->Cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Cancel->Location = System::Drawing::Point(642, 381);
            this->Cancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Cancel->Name = L"Cancel";
            this->Cancel->Size = System::Drawing::Size(230, 120);
            this->Cancel->TabIndex = 17;
            this->Cancel->Text = L"Cancel";
            this->Cancel->UseVisualStyleBackColor = false;
            this->Cancel->Click += gcnew System::EventHandler(this, &AddRoom::Cancel_Click);
            // 
            // AddRoom
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
                static_cast<System::Int32>(static_cast<System::Byte>(220)));
            this->ClientSize = System::Drawing::Size(885, 512);
            this->Controls->Add(this->Cancel);
            this->Controls->Add(this->Save);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->txtRoomType);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->txtRoomNumber);
            this->Controls->Add(this->label1);
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"AddRoom";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Edit Room Details";
            this->Load += gcnew System::EventHandler(this, &AddRoom::AddRoom_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
        
    }
    private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
      
    }
    private: System::Void AddRoom_Load(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void Save_Click(System::Object^ sender, System::EventArgs^ e) {
    // Get the edited room details and update the database
    String^ roomNumber = txtRoomNumber->Text;
    String^ roomType = txtRoomType->Text;

    SqlConnection^ sqlConn = gcnew SqlConnection();
    sqlConn->ConnectionString = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";
    sqlConn->Open();
    SqlCommand^ command = gcnew SqlCommand("roomAddition", sqlConn);
    command->CommandType = CommandType::StoredProcedure;

    command->Parameters->Clear();

    command->Parameters->Add(gcnew SqlParameter("@roomnum", SqlDbType::Int));
    command->Parameters["@roomnum"]->Value = roomNumber;

    command->Parameters->Add(gcnew SqlParameter("@roomtype", SqlDbType::Int));
    command->Parameters["@roomtype"]->Value = roomType;


    command->Parameters->Add(gcnew SqlParameter("@flag", SqlDbType::Int));
    command->Parameters["@flag"]->Direction = ParameterDirection::Output;

    try
    {
        // Execute the stored procedure
        command->ExecuteNonQuery();

        // Retrieve the value of the output parameter
        Object^ flag = command->Parameters["@flag"]->Value;

        if (flag == 1) {
            MessageBox::Show("Null values are not allowed", "Failed", MessageBoxButtons::OK, MessageBoxIcon::Information);

        }
        else if (flag == 2) {
            MessageBox::Show("Room Number doesnt follow format (starting form 101)", "Failed", MessageBoxButtons::OK, MessageBoxIcon::Information);

        }
        else if (flag == 3) {
            MessageBox::Show("Room type mentioned doesnt exists", "Failed", MessageBoxButtons::OK, MessageBoxIcon::Information);

        }
        else {
            // Show success message
            MessageBox::Show("Room details updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

            // Close the edit form
            this->Close();
        }

    }
    catch (Exception^ ex)
    {
        Console::WriteLine("Error executing stored procedure: " + ex->Message);
        Console::WriteLine(ex->StackTrace);
    }
}
private: System::Void Cancel_Click(System::Object^ sender, System::EventArgs^ e) {

    // Close the edit form without saving changes
    this->Close();
}
};
}



