#pragma once

namespace HotelManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class EditBooking : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Panel^ panelGridView;

	private:
		String^ connectionString = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::TextBox^ tbCustId;
	private: System::Windows::Forms::TextBox^ tbCustName;
	private: System::Windows::Forms::Label^ labelCustName;
	private: System::Windows::Forms::Label^ labelCustId;
	private: System::Windows::Forms::Button^ btnDeleteRow;





	public:
		EditBooking(void)
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
		~EditBooking()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ HMSLabel;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ labelSearch;
	private: System::Windows::Forms::ComboBox^ comboBoxSearch;
	private: System::Windows::Forms::DataGridView^ dataGridViewEditBooking;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditBooking::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->HMSLabel = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnDeleteRow = (gcnew System::Windows::Forms::Button());
			this->tbCustName = (gcnew System::Windows::Forms::TextBox());
			this->labelCustName = (gcnew System::Windows::Forms::Label());
			this->labelCustId = (gcnew System::Windows::Forms::Label());
			this->tbCustId = (gcnew System::Windows::Forms::TextBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->panelGridView = (gcnew System::Windows::Forms::Panel());
			this->dataGridViewEditBooking = (gcnew System::Windows::Forms::DataGridView());
			this->labelSearch = (gcnew System::Windows::Forms::Label());
			this->comboBoxSearch = (gcnew System::Windows::Forms::ComboBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panelGridView->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewEditBooking))->BeginInit();
			this->SuspendLayout();
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
			this->panel1->Size = System::Drawing::Size(1009, 58);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &EditBooking::panel1_Paint);
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
			this->HMSLabel->Click += gcnew System::EventHandler(this, &EditBooking::HMSLabel_Click);
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
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->AutoSize = true;
			this->panel2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel2->Controls->Add(this->btnDeleteRow);
			this->panel2->Controls->Add(this->tbCustName);
			this->panel2->Controls->Add(this->labelCustName);
			this->panel2->Controls->Add(this->labelCustId);
			this->panel2->Controls->Add(this->tbCustId);
			this->panel2->Controls->Add(this->btnCancel);
			this->panel2->Controls->Add(this->btnSave);
			this->panel2->Controls->Add(this->panelGridView);
			this->panel2->Controls->Add(this->labelSearch);
			this->panel2->Controls->Add(this->comboBoxSearch);
			this->panel2->Location = System::Drawing::Point(72, 97);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(885, 441);
			this->panel2->TabIndex = 5;
			this->panel2->SizeChanged += gcnew System::EventHandler(this, &EditBooking::EditBooking_Load);
			// 
			// btnDeleteRow
			// 
			this->btnDeleteRow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnDeleteRow->BackColor = System::Drawing::Color::IndianRed;
			this->btnDeleteRow->Location = System::Drawing::Point(748, 187);
			this->btnDeleteRow->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnDeleteRow->Name = L"btnDeleteRow";
			this->btnDeleteRow->Size = System::Drawing::Size(116, 64);
			this->btnDeleteRow->TabIndex = 10;
			this->btnDeleteRow->Text = L"Delete";
			this->btnDeleteRow->UseVisualStyleBackColor = false;
			this->btnDeleteRow->Click += gcnew System::EventHandler(this, &EditBooking::btnDeleteRow_Click);
			// 
			// tbCustName
			// 
			this->tbCustName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCustName->Location = System::Drawing::Point(553, 126);
			this->tbCustName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tbCustName->Name = L"tbCustName";
			this->tbCustName->ReadOnly = true;
			this->tbCustName->Size = System::Drawing::Size(241, 26);
			this->tbCustName->TabIndex = 9;
			// 
			// labelCustName
			// 
			this->labelCustName->AutoSize = true;
			this->labelCustName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCustName->Location = System::Drawing::Point(388, 126);
			this->labelCustName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCustName->Name = L"labelCustName";
			this->labelCustName->Size = System::Drawing::Size(147, 24);
			this->labelCustName->TabIndex = 8;
			this->labelCustName->Text = L"Customer Name";
			// 
			// labelCustId
			// 
			this->labelCustId->AutoSize = true;
			this->labelCustId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCustId->Location = System::Drawing::Point(88, 122);
			this->labelCustId->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCustId->Name = L"labelCustId";
			this->labelCustId->Size = System::Drawing::Size(113, 24);
			this->labelCustId->TabIndex = 7;
			this->labelCustId->Text = L"Customer ID";
			// 
			// tbCustId
			// 
			this->tbCustId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCustId->Location = System::Drawing::Point(219, 121);
			this->tbCustId->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tbCustId->Name = L"tbCustId";
			this->tbCustId->ReadOnly = true;
			this->tbCustId->Size = System::Drawing::Size(132, 26);
			this->tbCustId->TabIndex = 6;
			// 
			// btnCancel
			// 
			this->btnCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(92, 367);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(133, 46);
			this->btnCancel->TabIndex = 5;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &EditBooking::btnCancel_Click);
			// 
			// btnSave
			// 
			this->btnSave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(632, 367);
			this->btnSave->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(164, 46);
			this->btnSave->TabIndex = 4;
			this->btnSave->Text = L"Save Changes";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &EditBooking::btnSave_Click);
			// 
			// panelGridView
			// 
			this->panelGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelGridView->Controls->Add(this->dataGridViewEditBooking);
			this->panelGridView->Location = System::Drawing::Point(92, 187);
			this->panelGridView->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelGridView->Name = L"panelGridView";
			this->panelGridView->Size = System::Drawing::Size(648, 159);
			this->panelGridView->TabIndex = 3;
			// 
			// dataGridViewEditBooking
			// 
			this->dataGridViewEditBooking->AllowUserToAddRows = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewEditBooking->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewEditBooking->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewEditBooking->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dataGridViewEditBooking->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewEditBooking->Location = System::Drawing::Point(0, 0);
			this->dataGridViewEditBooking->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridViewEditBooking->Name = L"dataGridViewEditBooking";
			this->dataGridViewEditBooking->RowHeadersWidth = 51;
			this->dataGridViewEditBooking->Size = System::Drawing::Size(648, 159);
			this->dataGridViewEditBooking->TabIndex = 2;
			this->dataGridViewEditBooking->AutoSizeColumnsModeChanged += gcnew System::Windows::Forms::DataGridViewAutoSizeColumnsModeEventHandler(this, &EditBooking::dataGridViewEditBooking_AutoSizeColumnsModeChanged);
			this->dataGridViewEditBooking->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &EditBooking::dataGridViewEditBooking_CellClick);
			this->dataGridViewEditBooking->CellLeave += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &EditBooking::dataGridViewEditBooking_CellLeave);
			this->dataGridViewEditBooking->EditingControlShowing += gcnew System::Windows::Forms::DataGridViewEditingControlShowingEventHandler(this, &EditBooking::dataGridViewEditBooking_EditingControlShowing);
			// 
			// labelSearch
			// 
			this->labelSearch->AutoSize = true;
			this->labelSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSearch->Location = System::Drawing::Point(44, 43);
			this->labelSearch->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSearch->Name = L"labelSearch";
			this->labelSearch->Size = System::Drawing::Size(183, 24);
			this->labelSearch->TabIndex = 1;
			this->labelSearch->Text = L"Search Booking ID";
			// 
			// comboBoxSearch
			// 
			this->comboBoxSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxSearch->FormattingEnabled = true;
			this->comboBoxSearch->Location = System::Drawing::Point(275, 39);
			this->comboBoxSearch->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->comboBoxSearch->Name = L"comboBoxSearch";
			this->comboBoxSearch->Size = System::Drawing::Size(464, 32);
			this->comboBoxSearch->TabIndex = 0;
			this->comboBoxSearch->SelectedIndexChanged += gcnew System::EventHandler(this, &EditBooking::comboBoxSearch_SelectedIndexChanged);
			// 
			// EditBooking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->ClientSize = System::Drawing::Size(1009, 596);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"EditBooking";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EditBooking";
			this->Load += gcnew System::EventHandler(this, &EditBooking::EditBooking_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panelGridView->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewEditBooking))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int columnIndexWithDateTimePicker, rowIndexWithDateTimePicker;
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void HMSLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EditBooking_Load(System::Object^ sender, System::EventArgs^ e) {

		dataGridViewEditBooking->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;

		//populate comboBox
		try {
			connection->Open();

			SqlCommand^ command = gcnew SqlCommand();
			command->Connection = connection;
			command->CommandType = CommandType::StoredProcedure;
			command->CommandText = "GetUnpaidBookings";

			SqlDataReader^ reader = command->ExecuteReader();
			comboBoxSearch->Items->Clear();
			while (reader->Read()) {
				comboBoxSearch->Items->Add(reader["bookingId"]->ToString());
			}
			reader->Close();
			connection->Close();

		}
		catch (SqlException^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			connection->Close();
		}

		//populate data grid view
		try {
			connection->Open();
			SqlCommand^ command = gcnew SqlCommand();
			command->Connection = connection;
			command->CommandType = CommandType::StoredProcedure;
			command->CommandText = "GetUnpaidBookings";

			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);
			DataTable^ dataTable = gcnew DataTable();


			dataAdapter->Fill(dataTable);
			dataTable->Columns["bookingId"]->ColumnName = "Booking ID";
			dataTable->Columns["customerId"]->ColumnName = "Customer ID";
			dataTable->Columns["roomNum"]->ColumnName = "Room Number";
			dataTable->Columns["reservationDate"]->ColumnName = "Date of Reservation";
			dataTable->Columns["checkInDate"]->ColumnName = "Date of Check-In";
			dataTable->Columns["checkOutDate"]->ColumnName = "Date of Check-Out";

			dataGridViewEditBooking->DataSource = dataTable;

			dataGridViewEditBooking->Columns["Booking ID"]->ReadOnly = true;
			dataGridViewEditBooking->Columns["Customer ID"]->ReadOnly = true;
			dataGridViewEditBooking->Columns["Date of Reservation"]->ReadOnly = true;

		}
		catch (SqlException^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			connection->Close();
		}


	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void dataGridViewEditBooking_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		// ADD DATE TIME PICKER TO CELLS
		int indexCheckIn, indexCheckOut;
		try {
			indexCheckIn = dataGridViewEditBooking->Columns["Date of Check-In"]->Index;
			indexCheckOut = dataGridViewEditBooking->Columns["Date of Check-Out"]->Index;
		}
		catch (Exception^ e) {
			indexCheckIn = 4;
			indexCheckOut = 5;
		}

		if (e->RowIndex >= 0 && e->ColumnIndex == indexCheckIn || e->ColumnIndex == indexCheckOut) {

			//save current cell index to remove them later
			rowIndexWithDateTimePicker = e->RowIndex;
			columnIndexWithDateTimePicker = e->ColumnIndex;

			DataGridViewTextBoxCell^ cell = dynamic_cast<DataGridViewTextBoxCell^>(dataGridViewEditBooking->Rows[e->RowIndex]->Cells[e->ColumnIndex]);
			if (cell != nullptr) {

				DateTimePicker^ dateTimePicker = gcnew DateTimePicker();
				dateTimePicker->Format = DateTimePickerFormat::Short;

				System::Drawing::Rectangle rectangle = dataGridViewEditBooking->GetCellDisplayRectangle(e->ColumnIndex, e->RowIndex, false);
				dateTimePicker->Size = System::Drawing::Size(rectangle.Width, rectangle.Height);
				dateTimePicker->Location = Point(rectangle.X, rectangle.Y);

				DateTime cellValue;
				if (DateTime::TryParse(cell->Value->ToString(), cellValue)) {
					dateTimePicker->Value = cellValue;
				}

				dateTimePicker->ValueChanged += gcnew EventHandler(this, &EditBooking::dateTimePicker_ValueChanged);

				dataGridViewEditBooking->Controls->Add(dateTimePicker);

				dateTimePicker->BringToFront();
			}
		}

	}
	private: System::Void comboBoxSearch_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		String^ selectedID = comboBoxSearch->SelectedItem->ToString();
		//populate data grid view
		try {
			connection->Open();

			SqlCommand^ command = gcnew SqlCommand("SELECT * FROM Booking WHERE bookingID=@selectedID", connection);
			command->Parameters->AddWithValue("@selectedID", selectedID);

			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);
			DataTable^ dataTable = gcnew DataTable();
			dataAdapter->Fill(dataTable);

			dataTable->Columns["bookingId"]->ColumnName = "Booking ID";
			dataTable->Columns["customerId"]->ColumnName = "Customer ID";
			dataTable->Columns["roomNum"]->ColumnName = "Room Number";
			dataTable->Columns["reservationDate"]->ColumnName = "Date of Reservation";
			dataTable->Columns["checkInDate"]->ColumnName = "Date of Check-In";
			dataTable->Columns["checkOutDate"]->ColumnName = "Date of Check-Out";

			dataGridViewEditBooking->DataSource = dataTable;
			dataGridViewEditBooking->Columns["Booking ID"]->ReadOnly = true;
			dataGridViewEditBooking->Columns["Customer ID"]->ReadOnly = true;
			dataGridViewEditBooking->Columns["Date of Reservation"]->ReadOnly = true;

			// populate Customer textbox
			command = gcnew SqlCommand("SELECT customerID FROM Booking WHERE bookingID=@selectedID", connection);
			command->Parameters->AddWithValue("@selectedID", selectedID);

			SqlDataReader^ reader = command->ExecuteReader();
			if (reader->Read()) {
				String^ customerID = Convert::ToString(reader["customerID"]);

				command = gcnew SqlCommand("SELECT name FROM Customer WHERE customerID=@custID", connection);
				command->Parameters->AddWithValue("@custID", customerID);
				reader->Close();

				reader = command->ExecuteReader();
				if (reader->Read()) {
					String^ customerName = Convert::ToString(reader["name"]);
					tbCustId->Text = customerID;
					tbCustName->Text = customerName;
				}
			}
			reader->Close();
		}
		catch (SqlException^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			connection->Close();
		}
	}
	private: System::Void dataGridViewEditBooking_AutoSizeColumnsModeChanged(System::Object^ sender, System::Windows::Forms::DataGridViewAutoSizeColumnsModeEventArgs^ e) {
	}

	private: System::Void dataGridViewEditBooking_EditingControlShowing(System::Object^ sender, System::Windows::Forms::DataGridViewEditingControlShowingEventArgs^ e) {

	}
	private: System::Void dateTimePicker_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		DateTimePicker^ dateTimePicker = dynamic_cast<DateTimePicker^>(sender);
		DateTime pickedDate = dateTimePicker->Value;

		DateTime reservationDate = DateTime::Parse(dataGridViewEditBooking->Rows[dataGridViewEditBooking->CurrentCell->RowIndex]->Cells["Date of Reservation"]->Value->ToString());

		if (pickedDate < reservationDate) {
			MessageBox::Show("Error: The picked date cannot be earlier than the reservation date.");
			dateTimePicker->Value = reservationDate;
		}
		else {
			dataGridViewEditBooking->CurrentCell->Value = pickedDate.ToShortDateString();
		}
	}
	private: System::Void dataGridViewEditBooking_CellLeave(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->ColumnIndex == columnIndexWithDateTimePicker && e->RowIndex == rowIndexWithDateTimePicker) {
			// Remove the DateTimePicker from the cell
			dataGridViewEditBooking->Controls->Clear();
		}
	}
	private: System::Void btnDeleteRow_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dataGridViewEditBooking->SelectedRows->Count > 0) {

			System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to delete this booking from database?",
				"Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (result == System::Windows::Forms::DialogResult::Yes) {

				try {

					String^ bookingId = dataGridViewEditBooking->SelectedRows[0]->Cells["Booking ID"]->Value->ToString();

					connection->Open();
					SqlCommand^ command = gcnew SqlCommand();
					command->Connection = connection;
					command->CommandType = CommandType::StoredProcedure;
					command->CommandText = "Cancel_Booking";

					command->Parameters->AddWithValue("@bookingId", bookingId);
					command->Parameters->Add("@flag", SqlDbType::Int)->Direction = ParameterDirection::Output;

					command->ExecuteNonQuery();

					int flag = (int)command->Parameters["@flag"]->Value;
					if (flag == 1) {
						dataGridViewEditBooking->Rows->Remove(dataGridViewEditBooking->SelectedRows[0]);
						connection->Close();


						//re-populate comboBox
						try {
							connection->Open();

							SqlCommand^ command = gcnew SqlCommand();
							command->Connection = connection;
							command->CommandType = CommandType::StoredProcedure;
							command->CommandText = "GetUnpaidBookings";

							SqlDataReader^ reader = command->ExecuteReader();
							comboBoxSearch->Items->Clear();
							while (reader->Read()) {
								comboBoxSearch->Items->Add(reader["bookingId"]->ToString());
							}
							reader->Close();

						}
						catch (SqlException^ ex) {
							MessageBox::Show("Error: " + ex->Message);
						}
						finally {
							connection->Close();
						}


						MessageBox::Show("Booking deleted successfully.");
					}
					else {
						MessageBox::Show("Unable to Edit booking :(");
					}

				}
				catch (Exception^ e) {
					MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}


			}
		}
		else {
			MessageBox::Show("Please choose a row to delete.");
		}
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridViewEditBooking->SelectedRows->Count > 0) {

			DataGridViewRow^ selectedRow = dataGridViewEditBooking->SelectedRows[0];
			String^ bookingId = selectedRow->Cells["Booking ID"]->Value->ToString();
			int newRoomNum = Convert::ToInt32(selectedRow->Cells["Room Number"]->Value);
			DateTime newCheckInDate = Convert::ToDateTime(selectedRow->Cells["Date of Check-In"]->Value);
			DateTime newCheckOutDate = Convert::ToDateTime(selectedRow->Cells["Date of Check-Out"]->Value);

			try {
				connection->Open();
				SqlCommand^ command = gcnew SqlCommand();
				command->Connection = connection;
				command->CommandType = CommandType::StoredProcedure;
				command->CommandText = "Edit_Booking_RoomAndDate";
				command->Parameters->Add(gcnew SqlParameter("@bookingid", bookingId));
				command->Parameters->Add(gcnew SqlParameter("@newRoomNum", newRoomNum));
				command->Parameters->Add(gcnew SqlParameter("@newCheckInDate", newCheckInDate));
				command->Parameters->Add(gcnew SqlParameter("@newCheckOutDate", newCheckOutDate));
				command->Parameters->Add(gcnew SqlParameter("@flag", SqlDbType::Int))->Direction = ParameterDirection::Output;

				command->ExecuteNonQuery();

				int flag = Convert::ToInt32(command->Parameters["@flag"]->Value);
				//--flag returns 0 for invalid booking, -1 for invalid roomnum/date, -2 for unavailable room, 1 for successful updation
				if (flag == 0) {
					MessageBox::Show(String::Format("Failed to update booking with ID: {0}.", bookingId + " ID does not exist."),
						"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else if (flag == -1) {
					MessageBox::Show(String::Format("Failed to update booking with ID: {0}.", bookingId + " Room Number or Check-In Check-Out dates are incorrect."),
						"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else if (flag == -2) {
					MessageBox::Show(String::Format("Failed to update booking with ID: {0}.", bookingId + " Room is unavailable in the entered dates!"),
						"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else if (flag == 1) {
					MessageBox::Show(String::Format("Successfully updated booking with ID: {0}.", bookingId));
				}
			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				connection->Close();
			}
		}
		else {
			MessageBox::Show("Trying to save changes? Please select a row first!");
		}
	}
	};
}
