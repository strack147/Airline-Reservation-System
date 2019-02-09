#pragma once
#include <iostream>

namespace AirlineReservationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for signupmenu
	/// </summary>
	public ref class signupmenu : public System::Windows::Forms::Form
	{
	public:
		signupmenu(void)
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
		~signupmenu()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^  back_but;
	private: System::Windows::Forms::Button^  exit_but;
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
	private: System::Windows::Forms::TextBox^  username_txt;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  compc_txt;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  reg_but;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(signupmenu::typeid));
			this->back_but = (gcnew System::Windows::Forms::Button());
			this->exit_but = (gcnew System::Windows::Forms::Button());
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
			this->username_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->compc_txt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->reg_but = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// back_but
			// 
			this->back_but->Location = System::Drawing::Point(234, 334);
			this->back_but->Name = L"back_but";
			this->back_but->Size = System::Drawing::Size(87, 40);
			this->back_but->TabIndex = 91;
			this->back_but->Text = L"Back";
			this->back_but->UseVisualStyleBackColor = true;
			this->back_but->Click += gcnew System::EventHandler(this, &signupmenu::back_but_Click);
			// 
			// exit_but
			// 
			this->exit_but->Location = System::Drawing::Point(109, 334);
			this->exit_but->Name = L"exit_but";
			this->exit_but->Size = System::Drawing::Size(87, 40);
			this->exit_but->TabIndex = 90;
			this->exit_but->Text = L"Exit";
			this->exit_but->UseVisualStyleBackColor = true;
			this->exit_but->Click += gcnew System::EventHandler(this, &signupmenu::exit_but_Click);
			// 
			// address_txt
			// 
			this->address_txt->Location = System::Drawing::Point(147, 189);
			this->address_txt->Name = L"address_txt";
			this->address_txt->Size = System::Drawing::Size(216, 20);
			this->address_txt->TabIndex = 89;
			// 
			// phone_txt
			// 
			this->phone_txt->Location = System::Drawing::Point(147, 163);
			this->phone_txt->Name = L"phone_txt";
			this->phone_txt->Size = System::Drawing::Size(216, 20);
			this->phone_txt->TabIndex = 88;
			// 
			// lname_txt
			// 
			this->lname_txt->Location = System::Drawing::Point(147, 137);
			this->lname_txt->Name = L"lname_txt";
			this->lname_txt->Size = System::Drawing::Size(216, 20);
			this->lname_txt->TabIndex = 87;
			// 
			// name_txt
			// 
			this->name_txt->Location = System::Drawing::Point(147, 109);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(216, 20);
			this->name_txt->TabIndex = 86;
			// 
			// passconf_txt
			// 
			this->passconf_txt->Location = System::Drawing::Point(147, 83);
			this->passconf_txt->Name = L"passconf_txt";
			this->passconf_txt->PasswordChar = '*';
			this->passconf_txt->Size = System::Drawing::Size(216, 20);
			this->passconf_txt->TabIndex = 85;
			// 
			// password_txt
			// 
			this->password_txt->Location = System::Drawing::Point(147, 57);
			this->password_txt->Name = L"password_txt";
			this->password_txt->PasswordChar = '*';
			this->password_txt->Size = System::Drawing::Size(216, 20);
			this->password_txt->TabIndex = 84;
			// 
			// address_lbl
			// 
			this->address_lbl->AutoSize = true;
			this->address_lbl->BackColor = System::Drawing::Color::Transparent;
			this->address_lbl->Location = System::Drawing::Point(58, 192);
			this->address_lbl->Name = L"address_lbl";
			this->address_lbl->Size = System::Drawing::Size(45, 13);
			this->address_lbl->TabIndex = 83;
			this->address_lbl->Text = L"Address";
			// 
			// phone_lbl
			// 
			this->phone_lbl->AutoSize = true;
			this->phone_lbl->BackColor = System::Drawing::Color::Transparent;
			this->phone_lbl->Location = System::Drawing::Point(58, 166);
			this->phone_lbl->Name = L"phone_lbl";
			this->phone_lbl->Size = System::Drawing::Size(38, 13);
			this->phone_lbl->TabIndex = 82;
			this->phone_lbl->Text = L"Phone";
			// 
			// lname_lbl
			// 
			this->lname_lbl->AutoSize = true;
			this->lname_lbl->BackColor = System::Drawing::Color::Transparent;
			this->lname_lbl->Location = System::Drawing::Point(50, 140);
			this->lname_lbl->Name = L"lname_lbl";
			this->lname_lbl->Size = System::Drawing::Size(56, 13);
			this->lname_lbl->TabIndex = 81;
			this->lname_lbl->Text = L"Last name";
			// 
			// name_lbl
			// 
			this->name_lbl->AutoSize = true;
			this->name_lbl->BackColor = System::Drawing::Color::Transparent;
			this->name_lbl->Location = System::Drawing::Point(49, 112);
			this->name_lbl->Name = L"name_lbl";
			this->name_lbl->Size = System::Drawing::Size(57, 13);
			this->name_lbl->TabIndex = 80;
			this->name_lbl->Text = L"First Name";
			// 
			// passconf_lbl
			// 
			this->passconf_lbl->AutoSize = true;
			this->passconf_lbl->BackColor = System::Drawing::Color::Transparent;
			this->passconf_lbl->Location = System::Drawing::Point(21, 86);
			this->passconf_lbl->Name = L"passconf_lbl";
			this->passconf_lbl->Size = System::Drawing::Size(114, 13);
			this->passconf_lbl->TabIndex = 79;
			this->passconf_lbl->Text = L"Password Confirmation";
			// 
			// password_lbl
			// 
			this->password_lbl->AutoSize = true;
			this->password_lbl->BackColor = System::Drawing::Color::Transparent;
			this->password_lbl->Location = System::Drawing::Point(50, 60);
			this->password_lbl->Name = L"password_lbl";
			this->password_lbl->Size = System::Drawing::Size(53, 13);
			this->password_lbl->TabIndex = 78;
			this->password_lbl->Text = L"Password";
			// 
			// username_txt
			// 
			this->username_txt->Location = System::Drawing::Point(147, 28);
			this->username_txt->Name = L"username_txt";
			this->username_txt->Size = System::Drawing::Size(216, 20);
			this->username_txt->TabIndex = 92;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(48, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 93;
			this->label1->Text = L"Username";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Costumer", L"Company" });
			this->comboBox1->Location = System::Drawing::Point(147, 218);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(216, 21);
			this->comboBox1->TabIndex = 94;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &signupmenu::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(45, 221);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 95;
			this->label2->Text = L"Register Type";
			// 
			// compc_txt
			// 
			this->compc_txt->Location = System::Drawing::Point(147, 251);
			this->compc_txt->Name = L"compc_txt";
			this->compc_txt->PasswordChar = '*';
			this->compc_txt->Size = System::Drawing::Size(216, 20);
			this->compc_txt->TabIndex = 96;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(39, 249);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 13);
			this->label3->TabIndex = 97;
			this->label3->Text = L"* Company code";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(39, 262);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 13);
			this->label4->TabIndex = 98;
			this->label4->Text = L"(Only for company)";
			// 
			// reg_but
			// 
			this->reg_but->Location = System::Drawing::Point(178, 288);
			this->reg_but->Name = L"reg_but";
			this->reg_but->Size = System::Drawing::Size(87, 40);
			this->reg_but->TabIndex = 99;
			this->reg_but->Text = L"Save";
			this->reg_but->UseVisualStyleBackColor = true;
			this->reg_but->Click += gcnew System::EventHandler(this, &signupmenu::reg_but_Click);
			// 
			// signupmenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(413, 403);
			this->ControlBox = false;
			this->Controls->Add(this->reg_but);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->compc_txt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->username_txt);
			this->Controls->Add(this->back_but);
			this->Controls->Add(this->exit_but);
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
			this->MaximumSize = System::Drawing::Size(429, 442);
			this->Name = L"signupmenu";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Sign up";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void reg_but_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->username_txt->Text == "" || this->password_txt->Text == "" || this->passconf_txt->Text == "" || this->name_txt->Text == "" || this->lname_txt->Text == "" || this->phone_txt->Text == "" || this->address_txt->Text == "" || this->comboBox1->Text=="") {
			MessageBox::Show("You have to complete all the fields .");
		}
		else if (this->password_txt->Text != this->passconf_txt->Text) {
			MessageBox::Show("Passwords do not match. Please check them again.");
		}
		else if (comboBox1->Text == "Company" && this->compc_txt->Text == "") {
			MessageBox::Show("Please enter company code.");
		}
		else if (comboBox1->Text == "Company" && this->compc_txt->Text!="getrights") {
			MessageBox::Show("Wrong company code.");
		}
		else {
			/*DATABASE*/
			String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
			MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into database.users (username,password,rights) values ('" + this->username_txt->Text + "','" + this->password_txt->Text + "','0');", conDatabase);
			MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("insert into database.users (username,password,rights) values ('" + this->username_txt->Text + "','" + this->password_txt->Text + "','2');", conDatabase);
			MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("insert into database.customers (fname,lname,number,address,username) values ('" + this->name_txt->Text + "','" + this->lname_txt->Text + "','" + this->phone_txt->Text + "','" + this->address_txt->Text + "','" + this->username_txt->Text + "');", conDatabase);
			MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("insert into database.company (fname,lname,number,address,username) values ('" + this->name_txt->Text + "','" + this->lname_txt->Text + "','" + this->phone_txt->Text + "','" + this->address_txt->Text + "','"+this->username_txt->Text+"');", conDatabase);
			MySqlDataReader^ myReader;
			MySqlDataReader^ myReader1;
			MySqlDataReader^ myReader2;
			MySqlDataReader^ myReader3;
			try
			{

				conDatabase->Open();

				if (this->comboBox1->Text == "Costumer") {
					myReader = cmdDataBase->ExecuteReader();
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
				MessageBox::Show("Thank you for your registration ! Your data have been saved successfuly !");
				this->username_txt->Text = "";
				this->password_txt->Text = "";
				this->passconf_txt->Text = "";
				this->name_txt->Text = "";
				this->lname_txt->Text = "";
				this->phone_txt->Text = "";
				this->address_txt->Text = "";
				this->compc_txt->Text = "";
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
