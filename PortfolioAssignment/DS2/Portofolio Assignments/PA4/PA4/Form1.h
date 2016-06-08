#pragma once
#include"UpdateForm.h"
namespace PA4 {

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
	private: System::Windows::Forms::Button^  btnAdd;
	protected: 
	private: System::Windows::Forms::Button^  btnEdit;
	private: System::Windows::Forms::Button^  btnDelete;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
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
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// btnAdd
			// 
			this->btnAdd->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnAdd->ImageIndex = 0;
			this->btnAdd->ImageList = this->imageList1;
			this->btnAdd->Location = System::Drawing::Point(47, 191);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(97, 59);
			this->btnAdd->TabIndex = 0;
			this->btnAdd->Text = L"Add";
			this->btnAdd->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Form1::btnAdd_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"add.ico");
			this->imageList1->Images->SetKeyName(1, L"edit.png");
			this->imageList1->Images->SetKeyName(2, L"exit.jpg");
			this->imageList1->Images->SetKeyName(3, L"delete.jpg");
			// 
			// btnEdit
			// 
			this->btnEdit->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnEdit->ImageIndex = 1;
			this->btnEdit->ImageList = this->imageList1;
			this->btnEdit->Location = System::Drawing::Point(150, 191);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(92, 59);
			this->btnEdit->TabIndex = 1;
			this->btnEdit->Text = L"Edit";
			this->btnEdit->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &Form1::btnEdit_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnDelete->ImageIndex = 3;
			this->btnDelete->ImageList = this->imageList1;
			this->btnDelete->Location = System::Drawing::Point(248, 191);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(93, 59);
			this->btnDelete->TabIndex = 2;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &Form1::btnDelete_Click);
			// 
			// btnExit
			// 
			this->btnExit->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnExit->ImageIndex = 2;
			this->btnExit->ImageList = this->imageList1;
			this->btnExit->Location = System::Drawing::Point(349, 191);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(86, 59);
			this->btnExit->TabIndex = 3;
			this->btnExit->Text = L"Exit";
			this->btnExit->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &Form1::btnExit_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4, this->columnHeader5});
			this->listView1->FullRowSelect = true;
			this->listView1->Location = System::Drawing::Point(47, 12);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(388, 173);
			this->listView1->TabIndex = 4;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"ItemCode";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Description";
			this->columnHeader2->Width = 69;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Quantity";
			this->columnHeader3->Width = 92;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Cost Price";
			this->columnHeader4->Width = 79;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Selling Price";
			this->columnHeader5->Width = 93;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(447, 262);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnEdit);
			this->Controls->Add(this->btnAdd);
			this->Name = L"Form1";
			this->Text = L"Items";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
			UpdateForm^ updatef=gcnew UpdateForm();	
			//calling update form
			updatef->ShowDialog(); 
			if(updatef->getCancel()!="c")
			{
				if ( updatef->getCode()!="" && updatef->getDescription()!="")
					{
						ListViewItem^ lst=gcnew ListViewItem(updatef->getCode());
						lst->SubItems->Add(updatef->getDescription());
						lst->SubItems->Add(Convert::ToString(updatef->getQuantity()));
						lst->SubItems->Add(Convert::ToString(updatef->getCostPrice() ));
						lst->SubItems->Add(Convert::ToString(updatef->getSellingPrice()));
						listView1->Items->Add(lst);
						MessageBox::Show("A record has been successfully added");	
				}
				else
					{
						MessageBox::Show("Could not save one of the fields were empty");
					}
			}			 
			listView1->SelectedItems->Clear();
			 }
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnEdit_Click(System::Object^  sender, System::EventArgs^  e) {
			 UpdateForm^ updatef=gcnew UpdateForm();
			 //sending values to the update form
			 try{
					updatef->setCode(listView1->SelectedItems[0]->SubItems[0]->Text);
					updatef->setDescription(listView1->SelectedItems[0]->SubItems[1]->Text);
					updatef->setQuantity(Convert::ToInt32(listView1->SelectedItems[0]->SubItems[2]->Text));
					updatef->setCostPrice(Convert::ToDouble(listView1->SelectedItems[0]->SubItems[3]->Text));
					updatef->setSellingPrice(Convert::ToDouble(listView1->SelectedItems[0]->SubItems[4]->Text));
					updatef->ShowDialog();
			 
			 
			 //getting the updated values back
			 if(updatef->getCancel()!="c")
			{
				if ( updatef->getCode()!="" && updatef->getDescription()!="")
					{
						listView1->SelectedItems[0]->SubItems[0]->Text=updatef->getCode();
						listView1->SelectedItems[0]->SubItems[1]->Text=updatef->getDescription();
						listView1->SelectedItems[0]->SubItems[2]->Text=Convert::ToString(updatef->getQuantity());
						listView1->SelectedItems[0]->SubItems[3]->Text=Convert::ToString(updatef->getCostPrice());
						listView1->SelectedItems[0]->SubItems[4]->Text=Convert::ToString(updatef->getSellingPrice());
						MessageBox::Show("A record has been successfully edited");	
				}
				else
				{
					MessageBox::Show("Could not save one of the fields were empty");
				}
			 }
			 }
			 catch(...)
			 {
				 MessageBox::Show("You have not selected an item","No Item Selected...",MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 listView1->SelectedItems->Clear();

		 }
private: System::Void btnDelete_Click(System::Object^  sender, System::EventArgs^  e) {
			  try{
					listView1->SelectedItems[0]->Text;
					Windows::Forms::DialogResult option;
					option=MessageBox::Show("You are about to delete a record\n Are you sure you want to delete?","Delete",MessageBoxButtons::YesNo,MessageBoxIcon::Exclamation);
					
					if (option==Windows::Forms::DialogResult::Yes)
						listView1->SelectedItems[0]->Remove();
						option=MessageBox::Show("A record has been successfully deleted");				 
			  }
			  catch(...)
			  {
				 MessageBox::Show("You have not selected an item","No Item Selected...",MessageBoxButtons::OK,MessageBoxIcon::Warning);
			  }
			  listView1->SelectedItems->Clear();
		 }
private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Windows::Forms::DialogResult option;
			 option=MessageBox::Show("You are about to exit  the program", "Exiting program",MessageBoxButtons::YesNo,MessageBoxIcon::Warning);
			 
			 if (option==Windows::Forms::DialogResult::Yes)	
			 {
			 Close();
			 }
			  listView1->SelectedItems->Clear();
		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			  
		 }
};
}

