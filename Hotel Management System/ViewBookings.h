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
	/// Summary for ViewBookings
	/// </summary>
	public ref class ViewBookings : public System::Windows::Forms::Form
	{
	public:
		String^ systemDate;
		String^ connectionString = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";
	private: System::Windows::Forms::Label^ TitleLabel;
	public:

	private: System::Windows::Forms::Button^ ViewBookingStatsbtn;

	private: System::Windows::Forms::Button^ ViewRoomStatsbtn;

	public:
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
	public: bool isBarChart = true; // Initially set to bar chart

		ViewBookings()
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
		~ViewBookings()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ salesChart;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewBookings::typeid));
			this->salesChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->HMSLabel = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->TitleLabel = (gcnew System::Windows::Forms::Label());
			this->ViewBookingStatsbtn = (gcnew System::Windows::Forms::Button());
			this->ViewRoomStatsbtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->salesChart))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// salesChart
			// 
			chartArea1->Name = L"ChartArea1";
			this->salesChart->ChartAreas->Add(chartArea1);
			this->salesChart->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Name = L"Legend1";
			this->salesChart->Legends->Add(legend1);
			this->salesChart->Location = System::Drawing::Point(0, 0);
			this->salesChart->Name = L"salesChart";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Sales";
			this->salesChart->Series->Add(series1);
			this->salesChart->Size = System::Drawing::Size(851, 371);
			this->salesChart->TabIndex = 2;
			this->salesChart->Text = L"chart1";
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoSize = true;
			this->panel1->Controls->Add(this->salesChart);
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
			this->button1->Click += gcnew System::EventHandler(this, &ViewBookings::button1_Click);
			// 
			// lbNavigation
			// 
			this->lbNavigation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(552, 17);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(321, 32);
			this->lbNavigation->TabIndex = 13;
			this->lbNavigation->Text = L"Graphs |  View Bookings";
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
			// TitleLabel
			// 
			this->TitleLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TitleLabel->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitleLabel->Location = System::Drawing::Point(329, 73);
			this->TitleLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TitleLabel->Name = L"TitleLabel";
			this->TitleLabel->Size = System::Drawing::Size(220, 32);
			this->TitleLabel->TabIndex = 14;
			this->TitleLabel->Text = L"Monthly Bookings";
			this->TitleLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ViewBookingStatsbtn
			// 
			this->ViewBookingStatsbtn->BackColor = System::Drawing::Color::White;
			this->ViewBookingStatsbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewBookingStatsbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ViewBookingStatsbtn->Location = System::Drawing::Point(733, 64);
			this->ViewBookingStatsbtn->Name = L"ViewBookingStatsbtn";
			this->ViewBookingStatsbtn->Size = System::Drawing::Size(140, 59);
			this->ViewBookingStatsbtn->TabIndex = 15;
			this->ViewBookingStatsbtn->Text = L"View Booking Stats";
			this->ViewBookingStatsbtn->UseVisualStyleBackColor = false;
			this->ViewBookingStatsbtn->Click += gcnew System::EventHandler(this, &ViewBookings::ViewBookingStatsbtn_Click);
			// 
			// ViewRoomStatsbtn
			// 
			this->ViewRoomStatsbtn->BackColor = System::Drawing::Color::White;
			this->ViewRoomStatsbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewRoomStatsbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ViewRoomStatsbtn->Location = System::Drawing::Point(587, 64);
			this->ViewRoomStatsbtn->Name = L"ViewRoomStatsbtn";
			this->ViewRoomStatsbtn->Size = System::Drawing::Size(140, 59);
			this->ViewRoomStatsbtn->TabIndex = 16;
			this->ViewRoomStatsbtn->Text = L"View Room Stats";
			this->ViewRoomStatsbtn->UseVisualStyleBackColor = false;
			this->ViewRoomStatsbtn->Click += gcnew System::EventHandler(this, &ViewBookings::ViewRoomStatsbtn_Click);
			// 
			// ViewBookings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->ClientSize = System::Drawing::Size(885, 512);
			this->Controls->Add(this->ViewRoomStatsbtn);
			this->Controls->Add(this->ViewBookingStatsbtn);
			this->Controls->Add(this->TitleLabel);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Name = L"ViewBookings";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ViewBookings";
			this->Load += gcnew System::EventHandler(this, &ViewBookings::ViewBookings_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->salesChart))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ getNextDay(int day, int month, int year) {



			if (day == 31 || (day == 30 && (month == 4 || month == 6 || month == 8 || month == 9 || month == 11 || month == 1)) || month == 2 && (day == 28 || day == 29)) {
				day = 1;
				month++;
				if (month == 13) {
					month = 1;
					year += 1;
				}
			}
			else
				day++;


			String^ date = year + "-" + month + "-" + day;
			return date;
		}

		String^ getNextWeek(int day, int month, int year) {

			String^ w;
			for (int i = 0; i < 7; i++)
			{
				w = getNextDay(day, month, year);

				std::string week = msclr::interop::marshal_as<std::string>(w);
				int count = 0;
				std::string days = "", months = "", years = "";
				for (int i = 0; week[i] != '\0'; i++) {
					if (week[i] == '-')
					{
						count++;
						continue;
					}
					if (count == 0)
						years += week[i];
					else if (count == 1)
						months += week[i];
					else
						days += week[i];
				}
				day = stoi(days);
				month = stoi(months);
				year = stoi(years);
			}
			return w;
		}
	private: System::Void ViewBookings_Load(System::Object^ sender, System::EventArgs^ e) {

		this->salesChart->Series["Sales"]->Points->Clear();

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void ViewRoomStatsbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (isBarChart)
		{
			salesChart->Series["Sales"]->ChartType= SeriesChartType::Pie;
			isBarChart = false;
		}

		TitleLabel->Text = "Room Popularity";
		String^ query = "SELECT roomNum, COUNT(*) AS BookingCount FROM Booking GROUP BY roomNum ORDER BY roomNum";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		SqlDataReader^ reader = command->ExecuteReader();

		this->salesChart->Series["Sales"]->Points->Clear();

		while (reader->Read())
		{
			int roomNum = reader->GetInt32(0); //roomNum
			int bookingCount = reader->GetInt32(1); //BookingCount

			// Add data point to the pie chart
			salesChart->Series["Sales"]->Points->AddXY(roomNum.ToString(), bookingCount);
		}

		reader->Close();
	}
private: System::Void ViewBookingStatsbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	/*salesChart->Series->Clear();*/
	if (!isBarChart)
	{
		salesChart->Series["Sales"]->ChartType = SeriesChartType::Column;
		isBarChart = true;
	}

	TitleLabel->Text = "Weekly Bookings";
	String^ query = "SELECT reservationDate, COUNT(*) AS BookingCount FROM Booking GROUP BY reservationDate ORDER BY reservationDate";
	SqlCommand^ command = gcnew SqlCommand(query, connection);
	SqlDataReader^ reader = command->ExecuteReader();

	this->salesChart->Series["Sales"]->Points->Clear();
	String^ dateLast;

	float totalAmountWeek = 0;
	String^ nextWeek;

	int weekCount = 0;
	Nullable<DateTime> date2;

	while (reader->Read()) {
		String^ date = reader->GetDateTime(0).ToString(); //the first column is reservationDate
		int amount = reader->GetInt32(1);     //the second column is count

		dateLast = date;
		weekCount++;

		std::string day;
		std::string month;
		std::string year;
		int days, months, years, nextWeekDays, nextWeekMonths, nextWeekYears;
		int count = 0;

		Nullable<DateTime> date1;// (years, months, days);
		date2;// (nextWeekYears, nextWeekMonths, nextWeekDays);

		std::string dateString = marshal_as<std::string>(date);
		for (int i = 0; dateString[i] != ' '; i++)
		{
			if (date[i] != '/')
			{
				if (count == 1)
					day += dateString[i];
				else if (count == 0)
					month += dateString[i];
				else
					year += dateString[i];
			}
			else
				count++;
		}

		day += '\0';
		month += '\0';
		year += '\0';
		if (day[1] != '\0')
			days = ((int(day[0]) - '0') * 10) + (int(day[1]) - '0');
		else
			days = (int(day[0]) - '0');
		if (month[1] != '\0')
			months = ((int(month[0]) - '0') * 10) + (int(month[1]) - '0');
		else
			months = (int(month[0]) - '0');
		years = ((int(year[0]) - '0') * 1000) + ((int(year[1]) - '0') * 100) + (((int(year[2])) - '0') * 10) + ((int(year[3])) - '0');

		date1 = DateTime(years, months, days);

		//Trying to make it so that it doesnt just fine next week for every date value in the database but onlu
		//when an actual weeks worth of data has passed.
		if (weekCount == 7 || !(date2.HasValue) || date1.Value >= date2.Value) {

			//set next week to actual next week now
			nextWeek = getNextWeek(days, months, years);
			count = 0;
			if (date2.HasValue)
				weekCount = 7;
			day = "", month = "", year = "";
			std::string nextWeekString = marshal_as<std::string>(nextWeek);
			for (int i = 0; nextWeekString[i] != '\0'; i++)
			{
				if (nextWeek[i] != '-')
				{
					if (count == 0)
						year += nextWeekString[i];
					else if (count == 1)
						month += nextWeekString[i];
					else
						day += nextWeekString[i];
				}
				else
					count++;
			}
			day += '\0';
			month += '\0';
			year += '\0';

			if (day[1] != '\0')
				nextWeekDays = ((int(day[0]) - '0') * 10) + (int(day[1]) - '0');
			else
				nextWeekDays = (int(day[0]) - '0');
			if (month[1] != '\0')
				nextWeekMonths = ((int(month[0]) - '0') * 10) + (int(month[1]) - '0');
			else
				nextWeekMonths = (int(month[0]) - '0');
			nextWeekYears = ((int(year[0]) - '0') * 1000) + ((int(year[1]) - '0') * 100) + (((int(year[2])) - '0') * 10) + ((int(year[3])) - '0');

			date1 = DateTime(years, months, days);
			date2 = DateTime(nextWeekYears, nextWeekMonths, nextWeekDays);
		}

		if (weekCount < 7 && (date1.Value < date2.Value)) {
				totalAmountWeek += amount;
		}
		else
		{
			// Add data to chart
			this->salesChart->Series["Sales"]->Points->AddXY(date, totalAmountWeek);
			weekCount = 0;
			totalAmountWeek = amount;
		}
	}

	this->salesChart->Series["Sales"]->Points->AddXY(dateLast, totalAmountWeek);
	weekCount = 0;
	totalAmountWeek = 0;

	reader->Close();
}
}
	; 
}
