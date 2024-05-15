#pragma once

namespace HotelManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for ApproveRequests
	/// </summary>
	public ref class ApproveRequests : public System::Windows::Forms::Form
	{
	public:
		ApproveRequests(void)
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
		~ApproveRequests()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvEmp;
	protected:

	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ HMSLabel;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Approve;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Reject;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lbNavigation;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ApproveRequests::typeid));
			this->dgvEmp = (gcnew System::Windows::Forms::DataGridView());
			this->Approve = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Reject = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->HMSLabel = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEmp))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvEmp
			// 
			this->dgvEmp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvEmp->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEmp->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Approve, this->Reject });
			this->dgvEmp->Location = System::Drawing::Point(12, 120);
			this->dgvEmp->Name = L"dgvEmp";
			this->dgvEmp->RowHeadersWidth = 51;
			this->dgvEmp->RowTemplate->Height = 24;
			this->dgvEmp->Size = System::Drawing::Size(999, 380);
			this->dgvEmp->TabIndex = 0;
			this->dgvEmp->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ApproveRequests::dgvEmp_CellContentClick);
			// 
			// Approve
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Approve->DefaultCellStyle = dataGridViewCellStyle1;
			this->Approve->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Approve->HeaderText = L"Approve";
			this->Approve->MinimumWidth = 6;
			this->Approve->Name = L"Approve";
			this->Approve->Text = L"Approve";
			this->Approve->ToolTipText = L"Approve";
			this->Approve->Width = 125;
			// 
			// Reject
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Reject->DefaultCellStyle = dataGridViewCellStyle2;
			this->Reject->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Reject->HeaderText = L"Reject";
			this->Reject->MinimumWidth = 6;
			this->Reject->Name = L"Reject";
			this->Reject->Text = L"Reject";
			this->Reject->ToolTipText = L"Reject";
			this->Reject->Width = 125;
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
			this->panel1->Size = System::Drawing::Size(1023, 58);
			this->panel1->TabIndex = 5;
			// 
			// lbNavigation
			// 
			this->lbNavigation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(758, 17);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(252, 32);
			this->lbNavigation->TabIndex = 14;
			this->lbNavigation->Text = L"Approve Requests";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->button1->Location = System::Drawing::Point(12, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 50);
			this->button1->TabIndex = 10;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ApproveRequests::button1_Click);
			// 
			// ApproveRequests
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->ClientSize = System::Drawing::Size(1023, 512);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dgvEmp);
			this->Name = L"ApproveRequests";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ApproveRequests";
			this->Load += gcnew System::EventHandler(this, &ApproveRequests::ApproveRequests_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEmp))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: void populateDataGridView() {
			SqlConnection^ sqlConn = gcnew SqlConnection();
			sqlConn->ConnectionString = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";
			sqlConn->Open();

			
			SqlCommand^ cmd = sqlConn->CreateCommand();
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "SELECT [employeeId],[fname] as 'First Name',[lname] as 'Last Name',cnic as 'CNIC',phoneNum,password FROM Recep";
			cmd->ExecuteNonQuery();
			DataTable^ dt = gcnew DataTable();
			SqlDataAdapter^ da = gcnew SqlDataAdapter(cmd);
			da->Fill(dt);
			dgvEmp->DataSource = dt;

			return;
		}
	private: System::Void ApproveRequests_Load(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ sqlConn = gcnew SqlConnection();
		sqlConn->ConnectionString = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";
		sqlConn->Open();
		populateDataGridView();
	}

	private: System::Void dgvEmp_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try {
			String^ connString = "Data Source=localhost\\sqlexpress01;Initial Catalog=HotelManagementSystem;Integrated Security=True;";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			if (e->ColumnIndex >= 0 && dgvEmp->Columns[e->ColumnIndex]->Name == "Approve")
			{
				// Determine the row index of the clicked cell
				int rowIndex = e->RowIndex;
				int employeeId = safe_cast<int>(dgvEmp->Rows[rowIndex]->Cells["employeeId"]->Value);
				String^ fname = safe_cast<String^>(dgvEmp->Rows[rowIndex]->Cells["First Name"]->Value);
				String^ lname = safe_cast<String^>(dgvEmp->Rows[rowIndex]->Cells["Last Name"]->Value);
				String^ cnic = safe_cast<String^>(dgvEmp->Rows[rowIndex]->Cells["CNIC"]->Value);
				String^ phoneNum = safe_cast<String^>(dgvEmp->Rows[rowIndex]->Cells["phoneNum"]->Value);
				String^ password = safe_cast<String^>(dgvEmp->Rows[rowIndex]->Cells["password"]->Value);

				String^ sqlQuery = "INSERT INTO employees" + "(employeeid, fname, lname, cnic, phoneNum, password,employeeType) VALUES" + "(@employeeid, @fname, @lname, @cnic, @phoneNum, @password,@employeeType); ";

				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@employeeid", employeeId);
				command.Parameters->AddWithValue("@fname", fname); 
				command.Parameters->AddWithValue("@lname", lname);
				command.Parameters->AddWithValue("@cnic", cnic); 
				command.Parameters->AddWithValue("@phoneNum", phoneNum); 
				command.Parameters->AddWithValue("@password", password);
				command.Parameters->AddWithValue("@employeeType", "Receptionist");
				command.ExecuteNonQuery();

				String^ sqlQuery2 = "Delete from Recep where employeeId=" + "@employeeId";
				SqlCommand command2(sqlQuery2, % sqlConn);
				command2.Parameters->AddWithValue("@employeeid", employeeId);
				command2.ExecuteNonQuery();

			}
			else if (e->ColumnIndex >= 0 && dgvEmp->Columns[e->ColumnIndex]->Name == "Reject")
			{
				// Determine the row index of the clicked cell
				int rowIndex = e->RowIndex;
				int employeeId = safe_cast<int>(dgvEmp->Rows[rowIndex]->Cells["employeeId"]->Value);

				String^ sqlQuery2 = "Delete from Recep where employeeId=" + "@employeeId";
				SqlCommand command(sqlQuery2, % sqlConn);
				command.Parameters->AddWithValue("@employeeid", employeeId);
				command.ExecuteNonQuery();
			}
			/*dgvEmp->Rows->Clear();*/
			populateDataGridView();
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to Take Action:"+ e->ToString(), "Error", MessageBoxButtons::OK);
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
