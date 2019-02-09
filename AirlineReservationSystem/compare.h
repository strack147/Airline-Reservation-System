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
	/// Summary for compare
	/// </summary>
	public ref class compare : public System::Windows::Forms::Form
	{
	public:
		compare(void)
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
		~compare()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::DataGridView^  dataGridView4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  fname_lbl;
	private: System::Windows::Forms::Label^  lname_lbl;
	private: System::Windows::Forms::Label^  idnum_lbl;
	private: System::Windows::Forms::Label^  phonenum_lbl;
	private: System::Windows::Forms::Label^  add_lbl;
	private: System::Windows::Forms::Label^  gram_lbl;
	private: System::Windows::Forms::Label^  years_lbl;
	private: System::Windows::Forms::Label^  flyh_lbl;
	private: System::Windows::Forms::Label^  bday_lbl;
	private: System::Windows::Forms::TextBox^  fname_txt;
	private: System::Windows::Forms::TextBox^  lname_txt;
	private: System::Windows::Forms::TextBox^  idnum_txt;
	private: System::Windows::Forms::TextBox^  phn_txt;
	private: System::Windows::Forms::TextBox^  addr_txt;

	private: System::Windows::Forms::TextBox^  know_txt;
	private: System::Windows::Forms::TextBox^  yow_txt;
	private: System::Windows::Forms::TextBox^  fh_txt;









	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  empid_txt;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(compare::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->fname_lbl = (gcnew System::Windows::Forms::Label());
			this->lname_lbl = (gcnew System::Windows::Forms::Label());
			this->idnum_lbl = (gcnew System::Windows::Forms::Label());
			this->phonenum_lbl = (gcnew System::Windows::Forms::Label());
			this->add_lbl = (gcnew System::Windows::Forms::Label());
			this->gram_lbl = (gcnew System::Windows::Forms::Label());
			this->years_lbl = (gcnew System::Windows::Forms::Label());
			this->flyh_lbl = (gcnew System::Windows::Forms::Label());
			this->bday_lbl = (gcnew System::Windows::Forms::Label());
			this->fname_txt = (gcnew System::Windows::Forms::TextBox());
			this->lname_txt = (gcnew System::Windows::Forms::TextBox());
			this->idnum_txt = (gcnew System::Windows::Forms::TextBox());
			this->phn_txt = (gcnew System::Windows::Forms::TextBox());
			this->addr_txt = (gcnew System::Windows::Forms::TextBox());
			this->know_txt = (gcnew System::Windows::Forms::TextBox());
			this->yow_txt = (gcnew System::Windows::Forms::TextBox());
			this->fh_txt = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->empid_txt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(13, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 4;
			this->dataGridView1->Size = System::Drawing::Size(589, 163);
			this->dataGridView1->TabIndex = 0;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(13, 185);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 4;
			this->dataGridView2->Size = System::Drawing::Size(190, 150);
			this->dataGridView2->TabIndex = 1;
			// 
			// dataGridView3
			// 
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(212, 185);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersWidth = 4;
			this->dataGridView3->Size = System::Drawing::Size(190, 150);
			this->dataGridView3->TabIndex = 2;
			// 
			// dataGridView4
			// 
			this->dataGridView4->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(412, 185);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->ReadOnly = true;
			this->dataGridView4->RowHeadersWidth = 4;
			this->dataGridView4->Size = System::Drawing::Size(190, 150);
			this->dataGridView4->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(412, 434);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 35);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &compare::button1_Click);
			// 
			// fname_lbl
			// 
			this->fname_lbl->AutoSize = true;
			this->fname_lbl->BackColor = System::Drawing::Color::Transparent;
			this->fname_lbl->Location = System::Drawing::Point(22, 344);
			this->fname_lbl->Name = L"fname_lbl";
			this->fname_lbl->Size = System::Drawing::Size(57, 13);
			this->fname_lbl->TabIndex = 5;
			this->fname_lbl->Text = L"First Name";
			// 
			// lname_lbl
			// 
			this->lname_lbl->AutoSize = true;
			this->lname_lbl->BackColor = System::Drawing::Color::Transparent;
			this->lname_lbl->Location = System::Drawing::Point(21, 371);
			this->lname_lbl->Name = L"lname_lbl";
			this->lname_lbl->Size = System::Drawing::Size(58, 13);
			this->lname_lbl->TabIndex = 6;
			this->lname_lbl->Text = L"Last Name";
			// 
			// idnum_lbl
			// 
			this->idnum_lbl->AutoSize = true;
			this->idnum_lbl->BackColor = System::Drawing::Color::Transparent;
			this->idnum_lbl->Location = System::Drawing::Point(22, 398);
			this->idnum_lbl->Name = L"idnum_lbl";
			this->idnum_lbl->Size = System::Drawing::Size(58, 13);
			this->idnum_lbl->TabIndex = 7;
			this->idnum_lbl->Text = L"ID Number";
			// 
			// phonenum_lbl
			// 
			this->phonenum_lbl->AutoSize = true;
			this->phonenum_lbl->BackColor = System::Drawing::Color::Transparent;
			this->phonenum_lbl->Location = System::Drawing::Point(4, 424);
			this->phonenum_lbl->Name = L"phonenum_lbl";
			this->phonenum_lbl->Size = System::Drawing::Size(78, 13);
			this->phonenum_lbl->TabIndex = 8;
			this->phonenum_lbl->Text = L"Phone Number";
			// 
			// add_lbl
			// 
			this->add_lbl->AutoSize = true;
			this->add_lbl->BackColor = System::Drawing::Color::Transparent;
			this->add_lbl->Location = System::Drawing::Point(26, 450);
			this->add_lbl->Name = L"add_lbl";
			this->add_lbl->Size = System::Drawing::Size(45, 13);
			this->add_lbl->TabIndex = 9;
			this->add_lbl->Text = L"Address";
			// 
			// gram_lbl
			// 
			this->gram_lbl->AutoSize = true;
			this->gram_lbl->BackColor = System::Drawing::Color::Transparent;
			this->gram_lbl->Location = System::Drawing::Point(210, 366);
			this->gram_lbl->Name = L"gram_lbl";
			this->gram_lbl->Size = System::Drawing::Size(93, 26);
			this->gram_lbl->TabIndex = 10;
			this->gram_lbl->Text = L"*Knowledge\r\n(for Administrators)";
			// 
			// years_lbl
			// 
			this->years_lbl->AutoSize = true;
			this->years_lbl->BackColor = System::Drawing::Color::Transparent;
			this->years_lbl->Location = System::Drawing::Point(210, 397);
			this->years_lbl->Name = L"years_lbl";
			this->years_lbl->Size = System::Drawing::Size(86, 26);
			this->years_lbl->TabIndex = 11;
			this->years_lbl->Text = L"*Years of Work\r\n(all except Pilots)";
			// 
			// flyh_lbl
			// 
			this->flyh_lbl->AutoSize = true;
			this->flyh_lbl->BackColor = System::Drawing::Color::Transparent;
			this->flyh_lbl->Location = System::Drawing::Point(198, 428);
			this->flyh_lbl->Name = L"flyh_lbl";
			this->flyh_lbl->Size = System::Drawing::Size(105, 13);
			this->flyh_lbl->TabIndex = 12;
			this->flyh_lbl->Text = L"*Fly hours (For Pilots)";
			// 
			// bday_lbl
			// 
			this->bday_lbl->AutoSize = true;
			this->bday_lbl->BackColor = System::Drawing::Color::Transparent;
			this->bday_lbl->Location = System::Drawing::Point(243, 346);
			this->bday_lbl->Name = L"bday_lbl";
			this->bday_lbl->Size = System::Drawing::Size(45, 13);
			this->bday_lbl->TabIndex = 13;
			this->bday_lbl->Text = L"Birthday";
			// 
			// fname_txt
			// 
			this->fname_txt->Location = System::Drawing::Point(85, 341);
			this->fname_txt->Name = L"fname_txt";
			this->fname_txt->Size = System::Drawing::Size(100, 20);
			this->fname_txt->TabIndex = 14;
			// 
			// lname_txt
			// 
			this->lname_txt->Location = System::Drawing::Point(85, 368);
			this->lname_txt->Name = L"lname_txt";
			this->lname_txt->Size = System::Drawing::Size(100, 20);
			this->lname_txt->TabIndex = 15;
			// 
			// idnum_txt
			// 
			this->idnum_txt->Location = System::Drawing::Point(85, 395);
			this->idnum_txt->Name = L"idnum_txt";
			this->idnum_txt->Size = System::Drawing::Size(100, 20);
			this->idnum_txt->TabIndex = 16;
			// 
			// phn_txt
			// 
			this->phn_txt->Location = System::Drawing::Point(85, 421);
			this->phn_txt->Name = L"phn_txt";
			this->phn_txt->Size = System::Drawing::Size(100, 20);
			this->phn_txt->TabIndex = 17;
			// 
			// addr_txt
			// 
			this->addr_txt->Location = System::Drawing::Point(85, 447);
			this->addr_txt->Name = L"addr_txt";
			this->addr_txt->Size = System::Drawing::Size(100, 20);
			this->addr_txt->TabIndex = 18;
			// 
			// know_txt
			// 
			this->know_txt->Location = System::Drawing::Point(309, 369);
			this->know_txt->Name = L"know_txt";
			this->know_txt->Size = System::Drawing::Size(100, 20);
			this->know_txt->TabIndex = 20;
			// 
			// yow_txt
			// 
			this->yow_txt->Location = System::Drawing::Point(309, 394);
			this->yow_txt->Name = L"yow_txt";
			this->yow_txt->Size = System::Drawing::Size(100, 20);
			this->yow_txt->TabIndex = 21;
			// 
			// fh_txt
			// 
			this->fh_txt->Location = System::Drawing::Point(309, 422);
			this->fh_txt->Name = L"fh_txt";
			this->fh_txt->Size = System::Drawing::Size(100, 20);
			this->fh_txt->TabIndex = 22;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Administrator", L"Airhost", L"Pilot" });
			this->comboBox1->Location = System::Drawing::Point(309, 447);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 23;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(231, 450);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Type";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(412, 393);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(62, 35);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &compare::button2_Click);
			// 
			// empid_txt
			// 
			this->empid_txt->Location = System::Drawing::Point(527, 363);
			this->empid_txt->Name = L"empid_txt";
			this->empid_txt->Size = System::Drawing::Size(75, 20);
			this->empid_txt->TabIndex = 26;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(530, 346);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Employee ID";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(533, 386);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(64, 23);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Remove";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &compare::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(67, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 13);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Administrators";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(286, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Pilots";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(487, 172);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 13);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Airhosts";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(522, 432);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 31);
			this->button4->TabIndex = 32;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &compare::button4_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd/mm/yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(309, 343);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(100, 20);
			this->dateTimePicker1->TabIndex = 33;
			this->dateTimePicker1->Value = System::DateTime(1980, 12, 15, 0, 0, 0, 0);
			// 
			// compare
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(614, 471);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->empid_txt);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->fh_txt);
			this->Controls->Add(this->yow_txt);
			this->Controls->Add(this->know_txt);
			this->Controls->Add(this->addr_txt);
			this->Controls->Add(this->phn_txt);
			this->Controls->Add(this->idnum_txt);
			this->Controls->Add(this->lname_txt);
			this->Controls->Add(this->fname_txt);
			this->Controls->Add(this->bday_lbl);
			this->Controls->Add(this->flyh_lbl);
			this->Controls->Add(this->years_lbl);
			this->Controls->Add(this->gram_lbl);
			this->Controls->Add(this->add_lbl);
			this->Controls->Add(this->phonenum_lbl);
			this->Controls->Add(this->idnum_lbl);
			this->Controls->Add(this->lname_lbl);
			this->Controls->Add(this->fname_lbl);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(630, 510);
			this->Name = L"compare";
			this->Text = L"Add / Remove Employees";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select id,fname,lname,idnum,phonenum,address,bday from database.employees;", conDatabase);
		MySqlDataReader^ myReader;
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			this->dataGridView1->DataSource = bSource;
			sda->Update(dbdataset);

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

		MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("select empid,gram,years from database.dioikitiki;", conDatabase2);
		MySqlDataReader^ myReader2;
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase2;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			this->dataGridView2->DataSource = bSource;
			sda->Update(dbdataset);

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		} 

		MySqlConnection^ conDatabase3 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("select empid,flyhours from database.pilotoi;", conDatabase3);
		MySqlDataReader^ myReader3;
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase3;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			this->dataGridView3->DataSource = bSource;
			sda->Update(dbdataset);

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		} 

		MySqlConnection^ conDatabase4 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase4 = gcnew MySqlCommand("select empid,years from database.aerosinodoi;", conDatabase4);
		MySqlDataReader^ myReader4;
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase4;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			this->dataGridView4->DataSource = bSource;
			sda->Update(dbdataset);

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->empid_txt->Text == "") {
		MessageBox::Show("You have to give an Employee ID first.");
	}
	else {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase5 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase5 = gcnew MySqlCommand("delete from database.employees where id='" + this->empid_txt->Text + "';", conDatabase5);
		MySqlCommand^ cmdDataBase6 = gcnew MySqlCommand("delete from database.pilotoi where empid='" + this->empid_txt->Text + "';", conDatabase5);
		MySqlCommand^ cmdDataBase7 = gcnew MySqlCommand("delete from database.aerosinodoi where empid='" + this->empid_txt->Text + "';", conDatabase5);
		MySqlCommand^ cmdDataBase8 = gcnew MySqlCommand("delete from database.dioikitiki where empid='" + this->empid_txt->Text + "';", conDatabase5);
		MySqlDataReader^ myReader5;
		MySqlDataReader^ myReader6;
		MySqlDataReader^ myReader7;
		MySqlDataReader^ myReader8;
		try
		{

			conDatabase5->Open();
			myReader5 = cmdDataBase5->ExecuteReader();
			myReader5->Close();
			myReader6 = cmdDataBase6->ExecuteReader();
			myReader6->Close();
			myReader7 = cmdDataBase7->ExecuteReader();
			myReader7->Close();
			myReader8 = cmdDataBase8->ExecuteReader();
			myReader8->Close();

			MessageBox::Show("You have successfuly deleted an Employee ! Click 'Load' to refresh the database.");
			this->empid_txt->Text = "";
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	int^ Vnumber;
	if (this->fname_txt->Text == "" || this->lname_txt->Text == "" || this->idnum_txt->Text == "" || this->phn_txt->Text=="" || this->addr_txt->Text == "" || this->dateTimePicker1->Text == "" || this->comboBox1->Text == "") {
		MessageBox::Show("You have to complete all the fields .");
	}
	else if (comboBox1->Text == "Administrator" && this->yow_txt->Text == "") {
		MessageBox::Show("Please enter Years of Work.");
	}
	else if (comboBox1->Text == "Airhost" && (this->know_txt->Text == "" || this->yow_txt->Text == "") ) {
		MessageBox::Show("Please enter Knowledge and Years of Work.");
	}
	else if (comboBox1->Text == "Pilot" && this->fh_txt->Text == "") {
		MessageBox::Show("Please enter Fly Hours.");
	}
	else {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase7 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase11 = gcnew MySqlCommand("insert into database.employees (fname,lname,idnum,phonenum,address,bday) values ('" + this->fname_txt->Text + "','" + this->lname_txt->Text + "','" + this->idnum_txt->Text + "','" + this->phn_txt->Text + "','" + this->addr_txt->Text + "','" + this->dateTimePicker1->Text + "');", conDatabase7);
		MySqlCommand^ cmdDataBase15 = gcnew MySqlCommand("select * from database.employees where idnum='" + this->idnum_txt->Text + "' ;", conDatabase7);
		MySqlDataReader^ myReader11;
		MySqlDataReader^ myReader15;
	

		try
		{
			conDatabase7->Open();
			myReader11 = cmdDataBase11->ExecuteReader();
			myReader11->Close();

			myReader15 = cmdDataBase15->ExecuteReader();
			while (myReader15->Read()) {
				Vnumber = myReader15->GetInt32("id");
			}
			myReader15->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

		MySqlConnection^ conDatabase8 = gcnew MySqlConnection(constring);		
		MySqlCommand^ cmdDataBase12 = gcnew MySqlCommand("insert into database.dioikitiki (empid,gram,years) values (" + Vnumber + ",'" + this->know_txt->Text + "','" + this->yow_txt->Text + "');", conDatabase8);
		MySqlCommand^ cmdDataBase13 = gcnew MySqlCommand("insert into database.aerosinodoi (empid,years) values (" + Vnumber + ",'" + this->yow_txt->Text + "');", conDatabase8);
		MySqlCommand^ cmdDataBase14 = gcnew MySqlCommand("insert into database.pilotoi (empid,flyhours) values (" + Vnumber + ",'" + this->fh_txt->Text + "');", conDatabase8);
		MySqlDataReader^ myReader12;
		MySqlDataReader^ myReader13;
		MySqlDataReader^ myReader14;


		conDatabase8->Open();

		if (this->comboBox1->Text == "Administrator") {
			myReader12 = cmdDataBase12->ExecuteReader();
			myReader12->Close();
		}
		else if (this->comboBox1->Text == "Airhost")
		{
			myReader13 = cmdDataBase13->ExecuteReader();
			myReader13->Close();
		}
		else if (this->comboBox1->Text == "Pilot")
		{
			myReader14 = cmdDataBase14->ExecuteReader();
			myReader14->Close();
		}


		MessageBox::Show("Your data have been saved successfuly. Click 'Load' to refresh the database.");
		this->fname_txt->Text = "";
		this->lname_txt->Text = "";
		this->idnum_txt->Text = "";
		this->phn_txt->Text = "";
		this->addr_txt->Text = "";
		this->know_txt->Text = "";
		this->yow_txt->Text = "";
		this->fh_txt->Text = "";
		this->comboBox1->Text = "";
	}
}
};
}
