#pragma once
#include "EditBooking.h"
#include "MyForm.h"
namespace HotelManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BookRoomNavigation
	/// </summary>
	public ref class BookRoomNavigation : public System::Windows::Forms::Form
	{
	public:
		BookRoomNavigation(void)
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
		~BookRoomNavigation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnNewBooking;
	private: System::Windows::Forms::Button^ btnEditBooking;
	protected:



	protected:




	protected:




	protected:

	protected:



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ HMSLabel;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BookRoomNavigation::typeid));
			this->btnNewBooking = (gcnew System::Windows::Forms::Button());
			this->btnEditBooking = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->HMSLabel = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnNewBooking
			// 
			this->btnNewBooking->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->btnNewBooking->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnNewBooking->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewBooking->Location = System::Drawing::Point(103, 127);
			this->btnNewBooking->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnNewBooking->Name = L"btnNewBooking";
			this->btnNewBooking->Size = System::Drawing::Size(229, 121);
			this->btnNewBooking->TabIndex = 0;
			this->btnNewBooking->Text = L"New Booking";
			this->btnNewBooking->UseVisualStyleBackColor = false;
			this->btnNewBooking->Click += gcnew System::EventHandler(this, &BookRoomNavigation::btnNewBooking_Click);
			// 
			// btnEditBooking
			// 
			this->btnEditBooking->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->btnEditBooking->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnEditBooking->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditBooking->Location = System::Drawing::Point(517, 127);
			this->btnEditBooking->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnEditBooking->Name = L"btnEditBooking";
			this->btnEditBooking->Size = System::Drawing::Size(229, 121);
			this->btnEditBooking->TabIndex = 1;
			this->btnEditBooking->Text = L"Edit Booking";
			this->btnEditBooking->UseVisualStyleBackColor = false;
			this->btnEditBooking->Click += gcnew System::EventHandler(this, &BookRoomNavigation::btnEditBooking_Click);
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
			this->panel1->TabIndex = 4;
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
			this->HMSLabel->Click += gcnew System::EventHandler(this, &BookRoomNavigation::HMSLabel_Click);
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
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(12, 63);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 50);
			this->button1->TabIndex = 12;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BookRoomNavigation::button1_Click);
			// 
			// BookRoomNavigation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->ClientSize = System::Drawing::Size(885, 512);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnEditBooking);
			this->Controls->Add(this->btnNewBooking);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"BookRoomNavigation";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BookRoomNavigation";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void HMSLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnEditBooking_Click(System::Object^ sender, System::EventArgs^ e) {
		EditBooking^ Form = gcnew EditBooking();
		Form->Show();
	}
	private: System::Void btnNewBooking_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm^ form = gcnew MyForm();
		form->Show();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
