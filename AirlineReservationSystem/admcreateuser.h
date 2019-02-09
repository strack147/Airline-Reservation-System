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
	/// Summary for admcreateuser
	/// </summary>
	public ref class admcreateuser : public System::Windows::Forms::Form
	{
	public:
		admcreateuser(void)
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
		~admcreateuser()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  username_txt;
	private: System::Windows::Forms::TextBox^  address_txt;
	private: System::Windows::Forms::TextBox^  phone_txt;
	private: System::Windows::Forms::TextBox^  lname_txt;
	private: System::Windows::Forms::TextBox^  name_txt;
	private: System::Windows::Forms::TextBox^  passconf_txt;
	private: System::Windows::Forms::TextBox^  password_txt;
	private: System::Windows::Forms::Label^  address_lbl;
	private: System::Windows::Forms::Label^  phone_lbl;
	private: System::Windows::Forms::Label^  lname_lbl;
	private: System::Windows::Forms::Label^  name_lbl;
	private: System::Windows::Forms::Label^  passconf_lbl;
	private: System::Windows::Forms::Label^  password_lbl;
	private: System::Windows::Forms::Button^  reg_but;
	private: System::Windows::Forms::Button^  back_but;

	private: System::Windows::Forms::Button^  button1;







	private: System::Windows::Forms::DataGridView^  dataGridView1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(admcreateuser::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->username_txt = (gcnew System::Windows::Forms::TextBox());
			this->address_txt = (gcnew System::Windows::Forms::TextBox());
			this->phone_txt = (gcnew System::Windows::Forms::TextBox());
			this->lname_txt = (gcnew System::Windows::Forms::TextBox());
			this->name_txt = (gcnew System::Windows::Forms::TextBox());
			this->passconf_txt = (gcnew System::Windows::Forms::TextBox());
			this->password_txt = (gcnew System::Windows::Forms::TextBox());
			this->address_lbl = (gcnew System::Windows::Forms::Label());
			this->phone_lbl = (gcnew System::Windows::Forms::Label());
			this->lname_lbl = (gcnew System::Windows::Forms::Label());
			this->name_lbl = (gcnew System::Windows::Forms::Label());
			this->passconf_lbl = (gcnew System::Windows::Forms::Label());
			this->password_lbl = (gcnew System::Windows::Forms::Label());
			this->reg_but = (gcnew System::Windows::Forms::Button());
			this->back_but = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(29, 437);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 111;
			this->label2->Text = L"Register Type";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Costumer", L"Company" });
			this->comboBox1->Location = System::Drawing::Point(131, 434);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(216, 21);
			this->comboBox1->TabIndex = 110;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(32, 247);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 109;
			this->label1->Text = L"Username";
			// 
			// username_txt
			// 
			this->username_txt->Location = System::Drawing::Point(131, 244);
			this->username_txt->Name = L"username_txt";
			this->username_txt->Size = System::Drawing::Size(216, 20);
			this->username_txt->TabIndex = 108;
			// 
			// address_txt
			// 
			this->address_txt->Location = System::Drawing::Point(131, 405);
			this->address_txt->Name = L"address_txt";
			this->address_txt->Size = System::Drawing::Size(216, 20);
			this->address_txt->TabIndex = 107;
			// 
			// phone_txt
			// 
			this->phone_txt->Location = System::Drawing::Point(131, 379);
			this->phone_txt->Name = L"phone_txt";
			this->phone_txt->Size = System::Drawing::Size(216, 20);
			this->phone_txt->TabIndex = 106;
			// 
			// lname_txt
			// 
			this->lname_txt->Location = System::Drawing::Point(131, 353);
			this->lname_txt->Name = L"lname_txt";
			this->lname_txt->Size = System::Drawing::Size(216, 20);
			this->lname_txt->TabIndex = 105;
			// 
			// name_txt
			// 
			this->name_txt->Location = System::Drawing::Point(131, 325);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(216, 20);
			this->name_txt->TabIndex = 104;
			// 
			// passconf_txt
			// 
			this->passconf_txt->Location = System::Drawing::Point(131, 299);
			this->passconf_txt->Name = L"passconf_txt";
			this->passconf_txt->PasswordChar = '*';
			this->passconf_txt->Size = System::Drawing::Size(216, 20);
			this->passconf_txt->TabIndex = 103;
			// 
			// password_txt
			// 
			this->password_txt->Location = System::Drawing::Point(131, 273);
			this->password_txt->Name = L"password_txt";
			this->password_txt->PasswordChar = '*';
			this->password_txt->Size = System::Drawing::Size(216, 20);
			this->password_txt->TabIndex = 102;
			// 
			// address_lbl
			// 
			this->address_lbl->AutoSize = true;
			this->address_lbl->BackColor = System::Drawing::Color::Transparent;
			this->address_lbl->Location = System::Drawing::Point(42, 408);
			this->address_lbl->Name = L"address_lbl";
			this->address_lbl->Size = System::Drawing::Size(45, 13);
			this->address_lbl->TabIndex = 101;
			this->address_lbl->Text = L"Address";
			// 
			// phone_lbl
			// 
			this->phone_lbl->AutoSize = true;
			this->phone_lbl->BackColor = System::Drawing::Color::Transparent;
			this->phone_lbl->Location = System::Drawing::Point(42, 382);
			this->phone_lbl->Name = L"phone_lbl";
			this->phone_lbl->Size = System::Drawing::Size(38, 13);
			this->phone_lbl->TabIndex = 100;
			this->phone_lbl->Text = L"Phone";
			// 
			// lname_lbl
			// 
			this->lname_lbl->AutoSize = true;
			this->lname_lbl->BackColor = System::Drawing::Color::Transparent;
			this->lname_lbl->Location = System::Drawing::Point(34, 356);
			this->lname_lbl->Name = L"lname_lbl";
			this->lname_lbl->Size = System::Drawing::Size(56, 13);
			this->lname_lbl->TabIndex = 99;
			this->lname_lbl->Text = L"Last name";
			// 
			// name_lbl
			// 
			this->name_lbl->AutoSize = true;
			this->name_lbl->BackColor = System::Drawing::Color::Transparent;
			this->name_lbl->Location = System::Drawing::Point(33, 328);
			this->name_lbl->Name = L"name_lbl";
			this->name_lbl->Size = System::Drawing::Size(57, 13);
			this->name_lbl->TabIndex = 98;
			this->name_lbl->Text = L"First Name";
			// 
			// passconf_lbl
			// 
			this->passconf_lbl->AutoSize = true;
			this->passconf_lbl->BackColor = System::Drawing::Color::Transparent;
			this->passconf_lbl->Location = System::Drawing::Point(5, 302);
			this->passconf_lbl->Name = L"passconf_lbl";
			this->passconf_lbl->Size = System::Drawing::Size(114, 13);
			this->passconf_lbl->TabIndex = 97;
			this->passconf_lbl->Text = L"Password Confirmation";
			// 
			// password_lbl
			// 
			this->password_lbl->AutoSize = true;
			this->password_lbl->BackColor = System::Drawing::Color::Transparent;
			this->password_lbl->Location = System::Drawing::Point(34, 276);
			this->password_lbl->Name = L"password_lbl";
			this->password_lbl->Size = System::Drawing::Size(53, 13);
			this->password_lbl->TabIndex = 96;
			this->password_lbl->Text = L"Password";
			// 
			// reg_but
			// 
			this->reg_but->Location = System::Drawing::Point(460, 244);
			this->reg_but->Name = L"reg_but";
			this->reg_but->Size = System::Drawing::Size(87, 40);
			this->reg_but->TabIndex = 114;
			this->reg_but->Text = L"Save";
			this->reg_but->UseVisualStyleBackColor = true;
			this->reg_but->Click += gcnew System::EventHandler(this, &admcreateuser::reg_but_Click);
			// 
			// back_but
			// 
			this->back_but->Location = System::Drawing::Point(417, 290);
			this->back_but->Name = L"back_but";
			this->back_but->Size = System::Drawing::Size(87, 40);
			this->back_but->TabIndex = 113;
			this->back_but->Text = L"Back";
			this->back_but->UseVisualStyleBackColor = true;
			this->back_but->Click += gcnew System::EventHandler(this, &admcreateuser::back_but_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(367, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 40);
			this->button1->TabIndex = 116;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &admcreateuser::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::Color::White;
			this->dataGridView1->Location = System::Drawing::Point(84, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(444, 194);
			this->dataGridView1->TabIndex = 117;
			// 
			// admcreateuser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(613, 474);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->reg_but);
			this->Controls->Add(this->back_but);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->username_txt);
			this->Controls->Add(this->address_txt);
			this->Controls->Add(this->phone_txt);
			this->Controls->Add(this->lname_txt);
			this->Controls->Add(this->name_txt);
			this->Controls->Add(this->passconf_txt);
			this->Controls->Add(this->password_txt);
			this->Controls->Add(this->address_lbl);
			this->Controls->Add(this->phone_lbl);
			this->Controls->Add(this->lname_lbl);
			this->Controls->Add(this->name_lbl);
			this->Controls->Add(this->passconf_lbl);
			this->Controls->Add(this->password_lbl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(629, 513);
			this->Name = L"admcreateuser";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Create User";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
			MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select id,username,password,rights from database.users;", conDatabase);
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
private: System::Void reg_but_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->username_txt->Text == "" || this->password_txt->Text == "" || this->passconf_txt->Text == "" || this->name_txt->Text == "" || this->lname_txt->Text == "" || this->phone_txt->Text == "" || this->address_txt->Text == "" || this->comboBox1->Text == "") {
		MessageBox::Show("You have to complete all the fields .");
	}
	else if (this->password_txt->Text != this->passconf_txt->Text) {
		MessageBox::Show("Passwords do not match. Please check them again.");
	}
	else {
		/*DATABASE*/
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase0 = gcnew MySqlCommand("insert into database.users (username,password,rights) values ('" + this->username_txt->Text + "','" + this->password_txt->Text + "','0');", conDatabase2);
		MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("insert into database.users (username,password,rights) values ('" + this->username_txt->Text + "','" + this->password_txt->Text + "','2');", conDatabase2);
		MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("insert into database.customers (fname,lname,number,address,username) values ('" + this->name_txt->Text + "','" + this->lname_txt->Text + "','" + this->phone_txt->Text + "','" + this->address_txt->Text + "','" + this->username_txt->Text + "');", conDatabase2);
		MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("insert into database.company (fname,lname,number,address,username) values ('" + this->name_txt->Text + "','" + this->lname_txt->Text + "','" + this->phone_txt->Text + "','" + this->address_txt->Text + "','" + this->username_txt->Text + "');", conDatabase2);
		MySqlDataReader^ myReader;
		MySqlDataReader^ myReader1;
		MySqlDataReader^ myReader2;
		MySqlDataReader^ myReader3;
		try
		{

			conDatabase2->Open();

			if (this->comboBox1->Text == "Costumer") {
				myReader = cmdDataBase0->ExecuteReader();
				myReader->Close();
				myReader2 = cmdDataBase2->ExecuteReader();
				myReader2->Close();
			}
			else if (this->comboBox1->Text == "Company")
			{
				myReader1 = cmdDataBase1->ExecuteReader();
				myReader1->Close();
				myReader3 = cmdDataBase3->ExecuteReader();
				myReader3->Close();
			}
			MessageBox::Show("You have successfuly added a user ! Click 'Load' to refresh the database.");
			this->username_txt->Text = "";
			this->password_txt->Text = "";
			this->passconf_txt->Text = "";
			this->name_txt->Text = "";
			this->lname_txt->Text = "";
			this->phone_txt->Text = "";
			this->address_txt->Text = "";
			this->comboBox1->Text = "";
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void back_but_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
private: System::Void exit_but_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
};
}
