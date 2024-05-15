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
	/// Summary for ViewSales
	/// </summary>
	public ref class ViewSales : public System::Windows::Forms::Form
	{
	public:
		String^ systemDate;
		String^ connectionString = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ViewWeeklybtn;
	private: System::Windows::Forms::Button^ ViewMonthlybtn;


	public:
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		ViewSales()
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
		~ViewSales()
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewSales::typeid));
			this->salesChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->HMSLabel = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ViewWeeklybtn = (gcnew System::Windows::Forms::Button());
			this->ViewMonthlybtn = (gcnew System::Windows::Forms::Button());
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
			this->button1->Click += gcnew System::EventHandler(this, &ViewSales::button1_Click);
			// 
			// lbNavigation
			// 
			this->lbNavigation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(576, 17);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(297, 32);
			this->lbNavigation->TabIndex = 13;
			this->lbNavigation->Text = L"Graphs |  View Sales";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbNavigation->Click += gcnew System::EventHandler(this, &ViewSales::lbNavigation_Click);
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
			this->label1->Text = L"Weekly Sales";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ViewWeeklybtn
			// 
			this->ViewWeeklybtn->BackColor = System::Drawing::Color::White;
			this->ViewWeeklybtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewWeeklybtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewWeeklybtn->Location = System::Drawing::Point(733, 64);
			this->ViewWeeklybtn->Name = L"ViewWeeklybtn";
			this->ViewWeeklybtn->Size = System::Drawing::Size(140, 59);
			this->ViewWeeklybtn->TabIndex = 16;
			this->ViewWeeklybtn->Text = L"View Weekly";
			this->ViewWeeklybtn->UseVisualStyleBackColor = false;
			this->ViewWeeklybtn->Click += gcnew System::EventHandler(this, &ViewSales::ViewWeeklybtn_Click);
			// 
			// ViewMonthlybtn
			// 
			this->ViewMonthlybtn->BackColor = System::Drawing::Color::White;
			this->ViewMonthlybtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewMonthlybtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewMonthlybtn->Location = System::Drawing::Point(587, 64);
			this->ViewMonthlybtn->Name = L"ViewMonthlybtn";
			this->ViewMonthlybtn->Size = System::Drawing::Size(140, 59);
			this->ViewMonthlybtn->TabIndex = 17;
			this->ViewMonthlybtn->Text = L"View Monthly";
			this->ViewMonthlybtn->UseVisualStyleBackColor = false;
			this->ViewMonthlybtn->Click += gcnew System::EventHandler(this, &ViewSales::ViewMonthlybtn_Click);
			// 
			// ViewSales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->ClientSize = System::Drawing::Size(885, 512);
			this->Controls->Add(this->ViewMonthlybtn);
			this->Controls->Add(this->ViewWeeklybtn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Name = L"ViewSales";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ViewSales";
			this->Load += gcnew System::EventHandler(this, &ViewSales::ViewSales_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->salesChart))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		std::string calculateBeginningOfWeek(std::string date)//TJ
		{
			std::string day = "", month = "", year = "";
			int days, months, years, count = 0, leftover;
			std::string beginningofweek = "";

			for (int i = 0; date[i] != '\0'; i++)
			{
				if (date[i] != '-')
				{
					if (count == 0)
						year += date[i];
					else if (count == 1)
						month += date[i];
					else
						day += date[i];
				}
				else
					count++;
			}


			days = ((int(day[0]) - '0') * 10) + (int(day[1]) - '0');
			months = ((int(month[0]) - '0') * 10) + (int(month[1]) - '0');
			years = ((int(year[0]) - '0') * 1000) + ((int(year[1]) - '0') * 100) + (((int(year[2])) - '0') * 10) + ((int(year[3])) - '0');

			DateTime specificDate(years, months, days);

			DayOfWeek dayOfWeek = specificDate.DayOfWeek;

			// Convert DayOfWeek enum to string representation
			String^ dayOfWeekString = Enum::GetName(DayOfWeek::typeid, dayOfWeek);

			//I'm not returning day cuz day will always be monday
			//also if youre curious why I'm checking character by character when i have the entire dayOfTheWeek string
			//its cuz it wouldnt let me
			switch (dayOfWeekString[0]) {
			case 'M':
				return date;
			case 'T':
				if (dayOfWeekString[1] == 'u') {
					//tuesday
					days -= 1;
					if (days < 1) {
						if (months == 2 || months == 4 || months == 6 || months == 8 || months == 9 || months == 11 || months == 1)
						{
							days = 31;
							months -= 1;
							if (months < 1)
							{
								months = 12;
								years -= 1;
							}
						}
						else {
							if (months == 3)
							{
								//feb
								if (years % 4 == 0 && years % 100 != 0) {
									// leap year
									days = 29;
								}
								else
									days = 28;
							}
							else
								days = 30;
							months -= 1;
						}
					}

				}
				else
				{
					//thursday
					days -= 3;
					if (days < 1) {
						if (months == 2 || months == 4 || months == 6 || months == 8 || months == 9 || months == 11 || months == 1)
						{
							days = 31 + days;
							months -= 1;
							if (months < 1)
							{
								months = 12;
								years -= 1;
							}
						}
						else {
							if (months == 3)
							{
								//feb
								if (years % 4 == 0 && years % 100 != 0) {
									// leap year
									days = 29 + days;
								}
								else
									days = 28 + days;
							}
							else
								days = 30 + days;
							months -= 1;
						}
					}

				}
				date = std::to_string(days) + "-" + std::to_string(months) + "-" + std::to_string(years);
				return date;
			case 'W':
				days -= 2;
				if (days < 1) {
					if (months == 2 || months == 4 || months == 6 || months == 8 || months == 9 || months == 11 || months == 1)
					{
						days = 31 + days;
						months -= 1;
						if (months < 1)
						{
							months = 12;
							years -= 1;
						}
					}
					else {
						if (months == 3)
						{
							//feb
							if (years % 4 == 0 && years % 100 != 0) {
								// leap year
								days = 29 + days;
							}
							else
								days = 28 + days;
						}
						else
							days = 30 + days;
						months -= 1;
					}
				}
				date = std::to_string(days) + "-" + std::to_string(months) + "-" + std::to_string(years);
				return date;
			case 'F':
				days -= 4;
				if (days < 1) {
					if (months == 2 || months == 4 || months == 6 || months == 8 || months == 9 || months == 11 || months == 1)
					{
						days = 31 + days;
						months -= 1;
						if (months < 1)
						{
							months = 12;
							years -= 1;
						}
					}
					else {
						if (months == 3)
						{
							//feb
							if (years % 4 == 0 && years % 100 != 0) {
								// leap year
								days = 29 + days;
							}
							else
								days = 28 + days;
						}
						else
							days = 30 + days;
						months -= 1;
					}
				}
				date = std::to_string(days) + "-" + std::to_string(months) + "-" + std::to_string(years);
				return date;
			case 'S':
				if (dayOfWeekString[1] == 'a') {
					//saturday
					days -= 5;
					if (days < 1) {
						if (months == 2 || months == 4 || months == 6 || months == 8 || months == 9 || months == 11 || months == 1)
						{
							days = 31 + days;
							months -= 1;
							if (months < 1)
							{
								months = 12;
								years -= 1;
							}
						}
						else {
							if (months == 3)
							{
								//feb
								if (years % 4 == 0 && years % 100 != 0) {
									// leap year
									days = 29 + days;
								}
								else
									days = 28 + days;
							}
							else
								days = 30 + days;
							months -= 1;
						}
					}
				}
				else {
					//sunday
					days -= 6;
					if (days < 1) {
						if (months == 2 || months == 4 || months == 6 || months == 8 || months == 9 || months == 11 || months == 1)
						{
							days = 31 + days;
							months -= 1;
							if (months < 1)
							{
								months = 12;
								years -= 1;
							}
						}
						else {
							if (months == 3)
							{
								//feb
								if (years % 4 == 0 && years % 100 != 0) {
									// leap year
									days = 29 + days;
								}
								else
									days = 28 + days;
							}
							else
								days = 30 + days;
							months -= 1;
						}
					}
				}
				date = std::to_string(years) + "-" + std::to_string(months) + "-" + std::to_string(days);
				return date;
				//there is some error in the string. Make sure it has capital first letter and small rest of the letters
				//e.g "Monday", "Tuesday"
			}

		}

	   
	String^ whatMonth(int month) {

			   switch (month) {
			   case 1:
				   return "January";
			   case 2:
				   return "February";
			   case 3:
				   return "March";
			   case 4:
				   return "April";
			   case 5:
				   return "May";
			   case 6:
				   return "June";
			   case 7:
				   return "July";
			   case 8:
				   return "August";
			   case 9:
				   return "September";
			   case 10:
				   return "October";
			   case 11:
				   return "November";
			   case 12:
				   return "Decenber";
			   default:
				   return "ERROR";
			   }
		   }

		   
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

	private: System::Void ViewSales_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void lbNavigation_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ViewWeeklybtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ query = "SELECT paymentDate, amount, status FROM Payments ORDER BY paymentDate";
	SqlCommand^ command = gcnew SqlCommand(query, connection);
	SqlDataReader^ reader = command->ExecuteReader();
	label1->Text = "Weekly Sales";
	this->salesChart->Series["Sales"]->Points->Clear();

	String^ dateLast;

	float totalAmountWeek = 0;
	String^ nextWeek;

	int weekCount = 0;
	Nullable<DateTime> date2;

	while (reader->Read()) {
		String^ date = reader->GetDateTime(0).ToString(); //the first column is  paymentDate
		float amount = reader->GetDouble(1);     //the second column is amount
		String^ status = reader->GetString(2); //the third col is status
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
			if (status == "PAID")
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
	// Close the reader and connection
	reader->Close();

}
private: System::Void ViewMonthlybtn_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlCommand^ command = gcnew SqlCommand("GetMonthlySales", connection);
	command->CommandType = CommandType::StoredProcedure;
	label1->Text = "Monthly Sales";
	
	this->salesChart->Series["Sales"]->Points->Clear();
	for (int i = 1; i <= 12; i++)
	{
		float totalPrice = 0;

		DateTime month(2024, i, 15);

		// Clear existing parameters before adding new ones
		command->Parameters->Clear();

		// Add input parameter @Month
		command->Parameters->Add(gcnew SqlParameter("@Month", SqlDbType::Date));
		command->Parameters["@Month"]->Value = month;

		// Add output parameter @totalPrice
		command->Parameters->Add(gcnew SqlParameter("@totalPrice", SqlDbType::Float));
		command->Parameters["@totalPrice"]->Direction = ParameterDirection::Output;

		try
		{
			// Execute the stored procedure
			command->ExecuteNonQuery();

			// Retrieve the value of the output parameter
			Object^ totalPriceObj = command->Parameters["@totalPrice"]->Value;

			if (totalPriceObj != DBNull::Value)
			{
				try
				{
					totalPrice = Convert::ToSingle(totalPriceObj);
				}
				catch (FormatException^ ex)
				{
					Console::WriteLine("Error converting to float: " + ex->Message);
					totalPrice = 0.0f; 
				}
			}
			else
			{
				// Handle the case when totalPrice is NULL (e.g., set a default value)
				totalPrice = 0.0f; // or any other default value
			}

			DataPoint^ dataPoint = gcnew DataPoint();
			dataPoint->SetValueY(totalPrice);
			salesChart->Series["Sales"]->Points->Add(dataPoint);
		}
		catch (Exception^ ex)
		{
			Console::WriteLine("Error executing stored procedure: " + ex->Message);
			Console::WriteLine(ex->StackTrace);
		}
	}
}
};
}
