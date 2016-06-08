#pragma once

namespace PA_6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Events
	/// </summary>
	public ref class Events : public System::Windows::Forms::Form
	{
	public:
		Events(void)
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
		~Events()
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
	private: System::Windows::Forms::Button^  btnEdit;
	private: System::Windows::Forms::Button^  btnClose;
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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7});
			this->listView1->Location = System::Drawing::Point(3, 1);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(557, 220);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"EventID";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Event Name";
			this->columnHeader2->Width = 88;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Location";
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Start Date";
			this->columnHeader4->Width = 61;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Available Spaces";
			this->columnHeader5->Width = 101;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Cost/Person";
			this->columnHeader6->Width = 79;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Event Description";
			this->columnHeader7->Width = 98;
			// 
			// btnEdit
			// 
			this->btnEdit->Location = System::Drawing::Point(12, 227);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(75, 23);
			this->btnEdit->TabIndex = 1;
			this->btnEdit->Text = L"Edit";
			this->btnEdit->UseVisualStyleBackColor = true;
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(459, 240);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(75, 23);
			this->btnClose->TabIndex = 2;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Events::btnClose_Click);
			// 
			// Events
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 262);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnEdit);
			this->Controls->Add(this->listView1);
			this->Name = L"MyEvents";
			this->Text = L"MyEvents";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
};
}
