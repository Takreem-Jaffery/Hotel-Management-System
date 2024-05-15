#pragma once

#include "GraphsPage.h"
#include "ApproveRequests.h"
#include"AddEditDelete.h"
#include "RoomType.h"

namespace HotelManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for AdminHomePage
	/// </summary>
	public ref class AdminHomePage : public System::Windows::Forms::Form
	{
	public:
		AdminHomePage(void)
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
		~AdminHomePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Roomsbtn;
	private: System::Windows::Forms::Button^ RoomTypebtn;
	private: System::Windows::Forms::Button^ Graphsbtn;
	private: System::Windows::Forms::Button^ ApproveRequestsbtn;
	protected:

	protected:



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ HMSLabel;
	private: System::Windows::Forms::Button^ button5;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminHomePage::typeid));
			this->Roomsbtn = (gcnew System::Windows::Forms::Button());
			this->RoomTypebtn = (gcnew System::Windows::Forms::Button());
			this->Graphsbtn = (gcnew System::Windows::Forms::Button());
			this->ApproveRequestsbtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->HMSLabel = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Roomsbtn
			// 
			this->Roomsbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->Roomsbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Roomsbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Roomsbtn->Location = System::Drawing::Point(103, 127);
			this->Roomsbtn->Name = L"Roomsbtn";
			this->Roomsbtn->Size = System::Drawing::Size(230, 120);
			this->Roomsbtn->TabIndex = 0;
			this->Roomsbtn->Text = L"Rooms";
			this->Roomsbtn->UseVisualStyleBackColor = false;
			this->Roomsbtn->Click += gcnew System::EventHandler(this, &AdminHomePage::Roomsbtn_Click);
			// 
			// RoomTypebtn
			// 
			this->RoomTypebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->RoomTypebtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RoomTypebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RoomTypebtn->Location = System::Drawing::Point(517, 127);
			this->RoomTypebtn->Name = L"RoomTypebtn";
			this->RoomTypebtn->Size = System::Drawing::Size(230, 120);
			this->RoomTypebtn->TabIndex = 1;
			this->RoomTypebtn->Text = L"Room Type";
			this->RoomTypebtn->UseVisualStyleBackColor = false;
			this->RoomTypebtn->Click += gcnew System::EventHandler(this, &AdminHomePage::RoomTypebtn_Click_1);
			// 
			// Graphsbtn
			// 
			this->Graphsbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->Graphsbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Graphsbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Graphsbtn->Location = System::Drawing::Point(103, 280);
			this->Graphsbtn->Name = L"Graphsbtn";
			this->Graphsbtn->Size = System::Drawing::Size(230, 120);
			this->Graphsbtn->TabIndex = 2;
			this->Graphsbtn->Text = L"Graphs";
			this->Graphsbtn->UseVisualStyleBackColor = false;
			this->Graphsbtn->Click += gcnew System::EventHandler(this, &AdminHomePage::Graphsbtn_Click);
			// 
			// ApproveRequestsbtn
			// 
			this->ApproveRequestsbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->ApproveRequestsbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ApproveRequestsbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ApproveRequestsbtn->Location = System::Drawing::Point(517, 280);
			this->ApproveRequestsbtn->Name = L"ApproveRequestsbtn";
			this->ApproveRequestsbtn->Size = System::Drawing::Size(230, 120);
			this->ApproveRequestsbtn->TabIndex = 3;
			this->ApproveRequestsbtn->Text = L"Approve Requests";
			this->ApproveRequestsbtn->UseVisualStyleBackColor = false;
			this->ApproveRequestsbtn->Click += gcnew System::EventHandler(this, &AdminHomePage::ApproveRequestsbtn_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->panel1->Controls->Add(this->HMSLabel);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(885, 58);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminHomePage::panel1_Paint);
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
			this->HMSLabel->Click += gcnew System::EventHandler(this, &AdminHomePage::HMSLabel_Click);
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
			// AdminHomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->ClientSize = System::Drawing::Size(885, 512);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->ApproveRequestsbtn);
			this->Controls->Add(this->Graphsbtn);
			this->Controls->Add(this->RoomTypebtn);
			this->Controls->Add(this->Roomsbtn);
			this->Name = L"AdminHomePage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminHomePage";
			this->Load += gcnew System::EventHandler(this, &AdminHomePage::AdminHomePage_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void HMSLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void AdminHomePage_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Graphsbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	GraphsPage^ graphPage = gcnew GraphsPage();
	graphPage->Show();
}
private: System::Void ApproveRequestsbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	ApproveRequests^ requestsPage = gcnew ApproveRequests();
	requestsPage->Show();
}
private: System::Void Roomsbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	AddEditDelete^ addeditdelete = gcnew AddEditDelete();
	addeditdelete->Show();
}
private: System::Void RoomTypebtn_Click_1(System::Object^ sender, System::EventArgs^ e) {
	RoomType^ roomType = gcnew RoomType();
	roomType->Show();
}
};
}
