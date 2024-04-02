#pragma once

namespace CLRpos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;











	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(-1, -1);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(954, 18);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(243, -1);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(89, 18);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Search For:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(500, -1);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label3->Size = System::Drawing::Size(62, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Search ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(568, -1);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(123, 18);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Advance Search";
			this->label4->Click += gcnew System::EventHandler(this, &MainForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(821, -1);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label5->Size = System::Drawing::Size(93, 18);
			this->label5->TabIndex = 6;
			this->label5->Text = L"View Orders";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(911, -1);
			this->label6->Name = L"label6";
			this->label6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label6->Size = System::Drawing::Size(42, 18);
			this->label6->TabIndex = 7;
			this->label6->Text = L"EXIT";
			this->label6->Click += gcnew System::EventHandler(this, &MainForm::label6_Click);
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(940, 17);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(13, 510);
			this->vScrollBar1->TabIndex = 8;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(-1, 17);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(245, 468);
			this->dataGridView2->TabIndex = 9;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label8);
			this->panel1->Location = System::Drawing::Point(12, 72);
			this->panel1->Name = L"panel1";
			this->panel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->panel1->Size = System::Drawing::Size(193, 48);
			this->panel1->TabIndex = 10;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel1_Paint);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label8->Location = System::Drawing::Point(48, 12);
			this->label8->Name = L"label8";
			this->label8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label8->Size = System::Drawing::Size(91, 16);
			this->label8->TabIndex = 12;
			this->label8->Text = L"APPETIZER";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(-1, -1);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(97, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Point of Sale";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label7->Location = System::Drawing::Point(9, 31);
			this->label7->Name = L"label7";
			this->label7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label7->Size = System::Drawing::Size(104, 16);
			this->label7->TabIndex = 11;
			this->label7->Text = L"CATEGORIES";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->label14);
			this->panel2->Location = System::Drawing::Point(12, 126);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(193, 48);
			this->panel2->TabIndex = 12;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label14->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label14->Location = System::Drawing::Point(48, 13);
			this->label14->Name = L"label14";
			this->label14->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label14->Size = System::Drawing::Size(82, 16);
			this->label14->TabIndex = 13;
			this->label14->Text = L"SIDE DISH";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->label13);
			this->panel3->Location = System::Drawing::Point(12, 180);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(193, 48);
			this->panel3->TabIndex = 13;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label13->Location = System::Drawing::Point(38, 15);
			this->label13->Name = L"label13";
			this->label13->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label13->Size = System::Drawing::Size(111, 16);
			this->label13->TabIndex = 13;
			this->label13->Text = L"MAIN COURSE";
			this->label13->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->label12);
			this->panel4->Location = System::Drawing::Point(12, 234);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(193, 48);
			this->panel4->TabIndex = 14;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label12->Location = System::Drawing::Point(54, 14);
			this->label12->Name = L"label12";
			this->label12->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label12->Size = System::Drawing::Size(79, 16);
			this->label12->TabIndex = 13;
			this->label12->Text = L"DESSERT";
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->label11);
			this->panel5->Location = System::Drawing::Point(12, 288);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(193, 48);
			this->panel5->TabIndex = 13;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label11->Location = System::Drawing::Point(61, 12);
			this->label11->Name = L"label11";
			this->label11->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label11->Size = System::Drawing::Size(63, 16);
			this->label11->TabIndex = 13;
			this->label11->Text = L"DRINKS";
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->label10);
			this->panel6->Location = System::Drawing::Point(12, 342);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(193, 48);
			this->panel6->TabIndex = 13;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label10->Location = System::Drawing::Point(54, 12);
			this->label10->Name = L"label10";
			this->label10->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label10->Size = System::Drawing::Size(76, 16);
			this->label10->TabIndex = 13;
			this->label10->Text = L"ADD-ONS";
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->Controls->Add(this->label9);
			this->panel7->Location = System::Drawing::Point(12, 396);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(193, 48);
			this->panel7->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label9->Location = System::Drawing::Point(53, 14);
			this->label9->Name = L"label9";
			this->label9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label9->Size = System::Drawing::Size(71, 16);
			this->label9->TabIndex = 13;
			this->label9->Text = L"CUSTOM";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label15->Location = System::Drawing::Point(262, 31);
			this->label15->Name = L"label15";
			this->label15->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label15->Size = System::Drawing::Size(87, 16);
			this->label15->TabIndex = 15;
			this->label15->Text = L"ORDERING";
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(274, 59);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 98);
			this->button1->TabIndex = 16;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(434, 59);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 98);
			this->button2->TabIndex = 17;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(594, 59);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 98);
			this->button3->TabIndex = 18;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(274, 180);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(137, 98);
			this->button4->TabIndex = 19;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(434, 180);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(137, 98);
			this->button5->TabIndex = 20;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(594, 180);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(137, 98);
			this->button6->TabIndex = 21;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(434, 302);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(137, 98);
			this->button7->TabIndex = 22;
			this->button7->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(763, 17);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(179, 468);
			this->dataGridView3->TabIndex = 23;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView3_CellContentClick);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label16->Location = System::Drawing::Point(782, 31);
			this->label16->Name = L"label16";
			this->label16->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label16->Size = System::Drawing::Size(72, 16);
			this->label16->TabIndex = 24;
			this->label16->Text = L"Customer";
			this->label16->Click += gcnew System::EventHandler(this, &MainForm::label16_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				67.32674F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				32.67327F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				63)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(772, 126);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 47.86325F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 52.13675F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(165, 142);
			this->tableLayoutPanel1->TabIndex = 25;
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Location = System::Drawing::Point(780, 58);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(149, 22);
			this->domainUpDown1->TabIndex = 26;
			this->domainUpDown1->Text = L"Table #1";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label20->Location = System::Drawing::Point(841, 104);
			this->label20->Name = L"label20";
			this->label20->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label20->Size = System::Drawing::Size(30, 16);
			this->label20->TabIndex = 30;
			this->label20->Text = L"Qty";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label18->Location = System::Drawing::Point(777, 104);
			this->label18->Name = L"label18";
			this->label18->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label18->Size = System::Drawing::Size(36, 16);
			this->label18->TabIndex = 31;
			this->label18->Text = L"Item";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label17->Location = System::Drawing::Point(878, 104);
			this->label17->Name = L"label17";
			this->label17->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label17->Size = System::Drawing::Size(58, 16);
			this->label17->TabIndex = 32;
			this->label17->Text = L"Amount";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				67.32674F)));
			this->tableLayoutPanel2->Location = System::Drawing::Point(877, 274);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 47.86325F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 22)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 38)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(60, 77);
			this->tableLayoutPanel2->TabIndex = 33;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label19->Location = System::Drawing::Point(815, 274);
			this->label19->Name = L"label19";
			this->label19->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label19->Size = System::Drawing::Size(56, 16);
			this->label19->TabIndex = 34;
			this->label19->Text = L"Subtotal";
			this->label19->Click += gcnew System::EventHandler(this, &MainForm::label19_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label21->Location = System::Drawing::Point(841, 290);
			this->label21->Name = L"label21";
			this->label21->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label21->Size = System::Drawing::Size(30, 16);
			this->label21->TabIndex = 35;
			this->label21->Text = L"Tax";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label22->Location = System::Drawing::Point(828, 320);
			this->label22->Name = L"label22";
			this->label22->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label22->Size = System::Drawing::Size(43, 16);
			this->label22->TabIndex = 36;
			this->label22->Text = L"Total";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(954, 486);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->domainUpDown1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->vScrollBar1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void webBrowser1_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
	}
	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
