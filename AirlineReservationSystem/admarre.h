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
	/// Summary for admarre
	/// </summary>
	public ref class admarre : public System::Windows::Forms::Form
	{
	public:
		admarre(void)
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
		~admarre()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected:
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  rc_txt;
	private: System::Windows::Forms::TextBox^  p1_txt;
	private: System::Windows::Forms::TextBox^  p2_txt;



	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::TextBox^  a1_txt;
	private: System::Windows::Forms::TextBox^  a2_txt;
	private: System::Windows::Forms::TextBox^  a3_txt;
	private: System::Windows::Forms::TextBox^  a4_txt;




	private: System::Windows::Forms::TextBox^  max_txt;

	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::DataGridView^  dataGridView4;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::DataGridView^  dataGridView5;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  id_txt;

	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(admarre::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->rc_txt = (gcnew System::Windows::Forms::TextBox());
			this->p1_txt = (gcnew System::Windows::Forms::TextBox());
			this->p2_txt = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->a1_txt = (gcnew System::Windows::Forms::TextBox());
			this->a2_txt = (gcnew System::Windows::Forms::TextBox());
			this->a3_txt = (gcnew System::Windows::Forms::TextBox());
			this->a4_txt = (gcnew System::Windows::Forms::TextBox());
			this->max_txt = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->id_txt = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(679, 28);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Pilots";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &admarre::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(679, 261);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Airhosts";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &admarre::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(17, 363);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Route Code";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(30, 386);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Date";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(23, 412);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"PIlot 1 (ID)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(25, 438);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Pilot 2 (ID)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(231, 360);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Airhost 1 (ID)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(231, 386);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Airhost 2 (ID)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(231, 414);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Airhost 3 (ID)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(231, 442);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Airhost 4 (ID)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Location = System::Drawing::Point(431, 360);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Max Tickets";
			// 
			// rc_txt
			// 
			this->rc_txt->Location = System::Drawing::Point(96, 357);
			this->rc_txt->Name = L"rc_txt";
			this->rc_txt->Size = System::Drawing::Size(100, 20);
			this->rc_txt->TabIndex = 12;
			// 
			// p1_txt
			// 
			this->p1_txt->Location = System::Drawing::Point(96, 409);
			this->p1_txt->Name = L"p1_txt";
			this->p1_txt->Size = System::Drawing::Size(100, 20);
			this->p1_txt->TabIndex = 14;
			// 
			// p2_txt
			// 
			this->p2_txt->Location = System::Drawing::Point(96, 435);
			this->p2_txt->Name = L"p2_txt";
			this->p2_txt->Size = System::Drawing::Size(100, 20);
			this->p2_txt->TabIndex = 15;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd/mm/yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(96, 383);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(100, 20);
			this->dateTimePicker1->TabIndex = 16;
			this->dateTimePicker1->Value = System::DateTime(2016, 12, 13, 0, 0, 0, 0);
			// 
			// a1_txt
			// 
			this->a1_txt->Location = System::Drawing::Point(314, 357);
			this->a1_txt->Name = L"a1_txt";
			this->a1_txt->Size = System::Drawing::Size(100, 20);
			this->a1_txt->TabIndex = 17;
			// 
			// a2_txt
			// 
			this->a2_txt->Location = System::Drawing::Point(314, 383);
			this->a2_txt->Name = L"a2_txt";
			this->a2_txt->Size = System::Drawing::Size(100, 20);
			this->a2_txt->TabIndex = 18;
			// 
			// a3_txt
			// 
			this->a3_txt->Location = System::Drawing::Point(314, 411);
			this->a3_txt->Name = L"a3_txt";
			this->a3_txt->Size = System::Drawing::Size(100, 20);
			this->a3_txt->TabIndex = 19;
			// 
			// a4_txt
			// 
			this->a4_txt->Location = System::Drawing::Point(314, 439);
			this->a4_txt->Name = L"a4_txt";
			this->a4_txt->Size = System::Drawing::Size(100, 20);
			this->a4_txt->TabIndex = 20;
			// 
			// max_txt
			// 
			this->max_txt->Location = System::Drawing::Point(502, 357);
			this->max_txt->Name = L"max_txt";
			this->max_txt->Size = System::Drawing::Size(100, 20);
			this->max_txt->TabIndex = 21;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(474, 388);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(79, 37);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Add";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &admarre::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 198);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(287, 150);
			this->dataGridView1->TabIndex = 24;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(315, 198);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->Size = System::Drawing::Size(287, 150);
			this->dataGridView2->TabIndex = 26;
			// 
			// dataGridView3
			// 
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(638, 58);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersWidth = 4;
			this->dataGridView3->Size = System::Drawing::Size(174, 150);
			this->dataGridView3->TabIndex = 27;
			// 
			// dataGridView4
			// 
			this->dataGridView4->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(638, 292);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->ReadOnly = true;
			this->dataGridView4->RowHeadersWidth = 4;
			this->dataGridView4->Size = System::Drawing::Size(174, 150);
			this->dataGridView4->TabIndex = 28;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(474, 431);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 37);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &admarre::button1_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(121, 172);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 31;
			this->button6->Text = L"Routes";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &admarre::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(421, 172);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 32;
			this->button7->Text = L"Employees";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &admarre::button7_Click);
			// 
			// dataGridView5
			// 
			this->dataGridView5->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(12, 11);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->ReadOnly = true;
			this->dataGridView5->Size = System::Drawing::Size(521, 150);
			this->dataGridView5->TabIndex = 33;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Location = System::Drawing::Point(561, 91);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(18, 13);
			this->label10->TabIndex = 34;
			this->label10->Text = L"ID";
			// 
			// id_txt
			// 
			this->id_txt->Location = System::Drawing::Point(542, 110);
			this->id_txt->Name = L"id_txt";
			this->id_txt->Size = System::Drawing::Size(60, 20);
			this->id_txt->TabIndex = 35;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(536, 137);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 36;
			this->button8->Text = L"Remove";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &admarre::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(536, 15);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 37;
			this->button9->Text = L"Load";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &admarre::button9_Click);
			// 
			// admarre
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(831, 472);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->id_txt);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->max_txt);
			this->Controls->Add(this->a4_txt);
			this->Controls->Add(this->a3_txt);
			this->Controls->Add(this->a2_txt);
			this->Controls->Add(this->a1_txt);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->p2_txt);
			this->Controls->Add(this->p1_txt);
			this->Controls->Add(this->rc_txt);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"admarre";
			this->Text = L"Add / Remove Route Excecution";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select id,rcode,date,p1,p2,ar1,ar2,ar3,ar4,max from database.routeexc;", conDatabase);
	MySqlDataReader^ myReader;
	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		this->dataGridView5->DataSource = bSource;
		sda->Update(dbdataset);
		myReader->Close();
	}
	catch (Exception^ ex) {
		//MessageBox::Show(ex->Message);
	}
}

private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->id_txt->Text == "") {
		MessageBox::Show("You have to insert an ID .");
	}
	else {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("delete from database.routeexc where id=" + this->id_txt->Text + ";", conDatabase2);
		MySqlDataReader^ myReader2;
		try
		{

			conDatabase2->Open();
			myReader2 = cmdDataBase2->ExecuteReader();
			myReader2->Close();
			MessageBox::Show("You have successfuly deleted the route !");
			this->id_txt->Text = "";
		}
		catch (Exception^ ex)
		{
			//MessageBox::Show(ex->Message);
		}
	}
}

	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase3 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("select id,rcode,spoint,epoint,rday,shour,ehour,ticketpric from database.route;", conDatabase3);
		MySqlDataReader^ myReader3;
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase3;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			this->dataGridView1->DataSource = bSource;
			sda->Update(dbdataset);
			myReader3->Close();
		}
		catch (Exception^ ex) {
			//MessageBox::Show(ex->Message);
		}
	}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
	MySqlConnection^ conDatabase4 = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase4 = gcnew MySqlCommand("select id,fname,lname,idnum,phonenum,address,bday from database.employees;", conDatabase4);
	MySqlDataReader^ myReader4;
	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase4;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		this->dataGridView2->DataSource = bSource;
		sda->Update(dbdataset);
		myReader4->Close();
	}
	catch (Exception^ ex) {
		//MessageBox::Show(ex->Message);
	}
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
	MySqlConnection^ conDatabase5 = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase5 = gcnew MySqlCommand("select empid,flyhours from database.pilotoi;", conDatabase5);
	MySqlDataReader^ myReader5;
	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase5;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		this->dataGridView3->DataSource = bSource;
		sda->Update(dbdataset);
		myReader5->Close();
	}
	catch (Exception^ ex) {
		//MessageBox::Show(ex->Message);
	}
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
	MySqlConnection^ conDatabase6 = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase6 = gcnew MySqlCommand("select empid,years from database.aerosinodoi;", conDatabase6);
	MySqlDataReader^ myReader6;
	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase6;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		this->dataGridView4->DataSource = bSource;
		sda->Update(dbdataset);
		myReader6->Close();
	}
	catch (Exception^ ex) {
		//MessageBox::Show(ex->Message);
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->rc_txt->Text == "" || this->p1_txt->Text == "" || this->p2_txt->Text == "" || this->a1_txt->Text == "" || this->a2_txt->Text == "" || this->a3_txt->Text == "" || this->a4_txt->Text == "" || this->max_txt->Text == "") {
		MessageBox::Show("You have to complete all the fields.");
	}
	else if (this->p1_txt->Text == this->p2_txt->Text || this->p1_txt->Text== this->a1_txt->Text || this->p1_txt->Text == this->a2_txt->Text || this->p1_txt->Text == this->a3_txt->Text || this->p1_txt->Text == this->a4_txt->Text || this->p2_txt->Text == this->a1_txt->Text || this->p2_txt->Text == this->a2_txt->Text || this->p2_txt->Text == this->a3_txt->Text || this->p2_txt->Text == this->a4_txt->Text || this->a1_txt->Text == this->a2_txt->Text || this->a1_txt->Text == this->a3_txt->Text || this->a1_txt->Text == this->a4_txt->Text || this->a2_txt->Text == this->a1_txt->Text || this->a2_txt->Text == this->a3_txt->Text || this->a2_txt->Text == this->a4_txt->Text || this->a3_txt->Text == this->a1_txt->Text || this->a3_txt->Text == this->a2_txt->Text || this->a3_txt->Text == this->a4_txt->Text) {
		MessageBox::Show("One option must be changed.");
	}
	else if (this->dateTimePicker1->Text == "") {
		MessageBox::Show("You have to change date.");
	}
	else if (this->a1_txt->Text != "" && this->a2_txt->Text != "" && this->a3_txt->Text != "" && this->a4_txt->Text != "") {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase8 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase8 = gcnew MySqlCommand("select * from database.aerosinodoi where empid='" + this->a1_txt->Text + "' or empid='" + this->a2_txt->Text + "'or empid='" + this->a3_txt->Text + "'or empid='" + this->a4_txt->Text + "';", conDatabase8);
		MySqlDataReader^ myReader8;
		try
		{

			conDatabase8->Open();
			myReader8 = cmdDataBase8->ExecuteReader();
			int count = 0;
			while (myReader8->Read()) {
				count = count + 1;
				//MessageBox::Show("" + count + "");
			}
			if (count != 4) {
				MessageBox::Show("Please check again Airhosts IDs.");
			}
			else { goto finished1; }
			myReader8->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	else if (this->p1_txt->Text != "" && this->p2_txt->Text != ""){
		finished1:
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase9 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase9 = gcnew MySqlCommand("select * from database.pilotoi where empid='" + this->p1_txt->Text + "' or empid='" + this->p2_txt->Text + "';", conDatabase9);
		MySqlDataReader^ myReader9;
		try
		{

			conDatabase9->Open();
			myReader9 = cmdDataBase9->ExecuteReader();
			int count = 0;
			while (myReader9->Read()) {
				count = count + 1;
				//MessageBox::Show("" + count + "");
			}
			if (count != 2) {
				MessageBox::Show("Please check again Pilots IDs.");
			}
			else { goto finished2; }
			myReader9->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	else if (this->rc_txt->Text != "") {
	finished2:
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase10 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase10 = gcnew MySqlCommand("select * from database.route where rcode='" + this->rc_txt->Text + "';", conDatabase10);
		MySqlDataReader^ myReader10;
		try
		{

			conDatabase10->Open();
			myReader10 = cmdDataBase10->ExecuteReader();
			int count = 0;
			while (myReader10->Read()) {
				count = count + 1;
				//MessageBox::Show("" + count + "");
			}
			if (count != 1) {
				MessageBox::Show("Please check again Route Code.");
			}
			else { goto finished3; }
			myReader10->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	else if (this->rc_txt->Text != "" && this->dateTimePicker1->Text != "") {
	finished3:
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase11 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase11 = gcnew MySqlCommand("select * from database.routeexc where rcode='" + this->rc_txt->Text + "' and date='" + this->dateTimePicker1->Text + "';", conDatabase11);
		MySqlDataReader^ myReader11;
		try
		{

			conDatabase11->Open();
			myReader11 = cmdDataBase11->ExecuteReader();
			int count = 0;
			while (myReader11->Read()) {
				count = count + 1;
				MessageBox::Show("" + count + "");
			}
			if (count == 1) {
				MessageBox::Show("Please check again Route Code and Date .");
			}
			else { goto finished; }
			myReader11->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	else {
		finished:
		/*DATABASE*/
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase9 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase9 = gcnew MySqlCommand("insert into database.routeexc (rcode,date,p1,p2,ar1,ar2,ar3,ar4,max) values ('" + this->rc_txt->Text + "','" + this->dateTimePicker1->Text + "','" + this->p1_txt->Text + "','" + this->p2_txt->Text + "','" + this->a1_txt->Text + "','" + this->a2_txt->Text + "'," + this->a3_txt->Text + "," + this->a4_txt->Text + "," + this->max_txt->Text + ");", conDatabase9);
		MySqlDataReader^ myReader9;
		try
		{

			conDatabase9->Open();

			myReader9 = cmdDataBase9->ExecuteReader();
			MessageBox::Show("You have successfuly added a Route Excecution! Click 'Load' to refresh the database.");
			myReader9->Close();

			this->rc_txt->Text = "";
			this->p1_txt->Text = "";
			this->p2_txt->Text = "";
			this->a1_txt->Text = "";
			this->a2_txt->Text = "";
			this->a3_txt->Text = "";
			this->a4_txt->Text = "";
			this->max_txt->Text = "";
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
};
}
