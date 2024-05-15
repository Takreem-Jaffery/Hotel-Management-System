#pragma once

namespace HotelManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class DeleteCustomer : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Panel^ panelGridView;

	private:
		String^ connectionString = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);


	private: System::Windows::Forms::Button^ btnCancel;




	private: System::Windows::Forms::Button^ btnDeleteRow;





	public:
		DeleteCustomer(void)
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
		~DeleteCustomer()
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

	private: System::Windows::Forms::DataGridView^ dataGridViewDeleteCustomer;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DeleteCustomer::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->HMSLabel = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnDeleteRow = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->panelGridView = (gcnew System::Windows::Forms::Panel());
			this->dataGridViewDeleteCustomer = (gcnew System::Windows::Forms::DataGridView());
			this->labelSearch = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panelGridView->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDeleteCustomer))->BeginInit();
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
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &DeleteCustomer::panel1_Paint);
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
			this->HMSLabel->Click += gcnew System::EventHandler(this, &DeleteCustomer::HMSLabel_Click);
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
			this->panel2->Controls->Add(this->btnCancel);
			this->panel2->Controls->Add(this->panelGridView);
			this->panel2->Controls->Add(this->labelSearch);
			this->panel2->Location = System::Drawing::Point(72, 97);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(885, 441);
			this->panel2->TabIndex = 5;
			this->panel2->SizeChanged += gcnew System::EventHandler(this, &DeleteCustomer::DeleteCustomer_Load);
			// 
			// btnDeleteRow
			// 
			this->btnDeleteRow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnDeleteRow->BackColor = System::Drawing::Color::IndianRed;
			this->btnDeleteRow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeleteRow->Location = System::Drawing::Point(687, 367);
			this->btnDeleteRow->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnDeleteRow->Name = L"btnDeleteRow";
			this->btnDeleteRow->Size = System::Drawing::Size(116, 46);
			this->btnDeleteRow->TabIndex = 10;
			this->btnDeleteRow->Text = L"Delete";
			this->btnDeleteRow->UseVisualStyleBackColor = false;
			this->btnDeleteRow->Click += gcnew System::EventHandler(this, &DeleteCustomer::btnDeleteRow_Click);
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
			this->btnCancel->Click += gcnew System::EventHandler(this, &DeleteCustomer::btnCancel_Click);
			// 
			// panelGridView
			// 
			this->panelGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelGridView->Controls->Add(this->dataGridViewDeleteCustomer);
			this->panelGridView->Location = System::Drawing::Point(92, 92);
			this->panelGridView->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelGridView->Name = L"panelGridView";
			this->panelGridView->Size = System::Drawing::Size(711, 249);
			this->panelGridView->TabIndex = 3;
			// 
			// dataGridViewDeleteCustomer
			// 
			this->dataGridViewDeleteCustomer->AllowUserToAddRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewDeleteCustomer->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewDeleteCustomer->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewDeleteCustomer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dataGridViewDeleteCustomer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewDeleteCustomer->Location = System::Drawing::Point(0, 0);
			this->dataGridViewDeleteCustomer->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridViewDeleteCustomer->Name = L"dataGridViewDeleteCustomer";
			this->dataGridViewDeleteCustomer->RowHeadersWidth = 51;
			this->dataGridViewDeleteCustomer->Size = System::Drawing::Size(711, 249);
			this->dataGridViewDeleteCustomer->TabIndex = 2;
			this->dataGridViewDeleteCustomer->AutoSizeColumnsModeChanged += gcnew System::Windows::Forms::DataGridViewAutoSizeColumnsModeEventHandler(this, &DeleteCustomer::dataGridViewDeleteCustomer_AutoSizeColumnsModeChanged);
			this->dataGridViewDeleteCustomer->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DeleteCustomer::dataGridViewDeleteCustomer_CellClick);
			this->dataGridViewDeleteCustomer->EditingControlShowing += gcnew System::Windows::Forms::DataGridViewEditingControlShowingEventHandler(this, &DeleteCustomer::dataGridViewDeleteCustomer_EditingControlShowing);
			// 
			// labelSearch
			// 
			this->labelSearch->AutoSize = true;
			this->labelSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSearch->Location = System::Drawing::Point(341, 36);
			this->labelSearch->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSearch->Name = L"labelSearch";
			this->labelSearch->Size = System::Drawing::Size(208, 24);
			this->labelSearch->TabIndex = 1;
			this->labelSearch->Text = L"Customer Information";
			// 
			// DeleteCustomer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->ClientSize = System::Drawing::Size(1009, 596);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"DeleteCustomer";
			this->Text = L"DeleteCustomer";
			this->Load += gcnew System::EventHandler(this, &DeleteCustomer::DeleteCustomer_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panelGridView->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDeleteCustomer))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int columnIndexWithDateTimePicker, rowIndexWithDateTimePicker;
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void HMSLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DeleteCustomer_Load(System::Object^ sender, System::EventArgs^ e) {

		dataGridViewDeleteCustomer->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;

		//populate data grid view
		try {
			connection->Open();
			SqlCommand^ command = gcnew SqlCommand("SELECT * from Customer", connection);
			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);
			DataTable^ dataTable = gcnew DataTable();


			dataAdapter->Fill(dataTable);
			dataTable->Columns["customerId"]->ColumnName = "Customer ID";
			dataTable->Columns["name"]->ColumnName = "Customer Name";
			dataTable->Columns["contact"]->ColumnName = "Contact";
			dataTable->Columns["cnic"]->ColumnName = "CNIC";

			dataGridViewDeleteCustomer->DataSource = dataTable;

			dataGridViewDeleteCustomer->Columns["Customer Name"]->ReadOnly = true;
			dataGridViewDeleteCustomer->Columns["Customer ID"]->ReadOnly = true;
			dataGridViewDeleteCustomer->Columns["Contact"]->ReadOnly = true;
			dataGridViewDeleteCustomer->Columns["CNIC"]->ReadOnly = true;
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

	private: System::Void dataGridViewDeleteCustomer_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}

	private: System::Void dataGridViewDeleteCustomer_AutoSizeColumnsModeChanged(System::Object^ sender, System::Windows::Forms::DataGridViewAutoSizeColumnsModeEventArgs^ e) {
	}

	private: System::Void dataGridViewDeleteCustomer_EditingControlShowing(System::Object^ sender, System::Windows::Forms::DataGridViewEditingControlShowingEventArgs^ e) {

	}
	private: System::Void btnDeleteRow_Click(System::Object^ sender, System::EventArgs^ e) {

		if (dataGridViewDeleteCustomer->SelectedRows->Count > 0) {

			System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to delete this customer from database?",
				"Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (result == System::Windows::Forms::DialogResult::Yes) {

				try {

					String^ customerId = dataGridViewDeleteCustomer->SelectedRows[0]->Cells["Customer ID"]->Value->ToString();

					connection->Open();
					SqlCommand^ command = gcnew SqlCommand();
					command->Connection = connection;
					command->CommandType = CommandType::StoredProcedure;
					command->CommandText = "DELETE_FROM_CUSTOMER";

					command->Parameters->AddWithValue("@customerid", customerId);

					command->ExecuteNonQuery();

					dataGridViewDeleteCustomer->Rows->Remove(dataGridViewDeleteCustomer->SelectedRows[0]);
					connection->Close();

					MessageBox::Show("Customer deleted successfully.");

				}
				catch (Exception^ e) {
					MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

		}
		else {
			MessageBox::Show("Please select a row to delete.");
		}
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
