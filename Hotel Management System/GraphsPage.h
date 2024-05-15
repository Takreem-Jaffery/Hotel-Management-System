#pragma once

#include "ViewSales.h"
#include "ViewBookings.h"
#include "OccupancyRates.h"
namespace HotelManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GraphsPage
	/// </summary>
	public ref class GraphsPage : public System::Windows::Forms::Form
	{
	public:
		GraphsPage(void)
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
		~GraphsPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ViewSalesbtn;
	private: System::Windows::Forms::Button^ ViewBookingsbtn;
	private: System::Windows::Forms::Button^ OccupancyRatesbtn;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GraphsPage::typeid));
			this->ViewSalesbtn = (gcnew System::Windows::Forms::Button());
			this->ViewBookingsbtn = (gcnew System::Windows::Forms::Button());
			this->OccupancyRatesbtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->HMSLabel = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ViewSalesbtn
			// 
			this->ViewSalesbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->ViewSalesbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ViewSalesbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewSalesbtn->Location = System::Drawing::Point(76, 224);
			this->ViewSalesbtn->Name = L"ViewSalesbtn";
			this->ViewSalesbtn->Size = System::Drawing::Size(230, 120);
			this->ViewSalesbtn->TabIndex = 0;
			this->ViewSalesbtn->Text = L"View Sales";
			this->ViewSalesbtn->UseVisualStyleBackColor = false;
			this->ViewSalesbtn->Click += gcnew System::EventHandler(this, &GraphsPage::ViewSalesbtn_Click);
			// 
			// ViewBookingsbtn
			// 
			this->ViewBookingsbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->ViewBookingsbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ViewBookingsbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewBookingsbtn->Location = System::Drawing::Point(331, 224);
			this->ViewBookingsbtn->Name = L"ViewBookingsbtn";
			this->ViewBookingsbtn->Size = System::Drawing::Size(230, 120);
			this->ViewBookingsbtn->TabIndex = 1;
			this->ViewBookingsbtn->Text = L"View Bookings";
			this->ViewBookingsbtn->UseVisualStyleBackColor = false;
			this->ViewBookingsbtn->Click += gcnew System::EventHandler(this, &GraphsPage::ViewBookingsbtn_Click);
			// 
			// OccupancyRatesbtn
			// 
			this->OccupancyRatesbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->OccupancyRatesbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->OccupancyRatesbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->OccupancyRatesbtn->Location = System::Drawing::Point(589, 224);
			this->OccupancyRatesbtn->Name = L"OccupancyRatesbtn";
			this->OccupancyRatesbtn->Size = System::Drawing::Size(230, 120);
			this->OccupancyRatesbtn->TabIndex = 3;
			this->OccupancyRatesbtn->Text = L"Occupancy Rates";
			this->OccupancyRatesbtn->UseVisualStyleBackColor = false;
			this->OccupancyRatesbtn->Click += gcnew System::EventHandler(this, &GraphsPage::OccupancyRatesbtn_Click);
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
			this->button1->Location = System::Drawing::Point(12, 73);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 50);
			this->button1->TabIndex = 11;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GraphsPage::button1_Click);
			// 
			// GraphsPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->ClientSize = System::Drawing::Size(885, 512);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->OccupancyRatesbtn);
			this->Controls->Add(this->ViewBookingsbtn);
			this->Controls->Add(this->ViewSalesbtn);
			this->Name = L"GraphsPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GraphsPage";
			this->Load += gcnew System::EventHandler(this, &GraphsPage::GraphsPage_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GraphsPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ViewSalesbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ViewSales^ viewSalesPage = gcnew ViewSales();
		viewSalesPage->Show();
	}
private: System::Void ViewBookingsbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	ViewBookings^ viewBookingsPage = gcnew ViewBookings();
	viewBookingsPage->Show();
}
private: System::Void OccupancyRatesbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	OccupancyRates^ occupancyRatesPage = gcnew OccupancyRates();
	occupancyRatesPage->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
