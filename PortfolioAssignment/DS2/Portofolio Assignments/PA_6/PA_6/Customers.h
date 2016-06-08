#pragma once
#include"UpdateCust.h"
namespace PA_6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
		using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for Customers
	/// </summary>
	public ref class Customers : public System::Windows::Forms::Form
	{
	public:
		Customers(void)
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
		~Customers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  custList;
	protected: 
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::Button^  btnEdit;

	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;

	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  adp;
	private: System::Windows::Forms::Button^  btnInsert;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		UpdateCust^ updateC;

	private: System::Data::OleDb::OleDbConnection^  conn;
	private: System::Data::OleDb::OleDbCommand^  oleDbCommand1;
	private: System::Windows::Forms::Button^  btnRemove;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::ComponentModel::IContainer^  components;

			 /// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Customers::typeid));
			this->custList = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->conn = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->adp = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->btnInsert = (gcnew System::Windows::Forms::Button());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// custList
			// 
			this->custList->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->custList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4, this->columnHeader5});
			this->custList->FullRowSelect = true;
			this->custList->Location = System::Drawing::Point(0, 0);
			this->custList->Name = L"custList";
			this->custList->Size = System::Drawing::Size(572, 171);
			this->custList->TabIndex = 0;
			this->custList->UseCompatibleStateImageBehavior = false;
			this->custList->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Customer ID";
			this->columnHeader1->Width = 96;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Company Name";
			this->columnHeader2->Width = 114;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Contact Last Name";
			this->columnHeader3->Width = 130;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Postal Code";
			this->columnHeader4->Width = 120;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Phone Number";
			this->columnHeader5->Width = 121;
			// 
			// btnClose
			// 
			this->btnClose->ImageIndex = 2;
			this->btnClose->ImageList = this->imageList1;
			this->btnClose->Location = System::Drawing::Point(435, 187);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(137, 51);
			this->btnClose->TabIndex = 1;
			this->btnClose->Text = L" ";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Customers::btnClose_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"del.jpg");
			this->imageList1->Images->SetKeyName(1, L"Edit Male User.png");
			this->imageList1->Images->SetKeyName(2, L"qu.jpg");
			this->imageList1->Images->SetKeyName(3, L"user_add.png");
			// 
			// btnEdit
			// 
			this->btnEdit->ImageIndex = 1;
			this->btnEdit->ImageList = this->imageList1;
			this->btnEdit->Location = System::Drawing::Point(149, 187);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(137, 51);
			this->btnEdit->TabIndex = 2;
			this->btnEdit->Text = L" ";
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &Customers::btnEdit_Click);
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT        CustomerID AS Expr1, CompanyName AS Expr2, ContactName AS Expr3, [P" 
				L"ostal Code] AS Expr4, [Phone Number] AS Expr5, CUSTOMER.*\r\nFROM            CUSTO" 
				L"MER";
			// 
			// oleDbUpdateCommand1
			// 
			this->oleDbUpdateCommand1->CommandText = resources->GetString(L"oleDbUpdateCommand1.CommandText");
			this->oleDbUpdateCommand1->Connection = this->conn;
			this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(29) {(gcnew System::Data::OleDb::OleDbParameter(L"Expr1", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"Expr1")), (gcnew System::Data::OleDb::OleDbParameter(L"Expr2", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"Expr2")), (gcnew System::Data::OleDb::OleDbParameter(L"Expr3", System::Data::OleDb::OleDbType::VarWChar, 0, L"Expr3")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Expr4", System::Data::OleDb::OleDbType::VarWChar, 0, L"Expr4")), (gcnew System::Data::OleDb::OleDbParameter(L"Expr5", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"Expr5")), (gcnew System::Data::OleDb::OleDbParameter(L"CustomerID", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"CustomerID")), (gcnew System::Data::OleDb::OleDbParameter(L"CompanyName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"CompanyName")), (gcnew System::Data::OleDb::OleDbParameter(L"ContactName", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"ContactName")), (gcnew System::Data::OleDb::OleDbParameter(L"Postal_Code", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"Postal Code")), (gcnew System::Data::OleDb::OleDbParameter(L"Phone_Number", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"Phone Number")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr1", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Expr1", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr2", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Expr2", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr2", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Expr2", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr3", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Expr3", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr3", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Expr3", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr4", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Expr4", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr4", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Expr4", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr5", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Expr5", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr5", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Expr5", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CustomerID", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CustomerID", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CustomerID", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CustomerID", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CompanyName", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CompanyName", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CompanyName", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CompanyName", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ContactName", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ContactName", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ContactName", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ContactName", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Postal_Code", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Postal Code", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Postal_Code", System::Data::OleDb::OleDbType::VarWChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Postal Code", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Phone_Number", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Phone Number", 
				System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Phone_Number", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Phone Number", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// conn
			// 
			this->conn->ConnectionString = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=\"H:\\DOS\\Portofolio Assignments\\PA_6" 
				L"\\PA_6\\Assignment6.accdb\"";
			// 
			// oleDbDeleteCommand1
			// 
			this->oleDbDeleteCommand1->CommandText = resources->GetString(L"oleDbDeleteCommand1.CommandText");
			this->oleDbDeleteCommand1->Connection = this->conn;
			this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(19) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr1", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr1", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr2", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Expr2", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr2", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr2", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr3", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Expr3", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr3", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr3", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr4", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Expr4", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr4", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr4", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr5", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Expr5", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr5", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr5", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CustomerID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"CustomerID", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CustomerID", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"CustomerID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CompanyName", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"CompanyName", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CompanyName", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"CompanyName", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ContactName", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"ContactName", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ContactName", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ContactName", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Postal_Code", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Postal Code", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Postal_Code", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Postal Code", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Phone_Number", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Phone Number", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Phone_Number", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Phone Number", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// adp
			// 
			this->adp->DeleteCommand = this->oleDbDeleteCommand1;
			this->adp->InsertCommand = this->oleDbCommand1;
			this->adp->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(10) {(gcnew System::Data::Common::DataColumnMapping(L"Expr1", 
				L"Expr1")), (gcnew System::Data::Common::DataColumnMapping(L"Expr2", L"Expr2")), (gcnew System::Data::Common::DataColumnMapping(L"Expr3", 
				L"Expr3")), (gcnew System::Data::Common::DataColumnMapping(L"Expr4", L"Expr4")), (gcnew System::Data::Common::DataColumnMapping(L"Expr5", 
				L"Expr5")), (gcnew System::Data::Common::DataColumnMapping(L"CustomerID", L"CustomerID")), (gcnew System::Data::Common::DataColumnMapping(L"CompanyName", 
				L"CompanyName")), (gcnew System::Data::Common::DataColumnMapping(L"ContactName", L"ContactName")), (gcnew System::Data::Common::DataColumnMapping(L"Postal Code", 
				L"Postal Code")), (gcnew System::Data::Common::DataColumnMapping(L"Phone Number", L"Phone Number"))};
			this->adp->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"CUSTOMER", __mcTemp__1))});
			this->adp->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// oleDbCommand1
			// 
			this->oleDbCommand1->Connection = this->conn;
			// 
			// btnInsert
			// 
			this->btnInsert->ImageIndex = 3;
			this->btnInsert->ImageList = this->imageList1;
			this->btnInsert->Location = System::Drawing::Point(0, 187);
			this->btnInsert->Name = L"btnInsert";
			this->btnInsert->Size = System::Drawing::Size(137, 51);
			this->btnInsert->TabIndex = 3;
			this->btnInsert->Text = L" ";
			this->btnInsert->UseVisualStyleBackColor = true;
			this->btnInsert->Click += gcnew System::EventHandler(this, &Customers::btnInsert_Click);
			// 
			// btnRemove
			// 
			this->btnRemove->ImageIndex = 0;
			this->btnRemove->ImageList = this->imageList1;
			this->btnRemove->Location = System::Drawing::Point(292, 187);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(137, 51);
			this->btnRemove->TabIndex = 4;
			this->btnRemove->Text = L" ";
			this->btnRemove->UseVisualStyleBackColor = true;
			this->btnRemove->Click += gcnew System::EventHandler(this, &Customers::btnRemove_Click);
			// 
			// Customers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(584, 250);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->btnInsert);
			this->Controls->Add(this->btnEdit);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->custList);
			this->Name = L"Customers";
			this->Text = L"Customers";
			this->Load += gcnew System::EventHandler(this, &Customers::Customers_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
			Windows::Forms::DialogResult option;
			 option=MessageBox::Show("Are you sure you want to exit","Closing...",MessageBoxButtons::YesNo,MessageBoxIcon::Exclamation);
			 if(option==Windows::Forms::DialogResult::Yes)
			 {
				 Close();
			 }
			 }
private: System::Void btnEdit_Click(System::Object^  sender, System::EventArgs^  e) {
			  updateC= gcnew UpdateCust();		 
			  
					try{
							updateC->editValues(custList->SelectedItems[0]->SubItems[0]->Text,custList->SelectedItems[0]->SubItems[1]->Text,custList->SelectedItems[0]->SubItems[2]->Text,
							custList->SelectedItems[0]->SubItems[3]->Text,custList->SelectedItems[0]->SubItems[4]->Text);
							updateC->ShowDialog(); 
							
								if(updateC->getCancel()!="c")
								{
									 if(updateC->getCustId()->Length==4)
												{
													if(updateC->getPostalCode()->Length==4)
														{
															if( updateC->getPhoneNumber()->Length==10)
																	{
																		if(updateC->getCompName()!="" && updateC->getContactName()!="")
																				{
																					try{
																							conn->Open();
																							adp->UpdateCommand->CommandText="Update CUSTOMER Set[CustomerID]='"+updateC->getCustId()+"',[CompanyName]='"+updateC->getCompName()+"',[ContactName]='"+updateC->getContactName()+"',[Postal Code]='"+updateC->getPostalCode()+"',[Phone Number]='"+updateC->getPhoneNumber()+"'Where [CustomerID]='"+custList->SelectedItems[0]->SubItems[0]->Text+"'";
																							adp->UpdateCommand->ExecuteNonQuery();
																							custList->SelectedItems[0]->SubItems[0]->Text=updateC->getCustId();
																							custList->SelectedItems[0]->SubItems[1]->Text=updateC->getCompName();
																							custList->SelectedItems[0]->SubItems[2]->Text=updateC->getContactName(),
																							custList->SelectedItems[0]->SubItems[3]->Text=updateC->getPostalCode();
																							custList->SelectedItems[0]->SubItems[4]->Text=updateC->getPhoneNumber();
																							conn->Close();
																							MessageBox::Show("A record has been edited");
																							}
																							catch(OleDbException^ e)
																									{
																										MessageBox::Show("Property you entered already exist");
																									} 
																				 }
																				else
																					{
																						MessageBox::Show("Could not save one of the fields were empty");
																					}
																	}
																	else
																		{
																			MessageBox::Show("Could not save phone number  must be 10 numbers");
																		}
														}
														else
															{
																MessageBox::Show("Could not save postal code must be 4 charaters");
															}
											}
											else
												{
													MessageBox::Show("Could not save Customer ID must be 4 charaters");
												}	
								}
					}
					catch(...)
					{
						MessageBox::Show("Please select a record to proceed","Updating",MessageBoxButtons::OK,MessageBoxIcon::Warning);
					}
					custList->SelectedItems->Clear();
			  
		 }
private: System::Void Customers_Load(System::Object^  sender, System::EventArgs^  e) {
			 conn->Open();
			String^ sql="Select * From CUSTOMER";
			OleDbCommand^ cmd = gcnew OleDbCommand(sql,conn);
			OleDbDataReader^ dr = cmd->ExecuteReader();
			 while (dr->Read())
			 {
				ListViewItem^ myList = gcnew ListViewItem(dr["CustomerID"]->ToString());
				myList->SubItems->Add(dr["CompanyName"]->ToString());
				myList->SubItems->Add(dr["ContactName"]->ToString());
				myList->SubItems->Add(dr["Postal Code"]->ToString());
				myList->SubItems->Add(dr["Phone Number"]->ToString());
				custList->Items->Add(myList);
			 }
			 conn->Close();
		 }
private: System::Void btnInsert_Click(System::Object^  sender, System::EventArgs^  e) {
		
			 updateC=gcnew UpdateCust();
			 updateC->ShowDialog();
			 conn->Open();
			 if(updateC->getCancel()!="c")
			 {
				if(updateC->getCustId()->Length==4)
				{
					if(updateC->getPostalCode()->Length==4)
					{
						if( updateC->getPhoneNumber()->Length==10)
						{
							if(updateC->getCompName()!="" && updateC->getContactName()!="")
							{
						
								try{
										adp->InsertCommand->CommandText="Insert Into CUSTOMER([CustomerID],[CompanyName],[ContactName],[Postal Code],[Phone Number])Values('"+updateC->getCustId()+"','"+updateC->getCompName()+"','"+updateC->getContactName()+"','"+updateC->getPostalCode()+"','"+updateC->getPhoneNumber()+"')";
										adp->InsertCommand->ExecuteNonQuery();
										ListViewItem^ myList = gcnew ListViewItem(updateC->getCustId());
										myList->SubItems->Add(updateC->getCompName());
										myList->SubItems->Add(updateC->getContactName());
										myList->SubItems->Add(updateC->getPostalCode());
										myList->SubItems->Add(updateC->getPhoneNumber());						 
										custList->Items->Add(myList);
										MessageBox::Show("A record has been successfully added");
									}
							
								catch(OleDbException^ e)
									{
										MessageBox::Show("Property you entered already exist");
									} 
							}
							else
							{
								MessageBox::Show("Could not save one of the fields were empty");
							}
						}
						else
						{
							MessageBox::Show("Could not save phone number  must be 10 numbers");
						}
					}
					else
					{
						MessageBox::Show("Could not save postal code must be 4 charaters");
					}
				}
				else
				{
					MessageBox::Show("Could not save Customer ID must be 4 charaters");
				}
						
			 }
			 else
			 {}
			 conn->Close();
			 custList->SelectedItems->Clear();

		 }
private: System::Void btnRemove_Click(System::Object^  sender, System::EventArgs^  e) {
			conn->Open();
			 try{
					custList->SelectedItems[0]->Text;
					Windows::Forms::DialogResult option;
					option=MessageBox::Show("You are about to delete a record\n Are you sure you want to delete?","Delete",MessageBoxButtons::YesNo,MessageBoxIcon::Exclamation);
					
					if (option==Windows::Forms::DialogResult::Yes)
					{
					
					adp->DeleteCommand->CommandText="Delete From CUSTOMER Where [CustomerID]='"+custList->SelectedItems[0]->SubItems[0]->Text+"'";
					adp->DeleteCommand->ExecuteNonQuery();
					custList->SelectedItems[0]->Remove();
					option=MessageBox::Show("A record has been deleted");
					}
			 }
			 catch(...)
			 {
				MessageBox::Show("Please select a record to proceed","Deleting...",MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 	conn->Close();
				custList->SelectedItems->Clear();
		 }
};
}
