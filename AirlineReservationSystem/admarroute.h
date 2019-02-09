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
	/// Summary for admarroute
	/// </summary>
	public ref class admarroute : public System::Windows::Forms::Form
	{
	public:
		admarroute(void)
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
		~admarroute()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  add_but;
	protected:
	private: System::Windows::Forms::Button^  rem_but;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::Button^  back_but;
	private: System::Windows::Forms::Label^  route_lbl;
	private: System::Windows::Forms::Label^  sp_lbl;
	private: System::Windows::Forms::Label^  dest_lbl;

	private: System::Windows::Forms::Label^  dep_lbl;
	private: System::Windows::Forms::Label^  arr_lbl;
	private: System::Windows::Forms::Label^  tp_lbl;
	private: System::Windows::Forms::Label^  id_lbl;
	private: System::Windows::Forms::Button^  load_but;
	private: System::Windows::Forms::TextBox^  id_txt;

	private: System::Windows::Forms::TextBox^  rc_txt;




	private: System::Windows::Forms::TextBox^  tp_txt;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(admarroute::typeid));
			this->add_but = (gcnew System::Windows::Forms::Button());
			this->rem_but = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->back_but = (gcnew System::Windows::Forms::Button());
			this->route_lbl = (gcnew System::Windows::Forms::Label());
			this->sp_lbl = (gcnew System::Windows::Forms::Label());
			this->dest_lbl = (gcnew System::Windows::Forms::Label());
			this->dep_lbl = (gcnew System::Windows::Forms::Label());
			this->arr_lbl = (gcnew System::Windows::Forms::Label());
			this->tp_lbl = (gcnew System::Windows::Forms::Label());
			this->id_lbl = (gcnew System::Windows::Forms::Label());
			this->load_but = (gcnew System::Windows::Forms::Button());
			this->id_txt = (gcnew System::Windows::Forms::TextBox());
			this->rc_txt = (gcnew System::Windows::Forms::TextBox());
			this->tp_txt = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// add_but
			// 
			this->add_but->Location = System::Drawing::Point(468, 376);
			this->add_but->Name = L"add_but";
			this->add_but->Size = System::Drawing::Size(109, 43);
			this->add_but->TabIndex = 0;
			this->add_but->Text = L"Add";
			this->add_but->UseVisualStyleBackColor = true;
			this->add_but->Click += gcnew System::EventHandler(this, &admarroute::add_but_Click);
			// 
			// rem_but
			// 
			this->rem_but->Location = System::Drawing::Point(92, 263);
			this->rem_but->Name = L"rem_but";
			this->rem_but->Size = System::Drawing::Size(75, 23);
			this->rem_but->TabIndex = 1;
			this->rem_but->Text = L"Remove";
			this->rem_but->UseVisualStyleBackColor = true;
			this->rem_but->Click += gcnew System::EventHandler(this, &admarroute::rem_but_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(4, 7);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 4;
			this->dataGridView1->Size = System::Drawing::Size(605, 255);
			this->dataGridView1->TabIndex = 2;
			// 
			// back_but
			// 
			this->back_but->Location = System::Drawing::Point(240, 423);
			this->back_but->Name = L"back_but";
			this->back_but->Size = System::Drawing::Size(91, 35);
			this->back_but->TabIndex = 4;
			this->back_but->Text = L"Back";
			this->back_but->UseVisualStyleBackColor = true;
			this->back_but->Click += gcnew System::EventHandler(this, &admarroute::back_but_Click);
			// 
			// route_lbl
			// 
			this->route_lbl->AutoSize = true;
			this->route_lbl->BackColor = System::Drawing::Color::Transparent;
			this->route_lbl->Location = System::Drawing::Point(12, 316);
			this->route_lbl->Name = L"route_lbl";
			this->route_lbl->Size = System::Drawing::Size(64, 13);
			this->route_lbl->TabIndex = 5;
			this->route_lbl->Text = L"Route Code";
			// 
			// sp_lbl
			// 
			this->sp_lbl->AutoSize = true;
			this->sp_lbl->BackColor = System::Drawing::Color::Transparent;
			this->sp_lbl->Location = System::Drawing::Point(17, 349);
			this->sp_lbl->Name = L"sp_lbl";
			this->sp_lbl->Size = System::Drawing::Size(56, 13);
			this->sp_lbl->TabIndex = 6;
			this->sp_lbl->Text = L"Start Point";
			// 
			// dest_lbl
			// 
			this->dest_lbl->AutoSize = true;
			this->dest_lbl->BackColor = System::Drawing::Color::Transparent;
			this->dest_lbl->Location = System::Drawing::Point(17, 379);
			this->dest_lbl->Name = L"dest_lbl";
			this->dest_lbl->Size = System::Drawing::Size(60, 13);
			this->dest_lbl->TabIndex = 7;
			this->dest_lbl->Text = L"Destination";
			// 
			// dep_lbl
			// 
			this->dep_lbl->AutoSize = true;
			this->dep_lbl->BackColor = System::Drawing::Color::Transparent;
			this->dep_lbl->Location = System::Drawing::Point(200, 347);
			this->dep_lbl->Name = L"dep_lbl";
			this->dep_lbl->Size = System::Drawing::Size(80, 13);
			this->dep_lbl->TabIndex = 9;
			this->dep_lbl->Text = L"Departure Hour";
			// 
			// arr_lbl
			// 
			this->arr_lbl->AutoSize = true;
			this->arr_lbl->BackColor = System::Drawing::Color::Transparent;
			this->arr_lbl->Location = System::Drawing::Point(209, 379);
			this->arr_lbl->Name = L"arr_lbl";
			this->arr_lbl->Size = System::Drawing::Size(62, 13);
			this->arr_lbl->TabIndex = 10;
			this->arr_lbl->Text = L"Arrival Hour";
			// 
			// tp_lbl
			// 
			this->tp_lbl->AutoSize = true;
			this->tp_lbl->BackColor = System::Drawing::Color::Transparent;
			this->tp_lbl->Location = System::Drawing::Point(411, 316);
			this->tp_lbl->Name = L"tp_lbl";
			this->tp_lbl->Size = System::Drawing::Size(64, 13);
			this->tp_lbl->TabIndex = 11;
			this->tp_lbl->Text = L"Ticket Price";
			// 
			// id_lbl
			// 
			this->id_lbl->AutoSize = true;
			this->id_lbl->BackColor = System::Drawing::Color::Transparent;
			this->id_lbl->Location = System::Drawing::Point(12, 268);
			this->id_lbl->Name = L"id_lbl";
			this->id_lbl->Size = System::Drawing::Size(18, 13);
			this->id_lbl->TabIndex = 12;
			this->id_lbl->Text = L"ID";
			// 
			// load_but
			// 
			this->load_but->Location = System::Drawing::Point(527, 268);
			this->load_but->Name = L"load_but";
			this->load_but->Size = System::Drawing::Size(75, 23);
			this->load_but->TabIndex = 13;
			this->load_but->Text = L"Load";
			this->load_but->UseVisualStyleBackColor = true;
			this->load_but->Click += gcnew System::EventHandler(this, &admarroute::load_but_Click);
			// 
			// id_txt
			// 
			this->id_txt->Location = System::Drawing::Point(33, 264);
			this->id_txt->Name = L"id_txt";
			this->id_txt->Size = System::Drawing::Size(54, 20);
			this->id_txt->TabIndex = 14;
			// 
			// rc_txt
			// 
			this->rc_txt->Location = System::Drawing::Point(80, 313);
			this->rc_txt->Name = L"rc_txt";
			this->rc_txt->Size = System::Drawing::Size(102, 20);
			this->rc_txt->TabIndex = 16;
			// 
			// tp_txt
			// 
			this->tp_txt->Location = System::Drawing::Point(486, 313);
			this->tp_txt->Name = L"tp_txt";
			this->tp_txt->Size = System::Drawing::Size(106, 20);
			this->tp_txt->TabIndex = 21;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(26) {
				L"ATHINA", L"ALEKSANDROUPOLI", L"ASTYPALAIA", L"ZAKYNTHOS",
					L"IRAKLIO", L"THESSALONIKI", L"IKARIA", L"KARPATHOS", L"KASOS", L"KERKYRA", L"KEFALONIA", L"KYTHIRA", L"KWS", L"MILOS", L"MYKONOS",
					L"MYTILINI", L"NAXOS", L"PAROS", L"PREVEZA", L"RODOS", L"SAMOS", L"SANTORINI", L"SITEIA", L"SKIATHOS", L"SYROS", L"XIOS"
			});
			this->comboBox1->Location = System::Drawing::Point(80, 344);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(102, 21);
			this->comboBox1->TabIndex = 23;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(26) {
				L"ATHINA", L"ALEKSANDROUPOLI", L"ASTYPALAIA", L"ZAKYNTHOS",
					L"IRAKLIO", L"THESSALONIKI", L"IKARIA", L"KARPATHOS", L"KASOS", L"KERKYRA", L"KEFALONIA", L"KYTHIRA", L"KWS", L"MILOS", L"MYKONOS",
					L"MYTILINI", L"NAXOS", L"PAROS", L"PREVEZA", L"RODOS", L"SAMOS", L"SANTORINI", L"SITEIA", L"SKIATHOS", L"SYROS", L"XIOS"
			});
			this->comboBox2->Location = System::Drawing::Point(80, 376);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(102, 21);
			this->comboBox2->TabIndex = 24;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"H:mm";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(286, 341);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->ShowUpDown = true;
			this->dateTimePicker2->Size = System::Drawing::Size(106, 20);
			this->dateTimePicker2->TabIndex = 25;
			this->dateTimePicker2->Value = System::DateTime(2016, 12, 11, 0, 0, 0, 0);
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->CustomFormat = L"H:mm";
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker3->Location = System::Drawing::Point(286, 373);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->ShowUpDown = true;
			this->dateTimePicker3->Size = System::Drawing::Size(106, 20);
			this->dateTimePicker3->TabIndex = 26;
			this->dateTimePicker3->Value = System::DateTime(2016, 12, 11, 0, 0, 0, 0);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(224, 316);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Day";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"DEUTERA", L"TRITI", L"TETARTI", L"PEMPTI", L"PARASKEUI",
					L"SAVVATO", L"KIRIAKI"
			});
			this->comboBox3->Location = System::Drawing::Point(286, 313);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(106, 21);
			this->comboBox3->TabIndex = 28;
			// 
			// admarroute
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(614, 470);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker3);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->tp_txt);
			this->Controls->Add(this->rc_txt);
			this->Controls->Add(this->id_txt);
			this->Controls->Add(this->load_but);
			this->Controls->Add(this->id_lbl);
			this->Controls->Add(this->tp_lbl);
			this->Controls->Add(this->arr_lbl);
			this->Controls->Add(this->dep_lbl);
			this->Controls->Add(this->dest_lbl);
			this->Controls->Add(this->sp_lbl);
			this->Controls->Add(this->route_lbl);
			this->Controls->Add(this->back_but);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->rem_but);
			this->Controls->Add(this->add_but);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"admarroute";
			this->Text = L"Add / Remove Route";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void load_but_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select id,rcode,spoint,epoint,rday,shour,ehour,ticketpric from database.route;", conDatabase);
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
	}

	private: System::Void add_but_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->rc_txt->Text == "" || this->comboBox1->Text == "" || this->comboBox2->Text == "" || this->tp_txt->Text == "") {
			MessageBox::Show("You have to complete all the fields .");
		}
		else if (this->dateTimePicker2->Text == "00:00" && this->dateTimePicker3->Text == "00:00") {
			MessageBox::Show("You have to change time.");
		}
		else if (this->comboBox1->Text == this->comboBox2->Text || (this->dateTimePicker2->Text == this->dateTimePicker3->Text )) {
			MessageBox::Show("One option must be changed.");
		}
		else if (this->comboBox3->Text=="") {
			MessageBox::Show("You have to change date."); 
		}
	else {
		/*DATABASE*/
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into database.route (rcode,spoint,epoint,rday,shour,ehour,ticketpric) values ('" "AS" + this->rc_txt->Text + "','" + this->comboBox1->Text + "','" + this->comboBox2->Text + "','" + this->comboBox3->Text + "','" + this->dateTimePicker2->Text + "','" + this->dateTimePicker3->Text + "',"+ this->tp_txt->Text +");", conDatabase);
		MySqlDataReader^ myReader;
		try
		{

			conDatabase->Open();

			myReader = cmdDataBase->ExecuteReader();
			myReader->Close();
			MessageBox::Show("You have successfuly added a Route ! Click 'Load' to refresh the database.");
			
			this->rc_txt->Text = "";
			this->comboBox1->Text = "";
			this->comboBox2->Text = "";
			this->tp_txt->Text = "";
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void rem_but_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->id_txt->Text == "") {
		MessageBox::Show("You have to insert an ID.");
	}
	else{
	String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("delete from database.route where id=" + this->id_txt->Text + ";", conDatabase);
	MySqlDataReader^ myReader;
	try
	{

		conDatabase->Open();
		myReader = cmdDataBase->ExecuteReader();
		myReader->Close();
		MessageBox::Show("You have successfuly deleted the route !");
		this->id_txt->Text = "";
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
}
private: System::Void exit_but_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}

private: System::Void back_but_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
};
}
