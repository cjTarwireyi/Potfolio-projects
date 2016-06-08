#pragma once

namespace PA5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddProperty
	/// </summary>
	public ref class AddProperty : public System::Windows::Forms::Form
	{
	public:
		AddProperty(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		//getters
	public: String ^getpropNumber( )
			{
			return  PNUM;
			}
			String ^getSurbub()
			{
				return SURBUB;
			}
			String ^getPrice()
			{
				return txtPrice->Text;
			}
			String ^getBed()
			{
			return txtBedroom->Text;
			}
			String ^getBath()
			{
				return txtBath->Text;
			}
			String ^getGarage()
			{
				if(rdbNone->Checked==true)
				{
					return "none";
				}
				else if (rdbSingle->Checked==true)
				{
					return "Single";
				}
				else
				{
					return "Double";
				}
			}
			String^ getErfSize()
			{
				return txtErfSize->Text;
			}
			String ^getCancel()
			{
				return cancel;
			}
			String^ getImage()
			{
				return img;
			}
			//setter
	public: void setValues(String ^ pNum,String ^surb, String ^price,String ^bed,String ^bath,String ^garage,String ^erf,String^ img)
			{
		this->pNum=pNum;
		this->surb=surb;
		this->price=price;
		this->bed=bed;
		this->bath=bath;
		this->erf=erf;
		this->garage=garage;
		this->img=img;
			}
	private: System::Windows::Forms::TextBox^  txtImg;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  btnImg;
	public: 

	public: 
	public:bool found;
		
			bool isNotDigit( String^ num)
			{
				found=false;
				 int propNumSize=num->Length;
				for(int i=0;i<propNumSize;i++)
				{
					if (num[i]<48 && num[i]>57)
					{
						found=true;
						break;
					}
				}
				if (found==true)
				{
					return true;
				}
				else
				{
					return false;
				}

			}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddProperty()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtpropNum;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  cmbSurb;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtPrice;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtBedroom;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txtBath;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  txtErfSize;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::RadioButton^  rdbNone;
	private: System::Windows::Forms::RadioButton^  rdbSingle;
	private: System::Windows::Forms::RadioButton^  rdbDouble;
	private: System::Windows::Forms::Button^  btnSave;
	private: System::Windows::Forms::Button^  btnCancel;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		String ^ pNum ;
		String ^surb;
		String ^price;
		String ^bed;
		String ^bath;
		String ^erf;
		String ^garage;
		String^ img;
		 

		String ^ PNUM ;
		String ^SURBUB;
		 
		String ^cancel;
	private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::ImageList^  imageList1;
private: System::Windows::Forms::Label^  label8;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AddProperty::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtpropNum = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmbSurb = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtBedroom = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtBath = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtErfSize = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->rdbNone = (gcnew System::Windows::Forms::RadioButton());
			this->rdbSingle = (gcnew System::Windows::Forms::RadioButton());
			this->rdbDouble = (gcnew System::Windows::Forms::RadioButton());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtImg = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btnImg = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Property Number";
			// 
			// txtpropNum
			// 
			this->txtpropNum->Location = System::Drawing::Point(113, 24);
			this->txtpropNum->Name = L"txtpropNum";
			this->txtpropNum->Size = System::Drawing::Size(138, 20);
			this->txtpropNum->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Suburb";
			// 
			// cmbSurb
			// 
			this->cmbSurb->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbSurb->FormattingEnabled = true;
			this->cmbSurb->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Blackheath", L"Parrow", L"Durbanill", L"Bellvill", 
				L"Kraaifontein", L"Mitchel\'s Plain"});
			this->cmbSurb->Location = System::Drawing::Point(113, 51);
			this->cmbSurb->Name = L"cmbSurb";
			this->cmbSurb->Size = System::Drawing::Size(138, 21);
			this->cmbSurb->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Price";
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(113, 78);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(138, 20);
			this->txtPrice->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 111);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Bedrooms";
			// 
			// txtBedroom
			// 
			this->txtBedroom->Location = System::Drawing::Point(113, 104);
			this->txtBedroom->Name = L"txtBedroom";
			this->txtBedroom->Size = System::Drawing::Size(138, 20);
			this->txtBedroom->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 137);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"BathRooms";
			// 
			// txtBath
			// 
			this->txtBath->Location = System::Drawing::Point(113, 130);
			this->txtBath->Name = L"txtBath";
			this->txtBath->Size = System::Drawing::Size(138, 20);
			this->txtBath->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(274, 137);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"ErfSize";
			// 
			// txtErfSize
			// 
			this->txtErfSize->Location = System::Drawing::Point(342, 134);
			this->txtErfSize->Name = L"txtErfSize";
			this->txtErfSize->Size = System::Drawing::Size(53, 20);
			this->txtErfSize->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(413, 137);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"m2";
			// 
			// rdbNone
			// 
			this->rdbNone->AutoSize = true;
			this->rdbNone->Checked = true;
			this->rdbNone->Location = System::Drawing::Point(20, 19);
			this->rdbNone->Name = L"rdbNone";
			this->rdbNone->Size = System::Drawing::Size(51, 17);
			this->rdbNone->TabIndex = 13;
			this->rdbNone->TabStop = true;
			this->rdbNone->Text = L"None";
			this->rdbNone->UseVisualStyleBackColor = true;
			// 
			// rdbSingle
			// 
			this->rdbSingle->AutoSize = true;
			this->rdbSingle->Location = System::Drawing::Point(20, 37);
			this->rdbSingle->Name = L"rdbSingle";
			this->rdbSingle->Size = System::Drawing::Size(54, 17);
			this->rdbSingle->TabIndex = 14;
			this->rdbSingle->Text = L"Single";
			this->rdbSingle->UseVisualStyleBackColor = true;
			// 
			// rdbDouble
			// 
			this->rdbDouble->AutoSize = true;
			this->rdbDouble->Location = System::Drawing::Point(20, 58);
			this->rdbDouble->Name = L"rdbDouble";
			this->rdbDouble->Size = System::Drawing::Size(59, 17);
			this->rdbDouble->TabIndex = 15;
			this->rdbDouble->Text = L"Double";
			this->rdbDouble->UseVisualStyleBackColor = true;
			this->rdbDouble->CheckedChanged += gcnew System::EventHandler(this, &AddProperty::rdbDouble_CheckedChanged);
			// 
			// btnSave
			// 
			this->btnSave->ImageKey = L"save.jpg";
			this->btnSave->ImageList = this->imageList1;
			this->btnSave->Location = System::Drawing::Point(15, 170);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(92, 43);
			this->btnSave->TabIndex = 16;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &AddProperty::btnSave_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"canc.jpg");
			this->imageList1->Images->SetKeyName(1, L"save.jpg");
			// 
			// btnCancel
			// 
			this->btnCancel->ImageKey = L"canc.jpg";
			this->btnCancel->ImageList = this->imageList1;
			this->btnCancel->Location = System::Drawing::Point(330, 170);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(104, 43);
			this->btnCancel->TabIndex = 17;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &AddProperty::btnCancel_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rdbSingle);
			this->groupBox1->Controls->Add(this->rdbNone);
			this->groupBox1->Controls->Add(this->rdbDouble);
			this->groupBox1->Location = System::Drawing::Point(277, 17);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(157, 74);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Garage";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(274, 111);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Image Name";
			// 
			// txtImg
			// 
			this->txtImg->Location = System::Drawing::Point(342, 104);
			this->txtImg->Name = L"txtImg";
			this->txtImg->ReadOnly = true;
			this->txtImg->Size = System::Drawing::Size(100, 20);
			this->txtImg->TabIndex = 19;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L" ";
			// 
			// btnImg
			// 
			this->btnImg->Location = System::Drawing::Point(402, 98);
			this->btnImg->Name = L"btnImg";
			this->btnImg->Size = System::Drawing::Size(51, 30);
			this->btnImg->TabIndex = 20;
			this->btnImg->Text = L"Choose";
			this->btnImg->UseVisualStyleBackColor = true;
			this->btnImg->Click += gcnew System::EventHandler(this, &AddProperty::btnImg_Click);
			// 
			// AddProperty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			this->ClientSize = System::Drawing::Size(454, 220);
			this->Controls->Add(this->btnImg);
			this->Controls->Add(this->txtImg);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtErfSize);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtBath);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtBedroom);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cmbSurb);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtpropNum);
			this->Controls->Add(this->label1);
			this->Name = L"AddProperty";
			this->Text = L"Add Property";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AddProperty::AddProperty_FormClosing);
			this->Load += gcnew System::EventHandler(this, &AddProperty::AddProperty_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {
		
		 PNUM=txtpropNum->Text;
		 SURBUB=cmbSurb->Text;
		 price=price=txtPrice->Text;
		 bed=txtBedroom->Text;
		 bath=txtBath->Text;
		 erf=txtErfSize->Text;
		 img=txtImg->Text;
		 garage="garage";
		 this->Close();
		 cancel="k";		
				 
		}
private: System::Void AddProperty_Load(System::Object^  sender, System::EventArgs^  e) {
			
			 if(isNotDigit(txtPrice->Text)==false)
			 {
				 txtpropNum->Text=pNum;
				 cmbSurb->Text=surb;
				 txtPrice->Text=price;
				 txtBedroom->Text=bed;
				 txtBath->Text=bath;
				 txtErfSize->Text=erf;
				 txtImg->Text=img;
			 
				if(garage=="None")
				{
					rdbNone->Checked=true;
				}
				else if(garage=="Single")
					{
						rdbSingle->Checked=true;
					}
					else if (garage=="Double")
						{
							rdbDouble->Checked=true;
						}
					else
					{
					
					}
						this->garage=garage;
			 }
			 else
			 {
				
			 }
		 }
private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {		

			cancel="c";
			Close();		
		 }
private: System::Void btnImg_Click(System::Object^  sender, System::EventArgs^  e) {

			 openFileDialog1->ShowDialog();
			 txtImg->Text=openFileDialog1->SafeFileName;
		 }
private: System::Void AddProperty_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

			cancel="c";
		 }
private: System::Void rdbDouble_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
