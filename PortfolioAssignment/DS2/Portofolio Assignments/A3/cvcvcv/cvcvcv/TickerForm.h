#pragma once

namespace cvcvcv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TickerForm
	/// </summary>
	public ref class TickerForm : public System::Windows::Forms::Form
	{
	public:
		TickerForm(void)
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
		~TickerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnStart;
	protected: 
	private: System::Windows::Forms::Button^  btnClickme1;
	private: System::Windows::Forms::Button^  btnClickme2;
	private: System::Windows::Forms::Label^  lblTime;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		static int sec=12;
		String^ startGame;
	private: System::Windows::Forms::Label^  lblTotal;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::ImageList^  imageList1;
			 int count;
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TickerForm::typeid));
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->btnClickme1 = (gcnew System::Windows::Forms::Button());
			this->btnClickme2 = (gcnew System::Windows::Forms::Button());
			this->lblTime = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblTotal = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->SuspendLayout();
			// 
			// btnStart
			// 
			this->btnStart->Location = System::Drawing::Point(96, 67);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(100, 37);
			this->btnStart->TabIndex = 0;
			this->btnStart->Text = L"Start";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &TickerForm::btnStart_Click);
			// 
			// btnClickme1
			// 
			this->btnClickme1->ImageKey = L"ms1.jpg";
			this->btnClickme1->ImageList = this->imageList1;
			this->btnClickme1->Location = System::Drawing::Point(26, 118);
			this->btnClickme1->Name = L"btnClickme1";
			this->btnClickme1->Size = System::Drawing::Size(75, 38);
			this->btnClickme1->TabIndex = 1;
			this->btnClickme1->Text = L"Click me";
			this->btnClickme1->UseVisualStyleBackColor = true;
			this->btnClickme1->Click += gcnew System::EventHandler(this, &TickerForm::btnClickme1_Click);
			// 
			// btnClickme2
			// 
			this->btnClickme2->ImageIndex = 1;
			this->btnClickme2->ImageList = this->imageList1;
			this->btnClickme2->Location = System::Drawing::Point(175, 118);
			this->btnClickme2->Name = L"btnClickme2";
			this->btnClickme2->Size = System::Drawing::Size(75, 38);
			this->btnClickme2->TabIndex = 2;
			this->btnClickme2->Text = L"Click me";
			this->btnClickme2->UseVisualStyleBackColor = true;
			this->btnClickme2->Click += gcnew System::EventHandler(this, &TickerForm::btnClickme2_Click);
			// 
			// lblTime
			// 
			this->lblTime->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblTime->Location = System::Drawing::Point(96, 21);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(100, 23);
			this->lblTime->TabIndex = 3;
			this->lblTime->Text = L" ";
			this->lblTime->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &TickerForm::timer1_Tick);
			// 
			// lblTotal
			// 
			this->lblTotal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblTotal->Location = System::Drawing::Point(96, 174);
			this->lblTotal->Name = L"lblTotal";
			this->lblTotal->Size = System::Drawing::Size(100, 34);
			this->lblTotal->TabIndex = 4;
			this->lblTotal->Text = L" ";
			this->lblTotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnExit
			// 
			this->btnExit->ImageKey = L"back.png";
			this->btnExit->ImageList = this->imageList1;
			this->btnExit->Location = System::Drawing::Point(87, 223);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(109, 39);
			this->btnExit->TabIndex = 5;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &TickerForm::btnExit_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"ms1.jpg");
			this->imageList1->Images->SetKeyName(1, L"ms2.jpg");
			this->imageList1->Images->SetKeyName(2, L"back.png");
			// 
			// TickerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->lblTotal);
			this->Controls->Add(this->lblTime);
			this->Controls->Add(this->btnClickme2);
			this->Controls->Add(this->btnClickme1);
			this->Controls->Add(this->btnStart);
			this->Name = L"TickerForm";
			this->Text = L"TickerForm";
			this->Load += gcnew System::EventHandler(this, &TickerForm::TickerForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TickerForm_Load(System::Object^  sender, System::EventArgs^  e) {
				btnClickme1->Enabled=false;
				btnClickme2->Enabled=false;
			 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(startGame=="s"&&sec>0)
			 {
				
				btnStart->Enabled=false;
				 sec--;
				lblTime->Text=sec.ToString();
				if(sec==0)
				{
					lblTotal->Text=Convert::ToString(count);
					btnClickme1->Enabled=false;
					btnClickme2->Enabled=false;
					btnStart->Enabled=true;
					
				}
			 }
		 }
private: System::Void btnStart_Click(System::Object^  sender, System::EventArgs^  e) {
			btnClickme1->Enabled=true;
			 startGame="s";
			lblTotal->Text="";
			lblTime->Text="";
			sec=12;
			count=0;
		 }
private: System::Void btnClickme1_Click(System::Object^  sender, System::EventArgs^  e) {
			 count++;
			 
				btnClickme1->Enabled=false;
				btnClickme2->Enabled=true;
		 }
private: System::Void btnClickme2_Click(System::Object^  sender, System::EventArgs^  e) {
			 count++;
			 btnClickme2->Enabled=false;
			 btnClickme1->Enabled=true;
		 }
private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
};
}
