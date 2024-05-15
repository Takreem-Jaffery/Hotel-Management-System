#pragma once
#include <string>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <vector>
#include <iostream>
#include <ctime>

namespace HotelManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Data::SqlClient;
	using namespace msclr::interop;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Summary for OccupancyRates
	/// </summary>
	public ref class OccupancyRates : public System::Windows::Forms::Form
	{
	public:
		String^ systemDate;
		String^ connectionString = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";
	private: System::Windows::Forms::Label^ label1;




	public:
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		OccupancyRates()
		{
			InitializeComponent();
			this->systemDate = DateTime::Now.ToString();
			// Open the connection
			connection->Open();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OccupancyRates()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ pieChart;
	protected:

	protected:

	protected:


	private: System::Windows::Forms::Panel^ panel1;








	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ lbNavigation;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ HMSLabel;
	private: System::Windows::Forms::Button^ button5;


	protected:


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OccupancyRates::typeid));
			this->pieChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->HMSLabel = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pieChart))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// pieChart
			// 
			chartArea1->Name = L"ChartArea1";
			this->pieChart->ChartAreas->Add(chartArea1);
			this->pieChart->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Name = L"Legend1";
			this->pieChart->Legends->Add(legend1);
			this->pieChart->Location = System::Drawing::Point(0, 0);
			this->pieChart->Name = L"pieChart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"OccupancyRates";
			this->pieChart->Series->Add(series1);
			this->pieChart->Size = System::Drawing::Size(851, 371);
			this->pieChart->TabIndex = 2;
			this->pieChart->Text = L"chart1";
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoSize = true;
			this->panel1->Controls->Add(this->pieChart);
			this->panel1->Location = System::Drawing::Point(22, 129);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(851, 371);
			this->panel1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(0, 62);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 61);
			this->button1->TabIndex = 9;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OccupancyRates::button1_Click_1);
			// 
			// lbNavigation
			// 
			this->lbNavigation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(505, 17);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(368, 32);
			this->lbNavigation->TabIndex = 13;
			this->lbNavigation->Text = L"Graphs |  Occupancy Rates";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->panel4->Controls->Add(this->HMSLabel);
			this->panel4->Controls->Add(this->lbNavigation);
			this->panel4->Controls->Add(this->button5);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(885, 58);
			this->panel4->TabIndex = 14;
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
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(310, 73);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(215, 32);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Occupancy Rate";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// OccupancyRates
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->ClientSize = System::Drawing::Size(885, 512);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Name = L"OccupancyRates";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"OccupancyRates";
			this->Load += gcnew System::EventHandler(this, &OccupancyRates::OccupancyRates_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pieChart))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	public: int CalculateDays(Nullable<DateTime> checkInDate, Nullable<DateTime> checkOutDate)
		{
			if (checkInDate.HasValue && checkOutDate.HasValue)
			{
				// Calculate the number of days between the check-in and check-out dates
				TimeSpan duration = checkOutDate.Value - checkInDate.Value;
				int numDays = duration.Days;

				return numDays;
			}

			// If either date is null, return SQL NULL
			return 0;
		}
	private: System::Void OccupancyRates_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ query = "SELECT checkInDate,checkOutDate FROM Booking";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		SqlDataReader^ reader = command->ExecuteReader();

		int lessThanOneWeek = 0;
		int lessThanTwoWeeks = 0;
		int lessThanThreeWeeks = 0;
		int lessThanOneMonth = 0;
		int moreThanOneMonth = 0;

		while (reader->Read()) {
			DateTime checkIn = reader->GetDateTime(0);
			DateTime checkOut = reader->GetDateTime(1);

			int days = CalculateDays(checkIn, checkOut);
			// Categorize based on duration in days
			if (days < 7) {
				lessThanOneWeek++;
			}
			else if (days < 14) {
				lessThanTwoWeeks++;
			}
			else if (days < 21) {
				lessThanThreeWeeks++;
			}
			else if (days < 30) {
				lessThanOneMonth++;
			}
			else {
				moreThanOneMonth++;
			}
		}

		reader->Close();

		// Now you can use these counters to populate your pie chart
		// For example, if you have a chart control named 'pieChart'

		pieChart->Series["OccupancyRates"]->Points->AddXY("<1 Week", lessThanOneWeek);
		pieChart->Series["OccupancyRates"]->Points->AddXY("<2 Weeks", lessThanTwoWeeks);
		pieChart->Series["OccupancyRates"]->Points->AddXY("<3 Weeks", lessThanThreeWeeks);
		pieChart->Series["OccupancyRates"]->Points->AddXY("<1 Month", lessThanOneMonth);
		pieChart->Series["OccupancyRates"]->Points->AddXY(">=1 Month", moreThanOneMonth);

		// Customize the chart appearance as needed
		pieChart->ChartAreas[0]->AxisX->Title = "Occupancy Duration";
		pieChart->ChartAreas[0]->AxisY->Title = "Booking Count";
		pieChart->ChartAreas[0]->RecalculateAxesScale();

		// Refresh the chart
		pieChart->Refresh();
	
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void lbNavigation_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
