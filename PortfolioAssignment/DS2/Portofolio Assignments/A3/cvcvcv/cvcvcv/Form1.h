#pragma once
#include"TickerForm.h"
namespace cvcvcv {

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
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtNumbers;
	private: System::Windows::Forms::TextBox^  txtSets;
	private: System::Windows::Forms::TextBox^  txtMax;
	private: System::Windows::Forms::TextBox^  txtOutput;
	private: System::Windows::Forms::Button^  btnGenerate;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  backgroundToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  fondSizeToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  lblDate;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::FontDialog^  fontDialog1;
	private: System::Windows::Forms::Button^  btnTicker;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		 static int sec=0 ;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNumbers = (gcnew System::Windows::Forms::TextBox());
			this->txtSets = (gcnew System::Windows::Forms::TextBox());
			this->txtMax = (gcnew System::Windows::Forms::TextBox());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->btnGenerate = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fondSizeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->btnTicker = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"How many numbers make up a full set";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(226, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"How many sets of lottery numbers do you want";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(225, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"what is the highest number that can be picked";
			// 
			// txtNumbers
			// 
			this->txtNumbers->Location = System::Drawing::Point(287, 39);
			this->txtNumbers->Name = L"txtNumbers";
			this->txtNumbers->Size = System::Drawing::Size(100, 20);
			this->txtNumbers->TabIndex = 3;
			// 
			// txtSets
			// 
			this->txtSets->Location = System::Drawing::Point(287, 63);
			this->txtSets->Name = L"txtSets";
			this->txtSets->Size = System::Drawing::Size(100, 20);
			this->txtSets->TabIndex = 4;
			// 
			// txtMax
			// 
			this->txtMax->Location = System::Drawing::Point(287, 92);
			this->txtMax->Name = L"txtMax";
			this->txtMax->Size = System::Drawing::Size(100, 20);
			this->txtMax->TabIndex = 5;
			// 
			// txtOutput
			// 
			this->txtOutput->Location = System::Drawing::Point(16, 211);
			this->txtOutput->Multiline = true;
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->ReadOnly = true;
			this->txtOutput->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtOutput->Size = System::Drawing::Size(375, 94);
			this->txtOutput->TabIndex = 6;
			this->txtOutput->TextChanged += gcnew System::EventHandler(this, &Form1::txtOutput_TextChanged);
			// 
			// btnGenerate
			// 
			this->btnGenerate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnGenerate->ImageKey = L"Boules-loto-copie.jpg";
			this->btnGenerate->ImageList = this->imageList1;
			this->btnGenerate->Location = System::Drawing::Point(127, 125);
			this->btnGenerate->Name = L"btnGenerate";
			this->btnGenerate->Size = System::Drawing::Size(116, 51);
			this->btnGenerate->TabIndex = 7;
			this->btnGenerate->Text = L"Generate";
			this->btnGenerate->UseVisualStyleBackColor = true;
			this->btnGenerate->Click += gcnew System::EventHandler(this, &Form1::btnGenerate_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"Boules-loto-copie.jpg");
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->toolStripMenuItem1, 
				this->optionsToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(400, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem, 
				this->exitToolStripMenuItem, this->exitToolStripMenuItem1});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(37, 20);
			this->toolStripMenuItem1->Text = L"File";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F1;
			this->fileToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->fileToolStripMenuItem->Text = L"GetNumbers";
			this->fileToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::fileToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F2;
			this->exitToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->exitToolStripMenuItem->Text = L"Clear Number";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem1
			// 
			this->exitToolStripMenuItem1->Name = L"exitToolStripMenuItem1";
			this->exitToolStripMenuItem1->Size = System::Drawing::Size(167, 22);
			this->exitToolStripMenuItem1->Text = L"Exit";
			this->exitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem1_Click);
			// 
			// optionsToolStripMenuItem
			// 
			this->optionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->backgroundToolStripMenuItem, 
				this->fondSizeToolStripMenuItem});
			this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
			this->optionsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->optionsToolStripMenuItem->Text = L"Options";
			// 
			// backgroundToolStripMenuItem
			// 
			this->backgroundToolStripMenuItem->Name = L"backgroundToolStripMenuItem";
			this->backgroundToolStripMenuItem->Size = System::Drawing::Size(138, 22);
			this->backgroundToolStripMenuItem->Text = L"Background";
			this->backgroundToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::backgroundToolStripMenuItem_Click);
			// 
			// fondSizeToolStripMenuItem
			// 
			this->fondSizeToolStripMenuItem->Name = L"fondSizeToolStripMenuItem";
			this->fondSizeToolStripMenuItem->Size = System::Drawing::Size(138, 22);
			this->fondSizeToolStripMenuItem->Text = L"Fond Size";
			this->fondSizeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::fondSizeToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(140, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Your lottery numbers";
			// 
			// lblDate
			// 
			this->lblDate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblDate->Location = System::Drawing::Point(265, 340);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(100, 23);
			this->lblDate->TabIndex = 10;
			this->lblDate->Text = L" ";
			this->lblDate->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// btnTicker
			// 
			this->btnTicker->Location = System::Drawing::Point(16, 340);
			this->btnTicker->Name = L"btnTicker";
			this->btnTicker->Size = System::Drawing::Size(118, 23);
			this->btnTicker->TabIndex = 11;
			this->btnTicker->Text = L"Play Ticker game";
			this->btnTicker->UseVisualStyleBackColor = true;
			this->btnTicker->Click += gcnew System::EventHandler(this, &Form1::btnTicker_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(400, 381);
			this->Controls->Add(this->btnTicker);
			this->Controls->Add(this->lblDate);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnGenerate);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->txtMax);
			this->Controls->Add(this->txtSets);
			this->Controls->Add(this->txtNumbers);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Lottery Assistant";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txtOutput_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void btnGenerate_Click(System::Object^  sender, System::EventArgs^  e) {
			 
				Random^ ran=gcnew Random;
				try{
					int num= Convert::ToInt32( txtNumbers->Text) ;
					int set=Convert::ToInt32(txtSets->Text);
					int Max=Convert::ToInt32(txtMax->Text);
					int r,count=1; 
					int totalNum=num*set;

					for(int i=0;i<totalNum;i++)
					{
						r=ran->Next(1,Max);
						if(count==Convert::ToInt32(txtSets->Text))
						{
							txtOutput->Text=txtOutput->Text+Convert::ToString(r)+"\r\n" ;
							count=1;
						}
						 else
							{
								txtOutput->Text=txtOutput->Text+Convert::ToString(r)+"\t";
								count++;
							}
					}	 
				}
				catch(...)
				{
					MessageBox::Show("Make sure data type is integers");
				}
			 
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
					 txtNumbers->Clear() ;
					 txtSets->Clear();
					 txtMax->Clear();
					 txtOutput->Clear();
		 }
private: System::Void exitToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::Close();
		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("This is a lotttery application");
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 DateTime datetime=DateTime::Now;
		 lblDate->Text=datetime.ToString();

		 }
private: System::Void backgroundToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			colorDialog1->ShowDialog();
			this->BackColor=colorDialog1->Color;
		 }
private: System::Void fondSizeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 fontDialog1->ShowDialog();
			this->Font=fontDialog1->Font;
		 }
private: System::Void fileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Random^ ran=gcnew Random;
				try{
					int num= Convert::ToInt32( txtNumbers->Text) ;
					int set=Convert::ToInt32(txtSets->Text);
					int Max=Convert::ToInt32(txtMax->Text);
					int r,count=1; 
					int totalNum=num*set;

					for(int i=0;i<totalNum;i++)
					{
						r=ran->Next(1,Max);
						if(count==6)
						{
							txtOutput->Text=txtOutput->Text+Convert::ToString(r)+"\r\n" ;
							count=1;
						}
						 else
							{
								txtOutput->Text=txtOutput->Text+Convert::ToString(r)+"\t";
								count++;
							}
					}	 
				}
				catch(...)
				{
					MessageBox::Show("Make sure data type is integers");
				}
			 
		 }
private: System::Void btnTicker_Click(System::Object^  sender, System::EventArgs^  e) {
			TickerForm^ tickerForm = gcnew TickerForm();
			tickerForm->Show();
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
};
}

