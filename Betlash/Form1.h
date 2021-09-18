#pragma once

namespace Betlash {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: Bunifu::Framework::UI::BunifuDragControl^  bunifuDragControl1;
	private: System::Windows::Forms::Panel^  panel1;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel1;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton1;
	private: System::Windows::Forms::GroupBox^  groupBox1;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label3;





	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: Bunifu::Framework::UI::BunifuCustomLabel^  bunifuCustomLabel2;







	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->bunifuDragControl1 = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuCustomLabel2 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuImageButton1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->panel2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// bunifuDragControl1
			// 
			this->bunifuDragControl1->Fixed = true;
			this->bunifuDragControl1->Horizontal = true;
			this->bunifuDragControl1->TargetControl = this->panel1;
			this->bunifuDragControl1->Vertical = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel1->Controls->Add(this->bunifuCustomLabel2);
			this->panel1->Controls->Add(this->bunifuCustomLabel1);
			this->panel1->Controls->Add(this->bunifuImageButton1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(426, 34);
			this->panel1->TabIndex = 0;
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel2->Location = System::Drawing::Point(245, 4);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(146, 25);
			this->bunifuCustomLabel2->TabIndex = 2;
			this->bunifuCustomLabel2->Text = L"Version : 1.0";
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bunifuCustomLabel1->Location = System::Drawing::Point(3, 4);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(91, 25);
			this->bunifuCustomLabel1->TabIndex = 1;
			this->bunifuCustomLabel1->Text = L"Betlash";
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Red;
			this->bunifuImageButton1->Dock = System::Windows::Forms::DockStyle::Right;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(397, 0);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(29, 34);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->bunifuImageButton1->TabIndex = 0;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &Form1::bunifuImageButton1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->groupBox1->Location = System::Drawing::Point(12, 40);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(402, 85);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Varaqlash";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->numericUpDown2->Location = System::Drawing::Point(228, 49);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(154, 20);
			this->numericUpDown2->TabIndex = 2;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::numericUpDown2_KeyDown);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->numericUpDown1->Location = System::Drawing::Point(19, 49);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(154, 20);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(276, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Oxirgi";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(39, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Boshlang`ich";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Kitob shaklida", L"Tartiblangan (2 tomonlama)"});
			this->comboBox1->Location = System::Drawing::Point(209, 131);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(173, 21);
			this->comboBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(93, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Holati : ";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->ForeColor = System::Drawing::Color::Brown;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button1->Location = System::Drawing::Point(209, 158);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(173, 31);
			this->button1->TabIndex = 4;
			this->button1->Text = L"HISOBLASH";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->groupBox2);
			this->panel2->Controls->Add(this->richTextBox2);
			this->panel2->Controls->Add(this->richTextBox1);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(12, 195);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(402, 321);
			this->panel2->TabIndex = 5;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->groupBox2->Location = System::Drawing::Point(0, 236);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(402, 85);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Qo`shimcha varaq";
			this->groupBox2->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label10->Location = System::Drawing::Point(277, 36);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(65, 13);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Right to Left";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(54, 36);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 13);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Right to Left";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(228, 49);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(162, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(10, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(162, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(218, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(178, 20);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Varaqning orqa qismi";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(6, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(166, 20);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Varaqning old qismi";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(29, 155);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(341, 75);
			this->richTextBox2->TabIndex = 14;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(29, 58);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(341, 75);
			this->richTextBox1->TabIndex = 13;
			this->richTextBox1->Text = L"";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(25, 132);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(178, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Varaqning orqa qismi";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(25, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(166, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Varaqning old qismi";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(25, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Jami : ";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(426, 528);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuImageButton1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 comboBox1->SelectedIndex=0;
			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 numericUpDown1->Focus();
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 numericUpDown2->Focus();
		 }
private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 comboBox1->Focus();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text="";textBox2->Text="";
			 richTextBox1->Text=""; richTextBox2->Text="";
			 if(comboBox1->SelectedIndex==0){
				 //combobox ifbegin
			 int a=Convert::ToInt32(numericUpDown1->Text),b=Convert::ToInt32(numericUpDown2->Text);
			 if (a>=b){
				 MessageBox::Show("Varaqlar raqamini kiritishda xatolik!","Dastur");
			 } else{
				 Int32 l=b-a+1,m=l%4;
				 label4->Text="Jami : "+Convert::ToString(Math::Ceiling(l/4.0))+"ta varaq.";
			 if(m==0){
				 groupBox2->Visible=false;
			 int acnt=a,bcnt=b;
			 richTextBox1->Text=Convert::ToString(bcnt)+","+Convert::ToString(acnt);

			 for (int i=2;i<=l/4;i++){
				 bcnt-=2; acnt+=2;
				 richTextBox1->Text+=","+Convert::ToString(bcnt)+","+Convert::ToString(acnt);
			 }
			 bcnt-=2; acnt+=2;
			 richTextBox2->Text=Convert::ToString(bcnt)+","+Convert::ToString(acnt);
			 for (int i=l/4+1;i<l/2;i++){
				 bcnt-=2; acnt+=2;
				 richTextBox2->Text+=","+Convert::ToString(bcnt)+","+Convert::ToString(acnt);
			 }
			 }else
			 if(m==1){
				 groupBox2->Visible=true;
				 label10->Text="";
				 textBox1->Text=Convert::ToString(a);
				 textBox2->Text="";
				 int acnt=a+1,bcnt=b;
				 if(l>4)
				 richTextBox1->Text=Convert::ToString(bcnt)+","+Convert::ToString(acnt);

			 for (int i=2;i<=l/4;i++){
				 bcnt-=2; acnt+=2;
				 richTextBox1->Text+=","+Convert::ToString(bcnt)+","+Convert::ToString(acnt);
			 }
			 bcnt-=2; acnt+=2;
			 if(l>4)
			 richTextBox2->Text=Convert::ToString(bcnt)+","+Convert::ToString(acnt);
			 for (int i=l/4+1;i<l/2;i++){
				 bcnt-=2; acnt+=2;
				 richTextBox2->Text+=","+Convert::ToString(bcnt)+","+Convert::ToString(acnt);
			 }
			 }else
			 if(m==2){
				 groupBox2->Visible=true;
				 label10->Text="Left to Right";
				 textBox1->Text=Convert::ToString(a);
				 textBox2->Text=Convert::ToString(a+1);
				 int acnt=a+2,bcnt=b;
				 if(l>4)
			     richTextBox1->Text=Convert::ToString(bcnt)+","+Convert::ToString(acnt);
			 for (int i=2;i<=l/4;i++){
				 bcnt-=2; acnt+=2;
				 richTextBox1->Text+=","+Convert::ToString(bcnt)+","+Convert::ToString(acnt);
			 }
			 bcnt-=2; acnt+=2;
			 if(l>4)
			 richTextBox2->Text=Convert::ToString(bcnt)+","+Convert::ToString(acnt);
			 for (int i=l/4+1;i<l/2-1;i++){
				 bcnt-=2; acnt+=2;
				 richTextBox2->Text+=","+Convert::ToString(bcnt)+","+Convert::ToString(acnt);
			 }
			 }else
			 if(m==3){
				 groupBox2->Visible=true;
				 label10->Text="Right to Left";
				 textBox1->Text=Convert::ToString(a);
				 textBox2->Text=Convert::ToString(b)+","+Convert::ToString(a+1);
				 int acnt=a+2,bcnt=b-1;
				 if(l>4)
				 richTextBox1->Text=Convert::ToString(bcnt)+","+Convert::ToString(acnt);

			 for (int i=2;i<=l/4;i++){
				 bcnt-=2; acnt+=2;
				 richTextBox1->Text+=","+Convert::ToString(bcnt)+","+Convert::ToString(acnt);
			 }
			 bcnt-=2; acnt+=2;
			 if(l>4)
			 richTextBox2->Text=Convert::ToString(bcnt)+","+Convert::ToString(acnt);
			 for (int i=l/4+1;i<l/2-1;i++){
				 bcnt-=2; acnt+=2;
				 richTextBox2->Text+=","+Convert::ToString(bcnt)+","+Convert::ToString(acnt);
			 } 
			 }
			 }
			 }
			 //combobox ifend
			 else{
			 //combobox elsebegin
				 groupBox2->Visible=false;
				 int a=Convert::ToInt32(numericUpDown1->Text),b=Convert::ToInt32(numericUpDown2->Text);
			 if (a>b){
				 MessageBox::Show("Varaqlar raqamini kiritishda xatolik!","Dastur");
			 } else{
				 if (a==b)richTextBox1->Text=Convert::ToString(a);

				 Int32 l=b-a+1;
				 label4->Text="Jami : "+Convert::ToString(Math::Ceiling(l/4.0))+"ta varaq.";
				int acnt=a,bcnt=b; 
				if (l>1) richTextBox1->Text=Convert::ToString(a)+","+Convert::ToString(a+1);

				while (acnt<bcnt-3)
				{
					acnt+=4;
					richTextBox1->Text+=","+Convert::ToString(acnt);
					if (acnt+1<=bcnt) richTextBox1->Text+=","+Convert::ToString(acnt+1);
				}
				////////////////////////////////
				acnt=a+2;bcnt=b;
				int cnt=-1;
				int arr[10001];
				while (acnt<bcnt)
				{
					cnt++;
					arr[cnt]=acnt;
					cnt++;
					//MessageBox::Show(Convert::ToString(arr[cnt-1]));
					arr[cnt]=acnt+1;
					//MessageBox::Show(Convert::ToString(arr[cnt]));
					acnt+=4;
				}
				if (l%4==3){cnt++; arr[cnt]=b;}
				richTextBox2->Text=Convert::ToString(arr[cnt]);
				for (int i = cnt-1; i >= 0; i--)
				{
					//MessageBox::Show(Convert::ToString(arr[i]));
					richTextBox2->Text+=","+Convert::ToString(arr[i]);
				}
				
				
					
				////////////////////////////////////
			 }
			 if (a==b || b-a+1==2) richTextBox2->Text="";
			 //combobox elseend
			 }
		}
private: System::Void numericUpDown2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode.ToString()->Equals("Return"))
				 button1_Click(sender,e);
		 }
};
}

