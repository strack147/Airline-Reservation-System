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
	/// Summary for comparc
	/// </summary>
	public ref class comparc : public System::Windows::Forms::Form
	{
	public:
		comparc(void)
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
		~comparc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  reg_but;
	private: System::Windows::Forms::Button^  back_but;
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
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  us_txt;












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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(comparc::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->reg_but = (gcnew System::Windows::Forms::Button());
			this->back_but = (gcnew System::Windows::Forms::Button());
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->us_txt = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
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
			this->dataGridView1->Location = System::Drawing::Point(51, 14);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 4;
			this->dataGridView1->Size = System::Drawing::Size(506, 216);
			this->dataGridView1->TabIndex = 135;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(541, 236);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 21);
			this->button1->TabIndex = 134;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &comparc::button1_Click);
			// 
			// reg_but
			// 
			this->reg_but->Location = System::Drawing::Point(450, 318);
			this->reg_but->Name = L"reg_but";
			this->reg_but->Size = System::Drawing::Size(87, 40);
			this->reg_but->TabIndex = 133;
			this->reg_but->Text = L"Save";
			this->reg_but->UseVisualStyleBackColor = true;
			this->reg_but->Click += gcnew System::EventHandler(this, &comparc::reg_but_Click);
			// 
			// back_but
			// 
			this->back_but->Location = System::Drawing::Point(450, 364);
			this->back_but->Name = L"back_but";
			this->back_but->Size = System::Drawing::Size(87, 40);
			this->back_but->TabIndex = 132;
			this->back_but->Text = L"Back";
			this->back_but->UseVisualStyleBackColor = true;
			this->back_but->Click += gcnew System::EventHandler(this, &comparc::back_but_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(75, 278);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 131;
			this->label1->Text = L"Username";
			// 
			// username_txt
			// 
			this->username_txt->Location = System::Drawing::Point(174, 275);
			this->username_txt->Name = L"username_txt";
			this->username_txt->Size = System::Drawing::Size(216, 20);
			this->username_txt->TabIndex = 130;
			// 
			// address_txt
			// 
			this->address_txt->Location = System::Drawing::Point(174, 436);
			this->address_txt->Name = L"address_txt";
			this->address_txt->Size = System::Drawing::Size(216, 20);
			this->address_txt->TabIndex = 129;
			// 
			// phone_txt
			// 
			this->phone_txt->Location = System::Drawing::Point(174, 410);
			this->phone_txt->Name = L"phone_txt";
			this->phone_txt->Size = System::Drawing::Size(216, 20);
			this->phone_txt->TabIndex = 128;
			// 
			// lname_txt
			// 
			this->lname_txt->Location = System::Drawing::Point(174, 384);
			this->lname_txt->Name = L"lname_txt";
			this->lname_txt->Size = System::Drawing::Size(216, 20);
			this->lname_txt->TabIndex = 127;
			// 
			// name_txt
			// 
			this->name_txt->Location = System::Drawing::Point(174, 356);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(216, 20);
			this->name_txt->TabIndex = 126;
			// 
			// passconf_txt
			// 
			this->passconf_txt->Location = System::Drawing::Point(174, 330);
			this->passconf_txt->Name = L"passconf_txt";
			this->passconf_txt->PasswordChar = '*';
			this->passconf_txt->Size = System::Drawing::Size(216, 20);
			this->passconf_txt->TabIndex = 125;
			// 
			// password_txt
			// 
			this->password_txt->Location = System::Drawing::Point(174, 304);
			this->password_txt->Name = L"password_txt";
			this->password_txt->PasswordChar = '*';
			this->password_txt->Size = System::Drawing::Size(216, 20);
			this->password_txt->TabIndex = 124;
			// 
			// address_lbl
			// 
			this->address_lbl->AutoSize = true;
			this->address_lbl->BackColor = System::Drawing::Color::Transparent;
			this->address_lbl->Location = System::Drawing::Point(85, 439);
			this->address_lbl->Name = L"address_lbl";
			this->address_lbl->Size = System::Drawing::Size(45, 13);
			this->address_lbl->TabIndex = 123;
			this->address_lbl->Text = L"Address";
			// 
			// phone_lbl
			// 
			this->phone_lbl->AutoSize = true;
			this->phone_lbl->BackColor = System::Drawing::Color::Transparent;
			this->phone_lbl->Location = System::Drawing::Point(85, 413);
			this->phone_lbl->Name = L"phone_lbl";
			this->phone_lbl->Size = System::Drawing::Size(38, 13);
			this->phone_lbl->TabIndex = 122;
			this->phone_lbl->Text = L"Phone";
			// 
			// lname_lbl
			// 
			this->lname_lbl->AutoSize = true;
			this->lname_lbl->BackColor = System::Drawing::Color::Transparent;
			this->lname_lbl->Location = System::Drawing::Point(77, 387);
			this->lname_lbl->Name = L"lname_lbl";
			this->lname_lbl->Size = System::Drawing::Size(56, 13);
			this->lname_lbl->TabIndex = 121;
			this->lname_lbl->Text = L"Last name";
			// 
			// name_lbl
			// 
			this->name_lbl->AutoSize = true;
			this->name_lbl->BackColor = System::Drawing::Color::Transparent;
			this->name_lbl->Location = System::Drawing::Point(76, 359);
			this->name_lbl->Name = L"name_lbl";
			this->name_lbl->Size = System::Drawing::Size(57, 13);
			this->name_lbl->TabIndex = 120;
			this->name_lbl->Text = L"First Name";
			// 
			// passconf_lbl
			// 
			this->passconf_lbl->AutoSize = true;
			this->passconf_lbl->BackColor = System::Drawing::Color::Transparent;
			this->passconf_lbl->Location = System::Drawing::Point(48, 333);
			this->passconf_lbl->Name = L"passconf_lbl";
			this->passconf_lbl->Size = System::Drawing::Size(114, 13);
			this->passconf_lbl->TabIndex = 119;
			this->passconf_lbl->Text = L"Password Confirmation";
			// 
			// password_lbl
			// 
			this->password_lbl->AutoSize = true;
			this->password_lbl->BackColor = System::Drawing::Color::Transparent;
			this->password_lbl->Location = System::Drawing::Point(77, 307);
			this->password_lbl->Name = L"password_lbl";
			this->password_lbl->Size = System::Drawing::Size(53, 13);
			this->password_lbl->TabIndex = 118;
			this->password_lbl->Text = L"Password";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(174, 236);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 21);
			this->button2->TabIndex = 136;
			this->button2->Text = L"Remove";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &comparc::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(16, 240);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 137;
			this->label2->Text = L"Username";
			// 
			// us_txt
			// 
			this->us_txt->Location = System::Drawing::Point(70, 237);
			this->us_txt->Name = L"us_txt";
			this->us_txt->Size = System::Drawing::Size(100, 20);
			this->us_txt->TabIndex = 138;
			// 
			// comparc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(614, 471);
			this->Controls->Add(this->us_txt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->reg_but);
			this->Controls->Add(this->back_but);
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(630, 510);
			this->Name = L"comparc";
			this->Text = L"Add / Remove Customers";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void back_but_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select fname,lname,number,address,username from database.customers;", conDatabase);
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
		if (this->username_txt->Text == "" || this->password_txt->Text == "" || this->passconf_txt->Text == "" || this->name_txt->Text == "" || this->lname_txt->Text == "" || this->phone_txt->Text == "" || this->address_txt->Text == "") {
			MessageBox::Show("You have to complete all the fields .");
		}
		else if (this->password_txt->Text != this->passconf_txt->Text) {
			MessageBox::Show("Passwords do not match. Please check them again.");
		}
		else {
			/*DATABASE*/
			String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
			MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into database.users (username,password,rights) values ('" + this->username_txt->Text + "','" + this->password_txt->Text + "','0');", conDatabase);
			MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("insert into database.customers (fname,lname,number,address,username) values ('" + this->name_txt->Text + "','" + this->lname_txt->Text + "','" + this->phone_txt->Text + "','" + this->address_txt->Text + "','" + this->username_txt->Text + "');", conDatabase);
			MySqlDataReader^ myReader;
			MySqlDataReader^ myReader2;
			try
			{

				conDatabase->Open();
				myReader = cmdDataBase->ExecuteReader();
				myReader->Close();
				myReader2 = cmdDataBase2->ExecuteReader();
				myReader2->Close();

				MessageBox::Show("You have successfuly added a user ! Click 'Load' to refresh the database.");
				this->username_txt->Text = "";
				this->password_txt->Text = "";
				this->passconf_txt->Text = "";
				this->name_txt->Text = "";
				this->lname_txt->Text = "";
				this->phone_txt->Text = "";
				this->address_txt->Text = "";
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->us_txt->Text == "") {
			MessageBox::Show("You have to give an username first.");
		}
		else {
			String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
			MySqlConnection^ conDatabase5 = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("delete from database.users where username='" + this->us_txt->Text + "';", conDatabase5);
			MySqlCommand^ cmdDataBase4 = gcnew MySqlCommand("delete from database.customers where username= '" + this->us_txt->Text + "';", conDatabase5);
			MySqlDataReader^ myReader3;
			MySqlDataReader^ myReader4;
			try
			{

				conDatabase5->Open();
				myReader3 = cmdDataBase3->ExecuteReader();
				myReader3->Close();
				myReader4 = cmdDataBase4->ExecuteReader();
				myReader4->Close();

				MessageBox::Show("You have successfuly deleted a user ! Click 'Load' to refresh the database.");
				this->us_txt->Text = "";
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}
};
}
