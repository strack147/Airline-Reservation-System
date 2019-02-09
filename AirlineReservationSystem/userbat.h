#pragma once

namespace AirlineReservationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for userbat
	/// </summary>
	public ref class userbat : public System::Windows::Forms::Form
	{
	public:
		userbat(void)
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
		~userbat()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



















	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  at_txt;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  tp_txt;
	private: System::Windows::Forms::Label^  tp_lbl;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  dest_lbl;
	private: System::Windows::Forms::Label^  sp_lbl;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ComboBox^  datebox;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel2;


	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::ComboBox^  comboBox4;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(userbat::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->at_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tp_txt = (gcnew System::Windows::Forms::TextBox());
			this->tp_lbl = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dest_lbl = (gcnew System::Windows::Forms::Label());
			this->sp_lbl = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->datebox = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->at_txt);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->tp_txt);
			this->panel1->Controls->Add(this->tp_lbl);
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->dest_lbl);
			this->panel1->Controls->Add(this->sp_lbl);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->datebox);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(76, 43);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(444, 370);
			this->panel1->TabIndex = 34;
			// 
			// at_txt
			// 
			this->at_txt->Location = System::Drawing::Point(169, 254);
			this->at_txt->Name = L"at_txt";
			this->at_txt->ReadOnly = true;
			this->at_txt->Size = System::Drawing::Size(106, 20);
			this->at_txt->TabIndex = 46;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(178, 238);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 13);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Available Tickets";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(169, 80);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 40);
			this->button2->TabIndex = 44;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &userbat::button2_Click_1);
			// 
			// tp_txt
			// 
			this->tp_txt->Location = System::Drawing::Point(169, 198);
			this->tp_txt->Name = L"tp_txt";
			this->tp_txt->ReadOnly = true;
			this->tp_txt->Size = System::Drawing::Size(106, 20);
			this->tp_txt->TabIndex = 43;
			// 
			// tp_lbl
			// 
			this->tp_lbl->AutoSize = true;
			this->tp_lbl->BackColor = System::Drawing::Color::Transparent;
			this->tp_lbl->Location = System::Drawing::Point(188, 182);
			this->tp_lbl->Name = L"tp_lbl";
			this->tp_lbl->Size = System::Drawing::Size(64, 13);
			this->tp_lbl->TabIndex = 42;
			this->tp_lbl->Text = L"Ticket Price";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(26) {
				L"ATHINA", L"ALEKSANDROUPOLI", L"ASTYPALAIA", L"ZAKYNTHOS",
					L"IRAKLIO", L"THESSALONIKI", L"IKARIA", L"KARPATHOS", L"KASOS", L"KERKYRA", L"KEFALONIA", L"KYTHIRA", L"KWS", L"MILOS", L"MYKONOS",
					L"MYTILINI", L"NAXOS", L"PAROS", L"PREVEZA", L"RODOS", L"SAMOS", L"SANTORINI", L"SITEIA", L"SKIATHOS", L"SYROS", L"XIOS"
			});
			this->comboBox2->Location = System::Drawing::Point(279, 42);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(102, 21);
			this->comboBox2->TabIndex = 41;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(26) {
				L"ATHINA", L"ALEKSANDROUPOLI", L"ASTYPALAIA", L"ZAKYNTHOS",
					L"IRAKLIO", L"THESSALONIKI", L"IKARIA", L"KARPATHOS", L"KASOS", L"KERKYRA", L"KEFALONIA", L"KYTHIRA", L"KWS", L"MILOS", L"MYKONOS",
					L"MYTILINI", L"NAXOS", L"PAROS", L"PREVEZA", L"RODOS", L"SAMOS", L"SANTORINI", L"SITEIA", L"SKIATHOS", L"SYROS", L"XIOS"
			});
			this->comboBox1->Location = System::Drawing::Point(63, 42);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(102, 21);
			this->comboBox1->TabIndex = 40;
			// 
			// dest_lbl
			// 
			this->dest_lbl->AutoSize = true;
			this->dest_lbl->BackColor = System::Drawing::Color::Transparent;
			this->dest_lbl->Location = System::Drawing::Point(299, 26);
			this->dest_lbl->Name = L"dest_lbl";
			this->dest_lbl->Size = System::Drawing::Size(60, 13);
			this->dest_lbl->TabIndex = 39;
			this->dest_lbl->Text = L"Destination";
			// 
			// sp_lbl
			// 
			this->sp_lbl->AutoSize = true;
			this->sp_lbl->BackColor = System::Drawing::Color::Transparent;
			this->sp_lbl->Location = System::Drawing::Point(87, 26);
			this->sp_lbl->Name = L"sp_lbl";
			this->sp_lbl->Size = System::Drawing::Size(56, 13);
			this->sp_lbl->TabIndex = 38;
			this->sp_lbl->Text = L"Start Point";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(177, 321);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 37;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &userbat::button4_Click_1);
			// 
			// datebox
			// 
			this->datebox->FormattingEnabled = true;
			this->datebox->Location = System::Drawing::Point(162, 142);
			this->datebox->Name = L"datebox";
			this->datebox->Size = System::Drawing::Size(121, 21);
			this->datebox->TabIndex = 36;
			this->datebox->SelectedIndexChanged += gcnew System::EventHandler(this, &userbat::datebox_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(203, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Date";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(177, 293);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Buy";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &userbat::button1_Click_1);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->comboBox4);
			this->panel2->Controls->Add(this->comboBox3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Controls->Add(this->textBox8);
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Location = System::Drawing::Point(13, 13);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(589, 446);
			this->panel2->TabIndex = 35;
			this->panel2->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(450, 182);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(30, 13);
			this->label16->TabIndex = 58;
			this->label16->Text = L"Date";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(414, 199);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(100, 21);
			this->comboBox4->TabIndex = 57;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &userbat::comboBox4_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(83, 199);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(100, 21);
			this->comboBox3->TabIndex = 54;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &userbat::comboBox3_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(117, 183);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 13);
			this->label4->TabIndex = 53;
			this->label4->Text = L"Date";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Location = System::Drawing::Point(420, 230);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(88, 13);
			this->label13->TabIndex = 51;
			this->label13->Text = L"Available Tickets";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Location = System::Drawing::Point(88, 230);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(88, 13);
			this->label12->TabIndex = 50;
			this->label12->Text = L"Available Tickets";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Location = System::Drawing::Point(437, 54);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 13);
			this->label11->TabIndex = 49;
			this->label11->Text = L"TICKET 2";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Location = System::Drawing::Point(449, 130);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 13);
			this->label10->TabIndex = 48;
			this->label10->Text = L"Price";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Location = System::Drawing::Point(489, 84);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 13);
			this->label9->TabIndex = 47;
			this->label9->Text = L"Destination";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(371, 84);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 13);
			this->label8->TabIndex = 46;
			this->label8->Text = L"Start Point";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(115, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 13);
			this->label7->TabIndex = 45;
			this->label7->Text = L"Price";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(164, 85);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 13);
			this->label6->TabIndex = 44;
			this->label6->Text = L"Destination";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(43, 85);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 43;
			this->label5->Text = L"Start Point";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(414, 146);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 42;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(83, 146);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 41;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(469, 101);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 40;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(350, 101);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 39;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(141, 101);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 38;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(20, 101);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 37;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Location = System::Drawing::Point(104, 54);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 13);
			this->label14->TabIndex = 36;
			this->label14->Text = L"TICKET 1";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(267, 357);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 28);
			this->button5->TabIndex = 35;
			this->button5->Text = L"Cancel";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &userbat::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(267, 323);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 28);
			this->button6->TabIndex = 34;
			this->button6->Text = L"Buy";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &userbat::button6_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(414, 246);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 33;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(83, 246);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 32;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(254, 297);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 31;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Location = System::Drawing::Point(274, 281);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(56, 13);
			this->label15->TabIndex = 30;
			this->label15->Text = L"Final Price";
			// 
			// userbat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(614, 471);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(630, 510);
			this->Name = L"userbat";
			this->Text = L"Buy a Ticket";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
/*--------------------------SEARCH BUTTON--------------------------------------------------*/
String^ code;
String^ code2;
String^ code3;
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (this->comboBox1->Text == "" || this->comboBox2->Text == "") {
		MessageBox::Show("You have to select Start Point and Destination.");
	}

	this->datebox->Items->Clear();
	String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from database.route where spoint='" + this->comboBox1->Text + "'and epoint='" + this->comboBox2->Text + "';", conDatabase);
	MySqlDataReader^ myReader;
	String^ Vprice;
	try
	{

		conDatabase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read()) {
			code = myReader->GetString("rcode");
			Vprice = myReader->GetString("ticketpric");
		}
		this->tp_txt->Text = Vprice;
		myReader->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}


	MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("select * from database.routeexc where rcode='" + code + "';", conDatabase2);
	MySqlDataReader^ myReader2;

	try
	{

		conDatabase2->Open();
		myReader2 = cmdDataBase2->ExecuteReader();

		while (myReader2->Read()) {
			String^ Vname;
			Vname = myReader2->GetString("date");
			datebox->Items->Add(Vname);
		}
		myReader2->Close();

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

	if (this->tp_txt->Text == "") {
		int count2=0;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase21 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase21 = gcnew MySqlCommand("select * from database.route where spoint='" + this->comboBox1->Text + "';", conDatabase21);
		MySqlDataReader^ myReader21;

		String^ Vprice2;
		String^ Dateexc;
		String^ name1;
		try
		{

			conDatabase21->Open();
			myReader21 = cmdDataBase21->ExecuteReader();

			while (myReader21->Read()) {
				code2 = myReader21->GetString("rcode");
				Vprice2 = myReader21->GetString("ticketpric");
				Dateexc = myReader21->GetString("rday");
				name1 = myReader21->GetString("epoint");
			}
			myReader21->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

		MySqlConnection^ conDatabase22 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase22 = gcnew MySqlCommand("select * from database.route where epoint='" + this->comboBox2->Text + "'and rday='" + Dateexc + "';", conDatabase22);
		MySqlDataReader^ myReader22;
		
		String^ Vprice3;
		String^ name2;
		try
		{

			conDatabase22->Open();
			myReader22 = cmdDataBase22->ExecuteReader();

			while (myReader22->Read()) {
				code3 = myReader22->GetString("rcode");
				Vprice3 = myReader22->GetString("ticketpric");
				name2 = myReader22->GetString("spoint");
				count2++;
			}
			myReader22->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		if (count2 > 0) {
			this->panel1->Visible = false;
			this->panel2->Visible = true;
			this->textBox4->Text = ""+ comboBox1->Text +"";
			this->textBox7->Text = "" + comboBox2->Text + "";
			this->textBox5->Text = "" + name1 + "";
			this->textBox6->Text = "" + name2 + "";
			this->textBox8->Text = "" + Vprice2 + "";
			this->textBox9->Text = "" + Vprice3 + "";

			int num1, num2,num3;
			num1 = Convert::ToInt32(Vprice2);
			num2 = Convert::ToInt32(Vprice3);
			num3 = num1 + num2;
			this->textBox1->Text = "" + num3 + "";

			/*--------------------------------------------------------------------------------------*/
			MySqlConnection^ conDatabase29 = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase29 = gcnew MySqlCommand("select * from database.routeexc where rcode='" + code2 + "';", conDatabase29);
			MySqlDataReader^ myReader29;

			try
			{

				conDatabase29->Open();
				myReader29 = cmdDataBase29->ExecuteReader();

				while (myReader29->Read()) {
					String^ Vname9;
					Vname9 = myReader29->GetString("date");
					comboBox3->Items->Add(Vname9);
				}
				myReader29->Close();

			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}

			MySqlConnection^ conDatabase291 = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase291 = gcnew MySqlCommand("select * from database.routeexc where rcode='" + code3 + "';", conDatabase291);
			MySqlDataReader^ myReader291;

			try
			{

				conDatabase291->Open();
				myReader291 = cmdDataBase291->ExecuteReader();

				while (myReader291->Read()) {
					String^ Vname91;
					Vname91 = myReader291->GetString("date");
					comboBox4->Items->Add(Vname91);
				}
				myReader291->Close();

			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}


			/*--------------------------------------------------------------------------------------*/
		}
		else {
			if(comboBox1->Text!="" && comboBox2->Text!=""){
			MessageBox::Show("There are not Tickets for this Route.");
			}
		}
			
	}
}


private: System::Void datebox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ comboval = datebox->Text;
	String^ Vmax;

	String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
	MySqlConnection^ conDatabase3 = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("select * from database.routeexc where date='" + comboval + "' and rcode='"+code+"';", conDatabase3);
	MySqlDataReader^ myReader3;
	try
	{

		conDatabase3->Open();
		myReader3 = cmdDataBase3->ExecuteReader();

		while (myReader3->Read()) {
			Vmax = myReader3->GetString("max");
			at_txt->Text = Vmax;
		}


		myReader3->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}


/*--------------------------BUY BUTTON--------------------------------------------------*/
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	int cou = 0;
	if (this->comboBox1->Text == "" || this->comboBox2->Text == "" || this->datebox->Text == "" || this->tp_txt->Text == "" || this->at_txt->Text == "" || this->at_txt->Text == "0") {
		MessageBox::Show("Error when trying to buy ticket. Please complete all the fields correctly or contact us.");
		cou++;
	}

	if (cou == 0) {
		int^ Vcid;
		String^ Vus;
		int^ Vexcid;

		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase4 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase4 = gcnew MySqlCommand("select * from database.customers where online=1;", conDatabase4);
		MySqlDataReader^ myReader4;
		MySqlCommand^ cmdDataBase5 = gcnew MySqlCommand("select * from database.routeexc where date='" + this->datebox->Text + "'and rcode='"+code+"';", conDatabase4);
		MySqlDataReader^ myReader5;
		try
		{

			conDatabase4->Open();
			myReader4 = cmdDataBase4->ExecuteReader();

			while (myReader4->Read()) {
				Vcid = myReader4->GetInt32("id");
				Vus = myReader4->GetString("username");
			}
			myReader4->Close();

			myReader5 = cmdDataBase5->ExecuteReader();
			while (myReader5->Read()) {
				Vexcid = myReader5->GetInt32("id");
			}
			myReader5->Close();


		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

		MySqlConnection^ conDatabase6 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase6 = gcnew MySqlCommand("insert into database.tickets (customerid,excrouteid,username,online) values (" + Vcid + "," + Vexcid + ",'" + Vus + "',1);", conDatabase6);
		MySqlDataReader^ myReader6;
		try
		{
			conDatabase6->Open();
			myReader6 = cmdDataBase6->ExecuteReader();
			myReader6->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

		String^ Vmax2;
		int number;

		MySqlConnection^ conDatabase7 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase7 = gcnew MySqlCommand("select * from database.routeexc where date='" + this->datebox->Text + "'and rcode='" + code + "' ;", conDatabase7);
		MySqlDataReader^ myReader7;
		try
		{

			conDatabase7->Open();
			myReader7 = cmdDataBase7->ExecuteReader();

			while (myReader7->Read()) {
				Vmax2 = myReader7->GetString("max");
				number = Convert::ToInt32(Vmax2);
				number--;
			}


			myReader7->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

		MySqlConnection^ conDatabase8 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase8 = gcnew MySqlCommand("update database.routeexc set max='" + number + "' where date='" + this->datebox->Text + "'and rcode='" + code + "';", conDatabase7);
		MySqlDataReader^ myReader8;
		try
		{
			conDatabase8->Open();
			myReader8 = cmdDataBase8->ExecuteReader();
			myReader8->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		MessageBox::Show("Thank you for your Purchase!");
		this->comboBox1->Text = "";
		this->comboBox2->Text = "";
		this->datebox->Text = "";
		this->datebox->Items->Clear();
		this->tp_txt->Text = "";
		this->at_txt->Text = "";
	}
}



private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}

/*--------------------------------------------------------------------------PANEL 2--------------------------------------------------------------------------*/
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	int cou2 = 0;
	if (this->textBox4->Text == "" || this->textBox5->Text == "" || this->textBox2->Text == "" || this->textBox8->Text == "" || this->textBox1->Text == "" || this->comboBox3->Text == "" || this->comboBox4->Text == "" || this->textBox3->Text == "" || this->textBox6->Text == "" || this->textBox9->Text == "" || this->textBox7->Text == "" || this->textBox2->Text == "0" || this->textBox3->Text == "0") {
		MessageBox::Show("Error when trying to buy ticket. Please try to complete all the fields or contact us.");
		cou2++;
	}


	if (cou2 == 0) {
		

		/*TICKET2*/
		MessageBox::Show("" + code2 + "");
		MessageBox::Show("" + code3 + "");

		int^ Vcid2;
		String^ Vus2;
		int^ Vexcid2;

		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase42 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase42 = gcnew MySqlCommand("select * from database.customers where online=1;", conDatabase42);
		MySqlDataReader^ myReader42;
		MySqlCommand^ cmdDataBase52 = gcnew MySqlCommand("select * from database.routeexc where date='" + this->comboBox3->Text + "' and rcode='" + code2 + "';", conDatabase42);
		MySqlDataReader^ myReader52;
		try
		{

			conDatabase42->Open();
			myReader42 = cmdDataBase42->ExecuteReader();

			while (myReader42->Read()) {
				Vcid2 = myReader42->GetInt32("id");
				Vus2 = myReader42->GetString("username");
			}
			myReader42->Close();

			myReader52 = cmdDataBase52->ExecuteReader();
			while (myReader52->Read()) {
				Vexcid2 = myReader52->GetInt32("id");
			}
			myReader52->Close();


		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

		MySqlConnection^ conDatabase62 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase62 = gcnew MySqlCommand("insert into database.tickets (customerid,excrouteid,username,online) values (" + Vcid2 + "," + Vexcid2 + ",'" + Vus2 + "',1);", conDatabase62);
		MySqlDataReader^ myReader62;
		try
		{
			conDatabase62->Open();
			myReader62 = cmdDataBase62->ExecuteReader();
			myReader62->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

		String^ Vmax32;
		int number32;

		MySqlConnection^ conDatabase72 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase72 = gcnew MySqlCommand("select * from database.routeexc where date='" + this->comboBox3->Text + "'and rcode='" + code2 + "' ;", conDatabase72);
		MySqlDataReader^ myReader72;
		try
		{

			conDatabase72->Open();
			myReader72 = cmdDataBase72->ExecuteReader();

			while (myReader72->Read()) {
				Vmax32 = myReader72->GetString("max");
				number32 = Convert::ToInt32(Vmax32);
				number32--;
			}


			myReader72->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

		MySqlConnection^ conDatabase82 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase82 = gcnew MySqlCommand("update database.routeexc set max='" + number32 + "' where date='" + this->comboBox3->Text + "'and rcode='" + code2 + "';", conDatabase72);
		MySqlDataReader^ myReader82;
		try
		{
			conDatabase82->Open();
			myReader82 = cmdDataBase82->ExecuteReader();
			myReader82->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

		/*TICKET2 (2)*/
		
		int^ Vcid21;
		String^ Vus21;
		int^ Vexcid21;
		MySqlConnection^ conDatabase421 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase421 = gcnew MySqlCommand("select * from database.customers where online=1;", conDatabase421);
		MySqlDataReader^ myReader421;
		MySqlCommand^ cmdDataBase521 = gcnew MySqlCommand("select * from database.routeexc where date='" + this->comboBox4->Text + "' and rcode='" + code3 + "';", conDatabase421);
		MySqlDataReader^ myReader521;
		try
		{

			conDatabase421->Open();
			myReader421 = cmdDataBase421->ExecuteReader();

			while (myReader421->Read()) {
				Vcid21 = myReader421->GetInt32("id");
				Vus21 = myReader421->GetString("username");
			}
			myReader421->Close();

			myReader521 = cmdDataBase521->ExecuteReader();
			while (myReader521->Read()) {
				Vexcid21 = myReader521->GetInt32("id");
			}
			myReader521->Close();


		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

		MySqlConnection^ conDatabase621 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase621 = gcnew MySqlCommand("insert into database.tickets (customerid,excrouteid,username,online) values (" + Vcid21 + "," + Vexcid21 + ",'" + Vus21 + "',1);", conDatabase621);
		MySqlDataReader^ myReader621;
		try
		{
			conDatabase621->Open();
			myReader621 = cmdDataBase621->ExecuteReader();
			myReader621->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

		String^ Vmax321;
		int number321;

		MySqlConnection^ conDatabase721 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase721 = gcnew MySqlCommand("select * from database.routeexc where date='" + this->comboBox4->Text + "'and rcode='" + code3 + "' ;", conDatabase721);
		MySqlDataReader^ myReader721;
		try
		{

			conDatabase721->Open();
			myReader721 = cmdDataBase721->ExecuteReader();

			while (myReader721->Read()) {
				Vmax321 = myReader721->GetString("max");
				number321 = Convert::ToInt32(Vmax321);
				number321--;
			}


			myReader721->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

		MySqlConnection^ conDatabase821 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase821 = gcnew MySqlCommand("update database.routeexc set max='" + number321 + "' where date='" + this->comboBox4->Text + "'and rcode='" + code3 + "';", conDatabase721);
		MySqlDataReader^ myReader821;
		try
		{
			conDatabase821->Open();
			myReader821 = cmdDataBase821->ExecuteReader();
			myReader821->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

		/*END TICKET2*/

		MessageBox::Show("Thank you for your Purchase!");
		this->textBox4->Text = "";
		this->textBox5->Text = "";
		this->textBox2->Text = "";
		this->textBox8->Text = "";
		this->textBox1->Text = "";
		this->comboBox1->Text = "";
		this->comboBox2->Text = "";
		this->comboBox3->Text = "";
		this->comboBox4->Text = "";
		this->comboBox3->Items->Clear();
		this->comboBox4->Items->Clear();
		this->textBox3->Text = "";
		this->textBox6->Text = "";
		this->textBox9->Text = "";
		this->textBox7->Text = "";
		this->panel2->Visible = false;
		this->panel1->Visible = true;
	}
}

private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ comboval2 = comboBox3->Text;
	String^ Vmax5;

	String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
	MySqlConnection^ conDatabase32 = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase32 = gcnew MySqlCommand("select * from database.routeexc where date='" + comboval2 + "' and rcode='"+code2+"' ;", conDatabase32);
	MySqlDataReader^ myReader32;
	try
	{

		conDatabase32->Open();
		myReader32= cmdDataBase32->ExecuteReader();

		while (myReader32->Read()) {
			Vmax5 = myReader32->GetString("max");
			textBox2->Text = Vmax5;
		}


		myReader32->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}

private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ comboval21 = comboBox4->Text;
	String^ Vmax21;

	String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
	MySqlConnection^ conDatabase321 = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase321 = gcnew MySqlCommand("select * from database.routeexc where date='" + comboval21 + "' and rcode='"+code3+"' ;", conDatabase321);
	MySqlDataReader^ myReader321;
	try
	{

		conDatabase321->Open();
		myReader321 = cmdDataBase321->ExecuteReader();

		while (myReader321->Read()) {
			Vmax21 = myReader321->GetString("max");
			textBox3->Text = Vmax21;
		}


		myReader321->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->comboBox1->Text = "";
	this->comboBox2->Text = "";
	this->datebox->Text = "";
	this->datebox->Items->Clear();
	this->tp_txt->Text = "";
	this->at_txt->Text = "";

	this->textBox4->Text = "";
	this->textBox5->Text = "";
	this->textBox2->Text = "";
	this->textBox8->Text = "";
	this->textBox1->Text = "";
	this->comboBox3->Text = "";
	this->comboBox4->Text = "";
	this->comboBox3->Items->Clear();
	this->comboBox4->Items->Clear();
	this->textBox3->Text = "";
	this->textBox6->Text = "";
	this->textBox9->Text = "";
	this->textBox7->Text = "";

	this->panel2->Visible = false;
	this->panel1->Visible = true;
}
/*-------------------------------------------------------------------------------------------------------------------------------------------------------------*/



};
}