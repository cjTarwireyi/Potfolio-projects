#pragma once
#include"AddProperty.h"
namespace PA5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace:: System::Data::OleDb;
	 



	/// <summary>
	/// Summary for PA_5
	/// </summary>
	public ref class PA_5 : public System::Windows::Forms::Form
	{
	public:
		PA_5(void)
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
		~PA_5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnEdit;
	private: System::Windows::Forms::Button^  btnDelete;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbConnection^  conn;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  adp;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		String^ imgRef;
		static int idx=-1;
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PA_5::typeid));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->conn = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->adp = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8});
			this->listView1->FullRowSelect = true;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(552, 189);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &PA_5::listView1_SelectedIndexChanged);
			this->listView1->Click += gcnew System::EventHandler(this, &PA_5::listView1_Click);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Property Number";
			this->columnHeader1->Width = 94;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Surbub";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Price";
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Bedrooms";
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Bathroom";
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Garage";
			this->columnHeader6->Width = 68;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Erf Size(m2)";
			this->columnHeader7->Width = 66;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"ImageRef";
			// 
			// btnAdd
			// 
			this->btnAdd->ImageKey = L"add.jpg";
			this->btnAdd->ImageList = this->imageList1;
			this->btnAdd->Location = System::Drawing::Point(22, 206);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(104, 44);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &PA_5::btnAdd_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"add.jpg");
			this->imageList1->Images->SetKeyName(1, L"canc.jpg");
			this->imageList1->Images->SetKeyName(2, L"del.jpg");
			this->imageList1->Images->SetKeyName(3, L"edit.jpg");
			this->imageList1->Images->SetKeyName(4, L"save.jpg");
			this->imageList1->Images->SetKeyName(5, L"exit.jpg");
			// 
			// btnEdit
			// 
			this->btnEdit->ImageKey = L"edit.jpg";
			this->btnEdit->ImageList = this->imageList1;
			this->btnEdit->Location = System::Drawing::Point(151, 206);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(109, 44);
			this->btnEdit->TabIndex = 2;
			this->btnEdit->Text = L"Edit";
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &PA_5::btnEdit_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->ImageKey = L"del.jpg";
			this->btnDelete->ImageList = this->imageList1;
			this->btnDelete->Location = System::Drawing::Point(278, 206);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(114, 44);
			this->btnDelete->TabIndex = 3;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &PA_5::btnDelete_Click);
			// 
			// btnExit
			// 
			this->btnExit->ImageKey = L"exit.jpg";
			this->btnExit->ImageList = this->imageList1;
			this->btnExit->Location = System::Drawing::Point(438, 206);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(114, 44);
			this->btnExit->TabIndex = 4;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &PA_5::btnExit_Click);
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = resources->GetString(L"oleDbSelectCommand1.CommandText");
			this->oleDbSelectCommand1->Connection = this->conn;
			// 
			// conn
			// 
			this->conn->ConnectionString = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=\"H:\\DOS\\Portofolio Assignments\\PA5\\" 
				L"PA5\\PA5\\HouseRental.accdb\"";
			// 
			// oleDbInsertCommand1
			// 
			this->oleDbInsertCommand1->CommandText = resources->GetString(L"oleDbInsertCommand1.CommandText");
			this->oleDbInsertCommand1->Connection = this->conn;
			this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(16) {(gcnew System::Data::OleDb::OleDbParameter(L"Expr1", 
				System::Data::OleDb::OleDbType::Integer, 0, L"Expr1")), (gcnew System::Data::OleDb::OleDbParameter(L"Expr2", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"Expr2")), (gcnew System::Data::OleDb::OleDbParameter(L"Expr3", System::Data::OleDb::OleDbType::Currency, 0, L"Expr3")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Expr4", System::Data::OleDb::OleDbType::Integer, 0, L"Expr4")), (gcnew System::Data::OleDb::OleDbParameter(L"Expr5", 
				System::Data::OleDb::OleDbType::Integer, 0, L"Expr5")), (gcnew System::Data::OleDb::OleDbParameter(L"Expr6", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"Expr6")), (gcnew System::Data::OleDb::OleDbParameter(L"Expr7", System::Data::OleDb::OleDbType::Integer, 0, L"Expr7")), (gcnew System::Data::OleDb::OleDbParameter(L"Expr8", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"Expr8")), (gcnew System::Data::OleDb::OleDbParameter(L"propertyNumber", System::Data::OleDb::OleDbType::Integer, 
				0, L"propertyNumber")), (gcnew System::Data::OleDb::OleDbParameter(L"surbub", System::Data::OleDb::OleDbType::VarWChar, 0, 
				L"surbub")), (gcnew System::Data::OleDb::OleDbParameter(L"Price", System::Data::OleDb::OleDbType::Currency, 0, L"Price")), (gcnew System::Data::OleDb::OleDbParameter(L"bedRooms", 
				System::Data::OleDb::OleDbType::Integer, 0, L"bedRooms")), (gcnew System::Data::OleDb::OleDbParameter(L"bathRooms", System::Data::OleDb::OleDbType::Integer, 
				0, L"bathRooms")), (gcnew System::Data::OleDb::OleDbParameter(L"garage", System::Data::OleDb::OleDbType::VarWChar, 0, L"garage")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"erfSize", System::Data::OleDb::OleDbType::Integer, 0, L"erfSize")), (gcnew System::Data::OleDb::OleDbParameter(L"imageRef", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"imageRef"))});
			// 
			// oleDbUpdateCommand1
			// 
			this->oleDbUpdateCommand1->CommandText = resources->GetString(L"oleDbUpdateCommand1.CommandText");
			this->oleDbUpdateCommand1->Connection = this->conn;
			this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(47) {(gcnew System::Data::OleDb::OleDbParameter(L"Expr1", 
				System::Data::OleDb::OleDbType::Integer, 0, L"Expr1")), (gcnew System::Data::OleDb::OleDbParameter(L"Expr2", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"Expr2")), (gcnew System::Data::OleDb::OleDbParameter(L"Expr3", System::Data::OleDb::OleDbType::Currency, 0, L"Expr3")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Expr4", System::Data::OleDb::OleDbType::Integer, 0, L"Expr4")), (gcnew System::Data::OleDb::OleDbParameter(L"Expr5", 
				System::Data::OleDb::OleDbType::Integer, 0, L"Expr5")), (gcnew System::Data::OleDb::OleDbParameter(L"Expr6", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"Expr6")), (gcnew System::Data::OleDb::OleDbParameter(L"Expr7", System::Data::OleDb::OleDbType::Integer, 0, L"Expr7")), (gcnew System::Data::OleDb::OleDbParameter(L"Expr8", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"Expr8")), (gcnew System::Data::OleDb::OleDbParameter(L"propertyNumber", System::Data::OleDb::OleDbType::Integer, 
				0, L"propertyNumber")), (gcnew System::Data::OleDb::OleDbParameter(L"surbub", System::Data::OleDb::OleDbType::VarWChar, 0, 
				L"surbub")), (gcnew System::Data::OleDb::OleDbParameter(L"Price", System::Data::OleDb::OleDbType::Currency, 0, L"Price")), (gcnew System::Data::OleDb::OleDbParameter(L"bedRooms", 
				System::Data::OleDb::OleDbType::Integer, 0, L"bedRooms")), (gcnew System::Data::OleDb::OleDbParameter(L"bathRooms", System::Data::OleDb::OleDbType::Integer, 
				0, L"bathRooms")), (gcnew System::Data::OleDb::OleDbParameter(L"garage", System::Data::OleDb::OleDbType::VarWChar, 0, L"garage")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"erfSize", System::Data::OleDb::OleDbType::Integer, 0, L"erfSize")), (gcnew System::Data::OleDb::OleDbParameter(L"imageRef", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"imageRef")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr1", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr1", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr2", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Expr2", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr2", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr2", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr3", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Expr3", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr3", 
				System::Data::OleDb::OleDbType::Currency, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr3", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr4", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Expr4", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr4", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr4", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr5", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Expr5", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr5", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr5", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr6", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Expr6", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr6", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr6", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr7", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Expr7", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr7", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr7", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr8", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Expr8", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr8", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr8", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_propertyNumber", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"propertyNumber", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_propertyNumber", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"propertyNumber", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_surbub", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"surbub", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_surbub", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"surbub", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Price", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Price", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Price", 
				System::Data::OleDb::OleDbType::Currency, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Price", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_bedRooms", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"bedRooms", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_bedRooms", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"bedRooms", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_bathRooms", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"bathRooms", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_bathRooms", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"bathRooms", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_garage", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"garage", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_garage", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"garage", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_erfSize", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"erfSize", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_erfSize", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"erfSize", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_imageRef", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"imageRef", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_imageRef", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"imageRef", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand1
			// 
			this->oleDbDeleteCommand1->CommandText = resources->GetString(L"oleDbDeleteCommand1.CommandText");
			this->oleDbDeleteCommand1->Connection = this->conn;
			this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(31) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr1", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr1", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr2", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Expr2", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr2", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr2", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr3", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Expr3", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr3", 
				System::Data::OleDb::OleDbType::Currency, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr3", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr4", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Expr4", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr4", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr4", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr5", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Expr5", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr5", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr5", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr6", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Expr6", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr6", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr6", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr7", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Expr7", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr7", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr7", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Expr8", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Expr8", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Expr8", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Expr8", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_propertyNumber", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"propertyNumber", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_propertyNumber", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"propertyNumber", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_surbub", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"surbub", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_surbub", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"surbub", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Price", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Price", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Price", 
				System::Data::OleDb::OleDbType::Currency, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Price", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_bedRooms", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"bedRooms", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_bedRooms", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"bedRooms", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_bathRooms", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"bathRooms", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_bathRooms", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"bathRooms", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_garage", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"garage", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_garage", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"garage", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_erfSize", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"erfSize", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_erfSize", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"erfSize", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_imageRef", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"imageRef", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_imageRef", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"imageRef", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// adp
			// 
			this->adp->DeleteCommand = this->oleDbDeleteCommand1;
			this->adp->InsertCommand = this->oleDbInsertCommand1;
			this->adp->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(16) {(gcnew System::Data::Common::DataColumnMapping(L"Expr1", 
				L"Expr1")), (gcnew System::Data::Common::DataColumnMapping(L"Expr2", L"Expr2")), (gcnew System::Data::Common::DataColumnMapping(L"Expr3", 
				L"Expr3")), (gcnew System::Data::Common::DataColumnMapping(L"Expr4", L"Expr4")), (gcnew System::Data::Common::DataColumnMapping(L"Expr5", 
				L"Expr5")), (gcnew System::Data::Common::DataColumnMapping(L"Expr6", L"Expr6")), (gcnew System::Data::Common::DataColumnMapping(L"Expr7", 
				L"Expr7")), (gcnew System::Data::Common::DataColumnMapping(L"Expr8", L"Expr8")), (gcnew System::Data::Common::DataColumnMapping(L"propertyNumber", 
				L"propertyNumber")), (gcnew System::Data::Common::DataColumnMapping(L"surbub", L"surbub")), (gcnew System::Data::Common::DataColumnMapping(L"Price", 
				L"Price")), (gcnew System::Data::Common::DataColumnMapping(L"bedRooms", L"bedRooms")), (gcnew System::Data::Common::DataColumnMapping(L"bathRooms", 
				L"bathRooms")), (gcnew System::Data::Common::DataColumnMapping(L"garage", L"garage")), (gcnew System::Data::Common::DataColumnMapping(L"erfSize", 
				L"erfSize")), (gcnew System::Data::Common::DataColumnMapping(L"imageRef", L"imageRef"))};
			this->adp->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"RentalList", __mcTemp__1))});
			this->adp->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(550, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(179, 189);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// PA_5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			this->ClientSize = System::Drawing::Size(730, 262);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnEdit);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->listView1);
			this->Name = L"PA_5";
			this->Text = L"PA_5";
			this->Load += gcnew System::EventHandler(this, &PA_5::PA_5_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void oleDbDataAdapter1_RowUpdated(System::Object^  sender, System::Data::OleDb::OleDbRowUpdatedEventArgs^  e) {
			 }
private: System::Void oleDbDataAdapter2_RowUpdated(System::Object^  sender, System::Data::OleDb::OleDbRowUpdatedEventArgs^  e) {
		 }
private: System::Void PA_5_Load(System::Object^  sender, System::EventArgs^  e) {
		
		String ^propNumber;	 
		 
		conn->Open();
		String ^sql="Select * From RentalList";
		OleDbCommand^ cmd = gcnew OleDbCommand(sql,conn);
		OleDbDataReader^ dr = cmd->ExecuteReader();
		while (dr->Read())
		{
			propNumber=dr["propertyNumber"]->ToString();
			ListViewItem ^L1= gcnew ListViewItem(dr["propertyNumber"]->ToString());
			L1->SubItems->Add(dr["surbub"]->ToString());
			L1->SubItems->Add(dr["Price"]->ToString());
			L1->SubItems->Add(dr["bedRooms"]->ToString());
			L1->SubItems->Add(dr["bathRooms"]->ToString());
			L1->SubItems->Add(dr["garage"]->ToString());
			L1->SubItems->Add(dr["erfSize"]->ToString());
			L1->SubItems->Add(dr["imageRef"]->ToString());			 
			listView1->Items->Add(L1);			 
		}
		 conn->Close();
		 }
private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
				float price;
				AddProperty ^ap = gcnew AddProperty();
				ap->ShowDialog();
				conn->Open();
			  if (ap->getCancel()!="c")
				{
					if(ap->getpropNumber()->Length==4)
					{
						if(	ap->getpropNumber()!="" && ap->getSurbub()!="" && ap->getPrice()!="" && ap->getBed()!="" && ap->getBath()!="" && ap->getGarage()!="" && ap->getErfSize()!="" && ap->getImage()!="")
						{
							try{
									 Convert::ToDouble(ap->getPrice());
									 Convert::ToInt32(ap->getBed());
									 Convert::ToInt32(ap->getBath());
									 Convert::ToInt32(ap->getErfSize());

									adp->InsertCommand->CommandText="INSERT INTO RentalList([propertyNumber],[surbub],[Price],[bedRooms],[bathRooms],[garage],[erfSize],[imageRef])Values('"+ap->getpropNumber()+"','"+ap->getSurbub()+"','"+ap->getPrice()+"','"+ap->getBed()+"','"+ap->getBath()+"','"+ap->getGarage()+"','"+ap->getErfSize()+"','"+ap->getImage()+"' )";
									adp->InsertCommand->ExecuteNonQuery();		
			
									ListViewItem ^L1= gcnew ListViewItem(ap->getpropNumber());
									L1->SubItems->Add(ap->getSurbub());
									L1->SubItems->Add(ap->getPrice());
									L1->SubItems->Add(ap->getBed());
									L1->SubItems->Add(ap->getBath());
									L1->SubItems->Add(ap->getGarage());
									L1->SubItems->Add(ap->getErfSize());
									L1->SubItems->Add(ap->getImage());
									listView1->Items->Add(L1);
									
							}
							catch(FormatException^ e)
								{			
 									MessageBox::Show("Makes sure all data is in correct format");
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
						MessageBox::Show("Could not save Property number must be 4 charaters");
					}
				}
			  conn->Close();
			  listView1->SelectedItems->Clear();
			}
private: System::Void btnEdit_Click(System::Object^  sender, System::EventArgs^  e) {
				
				AddProperty ^ap = gcnew AddProperty();
			    String^ n= gcnew String("dd");
				//displaying values on the edit form	
				conn->Open();
				try{					
						ap->setValues(listView1->SelectedItems[0]->SubItems[0]->Text,listView1->SelectedItems[0]->SubItems[1]->Text, listView1->SelectedItems[0]->SubItems[2]->Text,listView1->SelectedItems[0]->SubItems[3]->Text,listView1->SelectedItems[0]->SubItems[4]->Text,listView1->SelectedItems[0]->SubItems[5]->Text,listView1->SelectedItems[0]->SubItems[6]->Text,listView1->SelectedItems[0]->SubItems[7]->Text);
						ap->ShowDialog();
						if (ap->getCancel()!="c")
						{
							if(ap->getpropNumber()->Length==4)
							{
								if(	ap->getpropNumber()!="" && ap->getSurbub()!="" && ap->getPrice()!="" && ap->getBed()!="" && ap->getBath()!="" && ap->getGarage()!="" && ap->getErfSize()!="" && ap->getImage()!="")
								{
									try{
											
											Convert::ToDouble(ap->getPrice());
											Convert::ToInt32(ap->getBed());
											Convert::ToInt32(ap->getBath());
											Convert::ToInt32(ap->getErfSize());
											//updating database
											adp->UpdateCommand->CommandText="Update RentalList Set propertyNumber='"+ap->getpropNumber( )+"', surbub='"+ap->getSurbub()+"',Price='"+ap->getPrice()+"',bedRooms='"+ap->getBed()+"',bathRooms='"+ap->getBath()+"',garage='"+ap->getGarage()+"',erfSize='"+ap->getErfSize()+"',imageRef='"+ap->getImage()+"'WHERE [propertyNumber]='"+listView1->SelectedItems[0]->SubItems[0]->Text+"'";
											adp->UpdateCommand->ExecuteNonQuery();
					  
											//getting edited values to the list view
											listView1->SelectedItems[0]->SubItems[0]->Text=ap->getpropNumber();
											listView1->SelectedItems[0]->SubItems[1]->Text=ap->getSurbub();
											listView1->SelectedItems[0]->SubItems[2]->Text=ap->getPrice();
											listView1->SelectedItems[0]->SubItems[3]->Text=ap->getBed();
											listView1->SelectedItems[0]->SubItems[4]->Text=ap->getBath();
											listView1->SelectedItems[0]->SubItems[5]->Text=ap->getGarage();
											listView1->SelectedItems[0]->SubItems[6]->Text=ap->getErfSize();
											listView1->SelectedItems[0]->SubItems[7]->Text=ap->getImage();
									}
									catch(...)
										{
					 						MessageBox::Show("Makes sure all data is in correct format","Updating...",MessageBoxButtons::OK,MessageBoxIcon::Information);					 
										}	 
										
								}
								else
									{
										MessageBox::Show("Could not save one of the fields were empty");
									}
						}
						else
							{
								MessageBox::Show("Could not save Property number must be 4 charaters");
							}
						}
					}
				catch(ArgumentOutOfRangeException^)
				{
					MessageBox::Show("Please select a record to proceed","Editing...",MessageBoxButtons::OK,MessageBoxIcon::Information);
				}
				conn->Close();
				listView1->SelectedItems->Clear();
		 }
private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Windows::Forms::DialogResult option;
			 option=MessageBox::Show("Are you sure you want to exit","Closing...",MessageBoxButtons::YesNo,MessageBoxIcon::Exclamation);
			 if(option==Windows::Forms::DialogResult::Yes)
			 {
				Close();
			 }
		 }
private: System::Void btnDelete_Click(System::Object^  sender, System::EventArgs^  e) {
			 conn->Open();
			 AddProperty ^ap =gcnew AddProperty();			  
			 int propertyNum;
			 try{			 
				
					listView1->SelectedItems[0]->Text;
					Windows::Forms::DialogResult option;
					option=MessageBox::Show("You are about to delete a record\n Are you sure you want to delete?","Delete",MessageBoxButtons::YesNo,MessageBoxIcon::Exclamation);
					
					if (option==Windows::Forms::DialogResult::Yes)
					{
						adp->DeleteCommand->CommandText="DELETE FROM RentalList WHERE [propertyNumber]='"+listView1->SelectedItems[0]->Text+"'";
						adp->DeleteCommand->ExecuteNonQuery();
						listView1->SelectedItems[0]->Remove();
					}
					
				}
				catch(ArgumentOutOfRangeException^)
				{
					MessageBox::Show("You must select an item to delete");	
				}
			 conn->Close();
			 listView1->SelectedItems->Clear();
		 }
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			
			 try{
					if(listView1->SelectedItems->Count>0)
					{
						imgRef=listView1->SelectedItems[0]->SubItems[7]->Text;				 
						pictureBox1->Image=Image::FromFile(imgRef);
						//listView1->SelectedItems->Clear();
					}
				}
			 catch(...)
			 {
				MessageBox::Show("Image does not exist");
			 }

				 
		 }
private: System::Void listView1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
