
#pragma once

namespace HotelManagementSystem {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::SqlClient;

    public ref class EditRoom : public System::Windows::Forms::Form
    {
    public:
        EditRoom(void)
        {
            InitializeComponent();
        }

    protected:
        ~EditRoom()
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
    private: System::Windows::Forms::Button^ btnSave;
    private: System::Windows::Forms::Button^ btnCancel;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ lbNavigation;
    private: System::Windows::Forms::Label^ HMSLabel;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ button1;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditRoom::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->txtRoomNumber = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->txtRoomType = (gcnew System::Windows::Forms::TextBox());
            this->btnSave = (gcnew System::Windows::Forms::Button());
            this->btnCancel = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->lbNavigation = (gcnew System::Windows::Forms::Label());
            this->HMSLabel = (gcnew System::Windows::Forms::Label());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(246, 196);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(204, 32);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Room Number:";
            // 
            // txtRoomNumber
            // 
            this->txtRoomNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtRoomNumber->Location = System::Drawing::Point(456, 193);
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
            this->label2->Location = System::Drawing::Point(246, 275);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(167, 32);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Room Type:";
            // 
            // txtRoomType
            // 
            this->txtRoomType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtRoomType->Location = System::Drawing::Point(456, 282);
            this->txtRoomType->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->txtRoomType->Name = L"txtRoomType";
            this->txtRoomType->Size = System::Drawing::Size(160, 38);
            this->txtRoomType->TabIndex = 3;
            // 
            // btnSave
            // 
            this->btnSave->BackColor = System::Drawing::Color::White;
            this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSave->Location = System::Drawing::Point(12, 381);
            this->btnSave->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->btnSave->Name = L"btnSave";
            this->btnSave->Size = System::Drawing::Size(230, 120);
            this->btnSave->TabIndex = 4;
            this->btnSave->Text = L"Update";
            this->btnSave->UseVisualStyleBackColor = false;
            this->btnSave->Click += gcnew System::EventHandler(this, &EditRoom::btnSave_Click);
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
            this->btnCancel->TabIndex = 5;
            this->btnCancel->Text = L"Cancel";
            this->btnCancel->UseVisualStyleBackColor = false;
            this->btnCancel->Click += gcnew System::EventHandler(this, &EditRoom::btnCancel_Click);
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
            this->lbNavigation->Text = L"Room | Edit";
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
            // label3
            // 
            this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(13, 128);
            this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(525, 32);
            this->label3->TabIndex = 15;
            this->label3->Text = L"Edit the Room Type Assigned to a Room:";
            this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
            this->button1->Click += gcnew System::EventHandler(this, &EditRoom::button1_Click);
            // 
            // EditRoom
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
                static_cast<System::Int32>(static_cast<System::Byte>(220)));
            this->ClientSize = System::Drawing::Size(885, 512);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->btnCancel);
            this->Controls->Add(this->btnSave);
            this->Controls->Add(this->txtRoomType);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->txtRoomNumber);
            this->Controls->Add(this->label1);
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"EditRoom";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Edit Room Details";
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
        // Get the edited room details
        String^ roomNumber = txtRoomNumber->Text;
        String^ roomType = txtRoomType->Text;

        // Perform database update operation here
        try {
            // Establish database connection
            SqlConnection^ con = gcnew SqlConnection("Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;");
            con->Open();

            // Create SQL command to update room details
            SqlCommand^ cmd = gcnew SqlCommand("UPDATE Rooms SET roomTypeId = @roomType WHERE roomNum = @roomNumber", con);
            cmd->Parameters->AddWithValue("@roomType", roomType);
            cmd->Parameters->AddWithValue("@roomNumber", roomNumber);

            // Execute the command
            int rowsAffected = cmd->ExecuteNonQuery();

            // Close connection
            con->Close();

            // Check if update was successful
            if (rowsAffected > 0) {
                // Show success message
                MessageBox::Show("Room details updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

                // Close the edit form
                this->Close();
            }
            else {
                // Show error message if no rows were affected
                MessageBox::Show("Failed to update room details!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        catch (Exception^ ex) {
            // Show error message if an exception occurs
            MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }


    private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
        // Close the edit form without saving changes
        this->Close();
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
};
}




