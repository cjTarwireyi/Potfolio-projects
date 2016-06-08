#pragma once
#include"Customers.h"
#include"Reservations.h"
#include"Event_Form.h"

namespace PA_6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Button^  btnEvents;
	private: System::Windows::Forms::Button^  btnCust;
	private: System::Windows::Forms::Button^  btnResevations;
	private: System::Windows::Forms::Button^  btnQuit;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  adp;
	private: System::Data::OleDb::OleDbConnection^  conn;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::ComponentModel::IContainer^  components;

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnEvents = (gcnew System::Windows::Forms::Button());
			this->btnCust = (gcnew System::Windows::Forms::Button());
			this->btnResevations = (gcnew System::Windows::Forms::Button());
			this->btnQuit = (gcnew System::Windows::Forms::Button());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->adp = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->conn = (gcnew System::Data::OleDb::OleDbConnection());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(229, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"START";
			// 
			// btnEvents
			// 
			this->btnEvents->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnEvents->ImageIndex = 1;
			this->btnEvents->Location = System::Drawing::Point(12, 163);
			this->btnEvents->Name = L"btnEvents";
			this->btnEvents->Size = System::Drawing::Size(217, 87);
			this->btnEvents->TabIndex = 1;
			this->btnEvents->Text = L"Events";
			this->btnEvents->UseVisualStyleBackColor = true;
			this->btnEvents->Click += gcnew System::EventHandler(this, &Form1::btnEvents_Click);
			// 
			// btnCust
			// 
			this->btnCust->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnCust->ImageIndex = 0;
			this->btnCust->Location = System::Drawing::Point(12, 54);
			this->btnCust->Name = L"btnCust";
			this->btnCust->Size = System::Drawing::Size(217, 87);
			this->btnCust->TabIndex = 2;
			this->btnCust->Text = L"Customers";
			this->btnCust->UseVisualStyleBackColor = true;
			this->btnCust->Click += gcnew System::EventHandler(this, &Form1::btnCust_Click);
			// 
			// btnResevations
			// 
			this->btnResevations->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnResevations->ImageIndex = 3;
			this->btnResevations->Location = System::Drawing::Point(268, 54);
			this->btnResevations->Name = L"btnResevations";
			this->btnResevations->Size = System::Drawing::Size(200, 87);
			this->btnResevations->TabIndex = 3;
			this->btnResevations->Text = L"Reservations";
			this->btnResevations->UseVisualStyleBackColor = true;
			this->btnResevations->Click += gcnew System::EventHandler(this, &Form1::btnResevations_Click);
			// 
			// btnQuit
			// 
			this->btnQuit->ImageIndex = 2;
			this->btnQuit->ImageList = this->imageList1;
			this->btnQuit->Location = System::Drawing::Point(268, 163);
			this->btnQuit->Name = L"btnQuit";
			this->btnQuit->Size = System::Drawing::Size(200, 80);
			this->btnQuit->TabIndex = 4;
			this->btnQuit->Text = L" ";
			this->btnQuit->UseVisualStyleBackColor = true;
			this->btnQuit->Click += gcnew System::EventHandler(this, &Form1::btnQuit_Click);
			// 
			// adp
			// 
			this->adp->DeleteCommand = this->oleDbDeleteCommand1;
			this->adp->InsertCommand = this->oleDbInsertCommand1;
			this->adp->SelectCommand = this->oleDbSelectCommand1;
			this->adp->UpdateCommand = this->oleDbUpdateCommand1;
			this->adp->RowUpdated += gcnew System::Data::OleDb::OleDbRowUpdatedEventHandler(this, &Form1::adp_RowUpdated);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"cust.jpg");
			this->imageList1->Images->SetKeyName(1, L"ev.jpg");
			this->imageList1->Images->SetKeyName(2, L"qu.jpg");
			this->imageList1->Images->SetKeyName(3, L"res.jpg");
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(480, 255);
			this->Controls->Add(this->btnQuit);
			this->Controls->Add(this->btnResevations);
			this->Controls->Add(this->btnCust);
			this->Controls->Add(this->btnEvents);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Events Company";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCust_Click(System::Object^  sender, System::EventArgs^  e) {
				 Customers^ cust = gcnew Customers();
				 cust->Show();
			 }
private: System::Void btnResevations_Click(System::Object^  sender, System::EventArgs^  e) {
			 Reservations^ reserv = gcnew Reservations();
			 reserv->Show();
		 }
private: System::Void btnQuit_Click(System::Object^  sender, System::EventArgs^  e) {
			  Windows::Forms::DialogResult option;
			 option=MessageBox::Show("Are you sure you want to exit","Closing...",MessageBoxButtons::YesNo,MessageBoxIcon::Exclamation);
			 if(option==Windows::Forms::DialogResult::Yes)
			 {
				Close();
			 }
		 }
private: System::Void btnEvents_Click(System::Object^  sender, System::EventArgs^  e) {
			Event_Form^ myEvents = gcnew Event_Form();
			 myEvents->Show();
		 }
private: System::Void adp_RowUpdated(System::Object^  sender, System::Data::OleDb::OleDbRowUpdatedEventArgs^  e) {
		 }
};
}

