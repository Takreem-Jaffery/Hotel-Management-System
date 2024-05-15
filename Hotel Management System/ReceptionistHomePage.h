#pragma once
#include "CustomerNavigation.h"
#include "BookRoomNavigation.h"
#include "PaymentsNavigation.h"

namespace HotelManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ReceptionistHomePage
	/// </summary>
	public ref class ReceptionistHomePage : public System::Windows::Forms::Form
	{
	public:
		ReceptionistHomePage(void)
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
		~ReceptionistHomePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnBookRoom;
	private: System::Windows::Forms::Button^ btnCustomer;
	private: System::Windows::Forms::Button^ btnPayment;

	protected:




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ReceptionistHomePage::typeid));
			this->btnBookRoom = (gcnew System::Windows::Forms::Button());
			this->btnCustomer = (gcnew System::Windows::Forms::Button());
			this->btnPayment = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->HMSLabel = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnBookRoom
			// 
			this->btnBookRoom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->btnBookRoom->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnBookRoom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBookRoom->Location = System::Drawing::Point(103, 127);
			this->btnBookRoom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnBookRoom->Name = L"btnBookRoom";
			this->btnBookRoom->Size = System::Drawing::Size(229, 121);
			this->btnBookRoom->TabIndex = 0;
			this->btnBookRoom->Text = L"Book Room";
			this->btnBookRoom->UseVisualStyleBackColor = false;
			this->btnBookRoom->Click += gcnew System::EventHandler(this, &ReceptionistHomePage::btnBookRoom_Click);
			// 
			// btnCustomer
			// 
			this->btnCustomer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->btnCustomer->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCustomer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCustomer->Location = System::Drawing::Point(517, 127);
			this->btnCustomer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCustomer->Name = L"btnCustomer";
			this->btnCustomer->Size = System::Drawing::Size(229, 121);
			this->btnCustomer->TabIndex = 1;
			this->btnCustomer->Text = L"Customer Details";
			this->btnCustomer->UseVisualStyleBackColor = false;
			this->btnCustomer->Click += gcnew System::EventHandler(this, &ReceptionistHomePage::btnCustomer_Click);
			// 
			// btnPayment
			// 
			this->btnPayment->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->btnPayment->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnPayment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPayment->Location = System::Drawing::Point(103, 281);
			this->btnPayment->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnPayment->Name = L"btnPayment";
			this->btnPayment->Size = System::Drawing::Size(229, 121);
			this->btnPayment->TabIndex = 2;
			this->btnPayment->Text = L"Payments";
			this->btnPayment->UseVisualStyleBackColor = false;
			this->btnPayment->Click += gcnew System::EventHandler(this, &ReceptionistHomePage::btnPayment_Click);
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
			this->HMSLabel->Click += gcnew System::EventHandler(this, &ReceptionistHomePage::HMSLabel_Click);
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
			// ReceptionistHomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->ClientSize = System::Drawing::Size(885, 512);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnPayment);
			this->Controls->Add(this->btnCustomer);
			this->Controls->Add(this->btnBookRoom);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"ReceptionistHomePage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ReceptionistHomePage";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void HMSLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
		HotelManagementSystem::CustomerNavigation Form;
		Form.ShowDialog();
	}
	private: System::Void btnBookRoom_Click(System::Object^ sender, System::EventArgs^ e) {
		HotelManagementSystem::BookRoomNavigation Form;
		Form.ShowDialog();
	}
	private: System::Void btnPayment_Click(System::Object^ sender, System::EventArgs^ e) {
		HotelManagementSystem::PaymentsNavigation Form;
		Form.ShowDialog();
	}
	private: System::Void btnView_Click(System::Object^ sender, System::EventArgs^ e) {

	}

};
}
