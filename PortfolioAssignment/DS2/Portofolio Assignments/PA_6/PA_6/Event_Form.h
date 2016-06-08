#pragma once
#include"Update_Events.h"
namespace PA_6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for Event_Form
	/// </summary>
	public ref class Event_Form : public System::Windows::Forms::Form
	{
	public:
		Event_Form(void)
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
		~Event_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  eventList;
	protected: 

	protected: 
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::Button^  btnEdit;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnDelete;
	private: System::Data::OleDb::OleDbConnection^  conn;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  adp;

	private:
		/// <summary>
		/// Required designer variable.
		static Update_Events^ eventsF= gcnew Update_Events();
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Event_Form::typeid));
			this->eventList = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->conn = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->adp = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->SuspendLayout();
			// 
			// eventList
			// 
			this->eventList->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->eventList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8});
			this->eventList->FullRowSelect = true;
			this->eventList->Location = System::Drawing::Point(12, 12);
			this->eventList->Name = L"eventList";
			this->eventList->Size = System::Drawing::Size(620, 202);
			this->eventList->TabIndex = 1;
			this->eventList->UseCompatibleStateImageBehavior = false;
			this->eventList->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Event ID";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Event Name";
			this->columnHeader2->Width = 81;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Loaction";
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Start Date";
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Start Time";
			this->columnHeader5->Width = 65;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Available Spaces";
			this->columnHeader6->Width = 96;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Cost/Person";
			this->columnHeader7->Width = 79;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Events Description";
			this->columnHeader8->Width = 111;
			// 
			// btnClose
			// 
			this->btnClose->ImageKey = L"qu.jpg";
			this->btnClose->ImageList = this->imageList1;
			this->btnClose->Location = System::Drawing::Point(506, 227);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(126, 52);
			this->btnClose->TabIndex = 4;
			this->btnClose->Text = L" ";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Event_Form::btnClose_Click);
			// 
			// btnEdit
			// 
			this->btnEdit->ImageKey = L"edit.jpg";
			this->btnEdit->ImageList = this->imageList1;
			this->btnEdit->Location = System::Drawing::Point(191, 227);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(126, 52);
			this->btnEdit->TabIndex = 3;
			this->btnEdit->Text = L" ";
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &Event_Form::btnEdit_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->ImageKey = L"addd.jpg";
			this->btnAdd->ImageList = this->imageList1;
			this->btnAdd->Location = System::Drawing::Point(12, 227);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(126, 52);
			this->btnAdd->TabIndex = 5;
			this->btnAdd->Text = L" ";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Event_Form::btnAdd_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->ImageKey = L"del.png";
			this->btnDelete->ImageList = this->imageList1;
			this->btnDelete->Location = System::Drawing::Point(346, 227);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(128, 52);
			this->btnDelete->TabIndex = 6;
			this->btnDelete->Text = L" ";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &Event_Form::btnDelete_Click);
			// 
			// conn
			// 
			this->conn->ConnectionString = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=\"H:\\DOS\\Portofolio Assignments\\PA_6" 
				L"\\PA_6\\Assignment6.accdb\"";
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->Connection = this->conn;
			// 
			// oleDbInsertCommand1
			// 
			this->oleDbInsertCommand1->Connection = this->conn;
			// 
			// oleDbUpdateCommand1
			// 
			this->oleDbUpdateCommand1->Connection = this->conn;
			// 
			// oleDbDeleteCommand1
			// 
			this->oleDbDeleteCommand1->Connection = this->conn;
			// 
			// adp
			// 
			this->adp->DeleteCommand = this->oleDbDeleteCommand1;
			this->adp->InsertCommand = this->oleDbInsertCommand1;
			this->adp->SelectCommand = this->oleDbSelectCommand1;
			this->adp->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"addd.jpg");
			this->imageList1->Images->SetKeyName(1, L"del.png");
			this->imageList1->Images->SetKeyName(2, L"edit.jpg");
			this->imageList1->Images->SetKeyName(3, L"qu.jpg");
			// 
			// Event_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(642, 280);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnEdit);
			this->Controls->Add(this->eventList);
			this->Name = L"Event_Form";
			this->Text = L"Events";
			this->Load += gcnew System::EventHandler(this, &Event_Form::Event_Form_Load);
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
			 try{
					
					eventsF->editValues(eventList->SelectedItems[0]->SubItems[0]->Text,eventList->SelectedItems[0]->SubItems[1]->Text,eventList->SelectedItems[0]->SubItems[2]->Text,eventList->SelectedItems[0]->SubItems[3]->Text,eventList->SelectedItems[0]->SubItems[4]->Text,eventList->SelectedItems[0]->SubItems[5]->Text,eventList->SelectedItems[0]->SubItems[6]->Text,eventList->SelectedItems[0]->SubItems[7]->Text);
					eventsF->ShowDialog();
					conn->Open();
					
							if(eventsF->getCancel()!="c")
							{
								if(eventsF->getEventId()->Length==4)
									{
										 if(eventsF->getEventName()!="" && eventsF->getEventLocation()!="" && eventsF->getEventDescription()!=""&& eventsF->getAvailableSpaces()!="")
											{
												try{
														Convert::ToDouble(eventsF->getCostPerPerson());
														adp->UpdateCommand->CommandText="Update EVENTS set [EventID]='"+eventsF->getEventId()+"',[EventName]='"+ eventsF->getEventName()+"',[Location]='"+ eventsF->getEventLocation()+"',[StartDate]='"+eventsF->getStartDate()+"',[StartTime]='"+eventsF->getStartTime()+"',[AvailableSpaces]='"+eventsF->getAvailableSpaces()+"',[CostPerPerson]='"+eventsF->getCostPerPerson()+"',[EventDescription]='"+eventsF->getEventDescription()+"' Where [EventID]='"+eventList->SelectedItems[0]->Text+"'";
														adp->UpdateCommand->ExecuteNonQuery();

														eventList->SelectedItems[0]->SubItems[0]->Text=eventsF->getEventId();
														eventList->SelectedItems[0]->SubItems[1]->Text=eventsF->getEventName();
														eventList->SelectedItems[0]->SubItems[2]->Text=eventsF->getEventLocation();
														eventList->SelectedItems[0]->SubItems[3]->Text=eventsF->getStartDate();
														eventList->SelectedItems[0]->SubItems[4]->Text=eventsF->getStartTime();
														eventList->SelectedItems[0]->SubItems[5]->Text=eventsF->getAvailableSpaces();
														eventList->SelectedItems[0]->SubItems[6]->Text=eventsF->getCostPerPerson();
														eventList->SelectedItems[0]->SubItems[7]->Text=eventsF->getEventDescription();
														MessageBox::Show("A record has been successfully edited");
													}
							
													catch(FormatException^ e)
														{
															MessageBox::Show("Make sure cost is in correct format","Adding...",MessageBoxButtons::OK,MessageBoxIcon::Warning);
														}
													catch(OleDbException^ e)
														{
															MessageBox::Show("An event you entered already exist");
														} 
													catch(...)
														{
															MessageBox::Show("Somethng went wrong try again");
														}
											}
											else
												{
													MessageBox::Show("Could not save one of the fields were empty");
												}
									}
									else
										{
											MessageBox::Show("Could not save Event ID must be 4 charaters");
										}
							}
							conn->Close();
			 }
			 catch(...)
				{
					MessageBox::Show("Please select a record to proceed","Updating...",MessageBoxButtons::OK,MessageBoxIcon::Warning);
				}
			 eventList->SelectedItems->Clear();
		 }
private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
			 conn->Open();
			 eventsF->ShowDialog();
			
				 if(eventsF->getCancel()!="c")
				 {
					 if(eventsF->getEventId()->Length==4)
					 {
						 if(eventsF->getEventName()!="" && eventsF->getEventLocation()!="" && eventsF->getEventDescription()!=""&& eventsF->getAvailableSpaces()!="")
						 {
							try{
									Convert::ToDouble(eventsF->getCostPerPerson());
									adp->InsertCommand->CommandText="Insert Into EVENTS([EventID],[EventName],[Location],[StartDate],[StartTime],[AvailableSpaces],[CostPerPerson],[EventDescription])Values('"+ eventsF->getEventId()+"','"+ eventsF->getEventName()+"','"+ eventsF->getEventLocation()+"','"+eventsF->getStartDate()+"','"+eventsF->getStartTime()+"','"+eventsF->getAvailableSpaces()+"','"+eventsF->getCostPerPerson()+"','"+eventsF->getEventDescription()+"')";
									adp->InsertCommand->ExecuteNonQuery();

									ListViewItem^ myList = gcnew ListViewItem(eventsF->getEventId());
									myList->SubItems->Add(eventsF->getEventName());
									myList->SubItems->Add(eventsF->getEventLocation());
									myList->SubItems->Add(eventsF->getStartDate());
									myList->SubItems->Add(eventsF->getStartTime());	
									myList->SubItems->Add(eventsF->getAvailableSpaces());
									myList->SubItems->Add(eventsF->getCostPerPerson() );
									myList->SubItems->Add(eventsF->getEventDescription() );
									eventList->Items->Add(myList);
									MessageBox::Show("A record has been successfully added");

								}	 
							catch(FormatException^ e)
								{
									MessageBox::Show("Make sure cost is in correct format","Adding...",MessageBoxButtons::OK,MessageBoxIcon::Warning);
								}
							 catch(OleDbException^ e)
								{
									MessageBox::Show("An event you entered already exist");
								} 
							 catch(...)
								{
									MessageBox::Show("Somethng went wrong try again");
								}
						 }
						 else
							{
								MessageBox::Show("Could not save one of the fields were empty");
							}
					 }
					 else
						{
							MessageBox::Show("Could not save Event ID must be 4 charaters");
						}
				}
				conn->Close();
				eventList->SelectedItems->Clear();
		 }
private: System::Void Event_Form_Load(System::Object^  sender, System::EventArgs^  e) {
			 conn->Open();

			 adp->SelectCommand->CommandText="Select *From EVENTS";
			 OleDbDataReader^ dr=adp->SelectCommand->ExecuteReader();
			 while (dr->Read())
			 {
				ListViewItem^ myList = gcnew ListViewItem(dr["EventID"]->ToString());
				myList->SubItems->Add(dr["EventName"]->ToString());
				myList->SubItems->Add(dr["Location"]->ToString());
				myList->SubItems->Add(dr["StartDate"]->ToString());
				myList->SubItems->Add(dr["StartTime"]->ToString());
				myList->SubItems->Add(dr["AvailableSpaces"]->ToString());
				myList->SubItems->Add(dr["CostPerPerson"]->ToString());
				myList->SubItems->Add(dr["EventDescription"]->ToString());					 
				eventList->Items->Add(myList);
			 }
			 conn->Close();

		 }
private: System::Void btnDelete_Click(System::Object^  sender, System::EventArgs^  e) {
			 conn->Open();
			 try{
					eventList->SelectedItems[0]->Text;
					Windows::Forms::DialogResult option;
					option=MessageBox::Show("You are about to delete a record\n Are you sure you want to delete?","Delete",MessageBoxButtons::YesNo,MessageBoxIcon::Exclamation);
					
					if (option==Windows::Forms::DialogResult::Yes)
					{
						adp->DeleteCommand->CommandText="Delete From EVENTS Where [EventID]='"+eventList->SelectedItems[0]->Text+"'";
						adp->DeleteCommand->ExecuteNonQuery();
						eventList->SelectedItems[0]->Remove();
						MessageBox::Show("A record has been deleted");
					}
			 }
			  catch(...)
			 {
				MessageBox::Show("Please select a record to proceed","Deleting...",MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 conn->Close();
			 eventList->SelectedItems->Clear();
		 }
};
}
