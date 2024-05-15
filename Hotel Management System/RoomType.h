
#pragma once
#include "AddRoomType.h"
#include "EditRoomType.h"
#include "DeleteRoomType.h"
namespace HotelManagementSystem {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class RoomType : public System::Windows::Forms::Form
    {
    public:
        RoomType(void)
        {
            InitializeComponent();
        }

    protected:
        ~RoomType()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ button1;
    protected:
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ lbNavigation;
    private: System::Windows::Forms::Label^ HMSLabel;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button4;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RoomType::typeid));
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->lbNavigation = (gcnew System::Windows::Forms::Label());
            this->HMSLabel = (gcnew System::Windows::Forms::Label());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
                static_cast<System::Int32>(static_cast<System::Byte>(220)));
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(34, 182);
            this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(230, 120);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Add";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &RoomType::button1_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
                static_cast<System::Int32>(static_cast<System::Byte>(220)));
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(325, 182);
            this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(230, 120);
            this->button2->TabIndex = 1;
            this->button2->Text = L"Edit";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &RoomType::button2_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
                static_cast<System::Int32>(static_cast<System::Byte>(220)));
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->Location = System::Drawing::Point(625, 182);
            this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(230, 120);
            this->button3->TabIndex = 2;
            this->button3->Text = L"Delete";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &RoomType::button3_Click);
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
            this->panel1->TabIndex = 6;
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
            this->lbNavigation->Text = L"Room Type Details";
            this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->lbNavigation->Click += gcnew System::EventHandler(this, &RoomType::lbNavigation_Click);
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
            // button4
            // 
            this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
            this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button4->FlatAppearance->BorderSize = 0;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Location = System::Drawing::Point(12, 64);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(63, 50);
            this->button4->TabIndex = 12;
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &RoomType::button4_Click);
            // 
            // RoomType
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
                static_cast<System::Int32>(static_cast<System::Byte>(103)));
            this->ClientSize = System::Drawing::Size(885, 512);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"RoomType";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Add Edit Delete";
            this->Load += gcnew System::EventHandler(this, &RoomType::RoomType_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void RoomType_Load(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
         AddRoomType^ addRoomType = gcnew AddRoomType();
        addRoomType->Show();
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        MessageBox::Show("Editing options presented.", "Edit", MessageBoxButtons::OK);
        EditRoomType^ roomtype = gcnew EditRoomType();
        roomtype->ShowDialog();
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        DeleteRoomType^ deleteRoomType = gcnew DeleteRoomType();
        deleteRoomType->Show();
    }
    private: System::Void lbNavigation_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        this-> Close();
    }
};
}

