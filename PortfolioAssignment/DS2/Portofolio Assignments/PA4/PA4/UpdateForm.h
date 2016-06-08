#pragma once

namespace PA4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UpdateForm
	/// </summary>
	public ref class UpdateForm : public System::Windows::Forms::Form
	{
	public:
		UpdateForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		 

		public :
			//geters to get values from update form
			String^ getCode( )
			{		
				return icode;
			}
			String^ getDescription()
			{
				return description ;
			}
			int getQuantity()
			{
				return qty;
			}
			double getCostPrice()
			{
				return costPrc;
			}
			double getSellingPrice()
			{
				return sPrice;
			}
			String^ getCancel()
			{
				return cancel;
			}

	 //seters to display values on the update form
			void setCode(String^ code)
			{
				icode=code;
			}
			void setDescription(String^ des)
			{
			description=des;
			}
			void setQuantity(int q)
			{
				 qty=q;
			}
			void setCostPrice(double p)
			{
				costPrc=p;
			}
			void setSellingPrice(double sp)
			{
				sPrice=sp;
			}
			//validation functions
			

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txtCode;
	private: System::Windows::Forms::TextBox^  txtDescript;

	private: System::Windows::Forms::TextBox^  txtQty;
	private: System::Windows::Forms::TextBox^  txtCPrice;
	private: System::Windows::Forms::TextBox^  txtSelPrice;





	private: System::Windows::Forms::Button^  btnSave;
	private: System::Windows::Forms::Button^  btnCancel;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
			String^ icode ;
			String^ description ;
			int qty ;
			double costPrc ;
			double sPrice;
			String^ cancel;
			bool isNum;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(UpdateForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtCode = (gcnew System::Windows::Forms::TextBox());
			this->txtDescript = (gcnew System::Windows::Forms::TextBox());
			this->txtQty = (gcnew System::Windows::Forms::TextBox());
			this->txtCPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtSelPrice = (gcnew System::Windows::Forms::TextBox());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ItemCode";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Description";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Quantity";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Cost Price";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 125);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Selling Price";
			// 
			// txtCode
			// 
			this->txtCode->Location = System::Drawing::Point(129, 26);
			this->txtCode->Name = L"txtCode";
			this->txtCode->Size = System::Drawing::Size(100, 20);
			this->txtCode->TabIndex = 5;
			// 
			// txtDescript
			// 
			this->txtDescript->Location = System::Drawing::Point(129, 52);
			this->txtDescript->Name = L"txtDescript";
			this->txtDescript->Size = System::Drawing::Size(100, 20);
			this->txtDescript->TabIndex = 6;
			// 
			// txtQty
			// 
			this->txtQty->Location = System::Drawing::Point(129, 75);
			this->txtQty->Name = L"txtQty";
			this->txtQty->Size = System::Drawing::Size(100, 20);
			this->txtQty->TabIndex = 7;
			// 
			// txtCPrice
			// 
			this->txtCPrice->Location = System::Drawing::Point(129, 99);
			this->txtCPrice->Name = L"txtCPrice";
			this->txtCPrice->Size = System::Drawing::Size(100, 20);
			this->txtCPrice->TabIndex = 8;
			// 
			// txtSelPrice
			// 
			this->txtSelPrice->Location = System::Drawing::Point(129, 125);
			this->txtSelPrice->Name = L"txtSelPrice";
			this->txtSelPrice->Size = System::Drawing::Size(100, 20);
			this->txtSelPrice->TabIndex = 9;
			// 
			// btnSave
			// 
			this->btnSave->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnSave->ImageIndex = 1;
			this->btnSave->ImageList = this->imageList1;
			this->btnSave->Location = System::Drawing::Point(298, 26);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(85, 53);
			this->btnSave->TabIndex = 10;
			this->btnSave->Text = L"Save";
			this->btnSave->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &UpdateForm::btnSave_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"exit.png");
			this->imageList1->Images->SetKeyName(1, L"save.png");
			// 
			// btnCancel
			// 
			this->btnCancel->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnCancel->ImageIndex = 0;
			this->btnCancel->ImageList = this->imageList1;
			this->btnCancel->Location = System::Drawing::Point(298, 99);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(85, 49);
			this->btnCancel->TabIndex = 11;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &UpdateForm::btnCancel_Click);
			// 
			// UpdateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(424, 154);
			this->ControlBox = false;
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->txtSelPrice);
			this->Controls->Add(this->txtCPrice);
			this->Controls->Add(this->txtQty);
			this->Controls->Add(this->txtDescript);
			this->Controls->Add(this->txtCode);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"UpdateForm";
			this->Text = L"UpdateForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &UpdateForm::UpdateForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &UpdateForm::UpdateForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {

				cancel= gcnew String("n");
	 		try{
					icode=txtCode->Text;
					description=txtDescript->Text;
	 				qty =Convert::ToInt32(txtQty->Text);
					costPrc=Convert::ToDouble(txtCPrice->Text);
					sPrice=Convert::ToDouble(txtSelPrice->Text);
					this->Close();		
	  		}	 
		catch(FormatException ^e  )
			{
		 		MessageBox::Show("Make sure you entered correct input format","Input Data Error",MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }  
	
			 }
private: System::Void UpdateForm_Load(System::Object^  sender, System::EventArgs^  e) {
	txtCode->Text=	icode;
	txtDescript->Text=description	;
	txtQty->Text =Convert::ToString(qty) ;
	txtCPrice->Text =Convert::ToString(costPrc);
	txtSelPrice->Text =Convert::ToString(sPrice); 			 
		 }
private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
			cancel="c";
			Close();
		 }
private: System::Void UpdateForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		//cancel="c";
		 }
};
}
