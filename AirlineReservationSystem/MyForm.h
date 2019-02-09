#pragma once
#include "adminmenu.h"
#include "usermenu.h"
#include "signupmenu.h"
#include "companymenu.h"

namespace AirlineReservationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  reg_but;
	protected:

	protected:
	private: System::Windows::Forms::Button^  exit_but;
	private: System::Windows::Forms::TextBox^  password_txt;
	private: System::Windows::Forms::Label^  password_lbl;
	private: System::Windows::Forms::Label^  username_lbl;
	private: System::Windows::Forms::TextBox^  username_txt;
	private: System::Windows::Forms::Button^  login_but;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->reg_but = (gcnew System::Windows::Forms::Button());
			this->exit_but = (gcnew System::Windows::Forms::Button());
			this->password_txt = (gcnew System::Windows::Forms::TextBox());
			this->password_lbl = (gcnew System::Windows::Forms::Label());
			this->username_lbl = (gcnew System::Windows::Forms::Label());
			this->username_txt = (gcnew System::Windows::Forms::TextBox());
			this->login_but = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// reg_but
			// 
			this->reg_but->Location = System::Drawing::Point(43, 299);
			this->reg_but->Name = L"reg_but";
			this->reg_but->Size = System::Drawing::Size(93, 39);
			this->reg_but->TabIndex = 15;
			this->reg_but->Text = L"Register";
			this->reg_but->UseVisualStyleBackColor = true;
			this->reg_but->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// exit_but
			// 
			this->exit_but->Location = System::Drawing::Point(108, 344);
			this->exit_but->Name = L"exit_but";
			this->exit_but->Size = System::Drawing::Size(93, 39);
			this->exit_but->TabIndex = 14;
			this->exit_but->Text = L"Exit";
			this->exit_but->UseVisualStyleBackColor = true;
			this->exit_but->Click += gcnew System::EventHandler(this, &MyForm::exit_but_Click);
			// 
			// password_txt
			// 
			this->password_txt->Location = System::Drawing::Point(99, 248);
			this->password_txt->Name = L"password_txt";
			this->password_txt->PasswordChar = '*';
			this->password_txt->Size = System::Drawing::Size(147, 20);
			this->password_txt->TabIndex = 13;
			// 
			// password_lbl
			// 
			this->password_lbl->AutoSize = true;
			this->password_lbl->BackColor = System::Drawing::Color::Transparent;
			this->password_lbl->Location = System::Drawing::Point(40, 251);
			this->password_lbl->Name = L"password_lbl";
			this->password_lbl->Size = System::Drawing::Size(53, 13);
			this->password_lbl->TabIndex = 12;
			this->password_lbl->Text = L"Password";
			// 
			// username_lbl
			// 
			this->username_lbl->AutoSize = true;
			this->username_lbl->BackColor = System::Drawing::Color::Transparent;
			this->username_lbl->Location = System::Drawing::Point(38, 207);
			this->username_lbl->Name = L"username_lbl";
			this->username_lbl->Size = System::Drawing::Size(55, 13);
			this->username_lbl->TabIndex = 11;
			this->username_lbl->Text = L"Username";
			// 
			// username_txt
			// 
			this->username_txt->Location = System::Drawing::Point(99, 204);
			this->username_txt->Name = L"username_txt";
			this->username_txt->Size = System::Drawing::Size(147, 20);
			this->username_txt->TabIndex = 10;
			// 
			// login_but
			// 
			this->login_but->Location = System::Drawing::Point(164, 299);
			this->login_but->Name = L"login_but";
			this->login_but->Size = System::Drawing::Size(93, 39);
			this->login_but->TabIndex = 9;
			this->login_but->Text = L"Login";
			this->login_but->UseVisualStyleBackColor = true;
			this->login_but->Click += gcnew System::EventHandler(this, &MyForm::login_but_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(894, 550);
			this->Controls->Add(this->reg_but);
			this->Controls->Add(this->exit_but);
			this->Controls->Add(this->password_txt);
			this->Controls->Add(this->password_lbl);
			this->Controls->Add(this->username_lbl);
			this->Controls->Add(this->username_txt);
			this->Controls->Add(this->login_but);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(910, 589);
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Airline Reservation System";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void login_but_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from database.users where username='" + this->username_txt->Text + "'and password='" + this->password_txt->Text + "';", conDatabase);
		MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("update database.customers set online=1 where username='"+this->username_txt->Text+"';", conDatabase);
		MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("update database.tickets set online=1 where username='" + this->username_txt->Text + "';", conDatabase);
		MySqlDataReader^ myReader;
		MySqlDataReader^ myReader2;
		MySqlDataReader^ myReader3;
		try
		{

			conDatabase->Open();
			myReader = cmdDataBase->ExecuteReader();
			int count = 0;
			String^ vRights;
			while (myReader->Read()) {
				vRights= myReader->GetString("rights");
				count = count + 1;
			}
			if (count == 1 && vRights == "0") {
				myReader->Close();
				myReader2 = cmdDataBase2->ExecuteReader();
				myReader2->Close();
				myReader3 = cmdDataBase3->ExecuteReader();
				myReader3->Close();
				usermenu^ userForm = gcnew usermenu();
				userForm->ShowDialog();
				this->username_txt->Text = "";
				this->password_txt->Text = "";

			}
			else if (count == 1 && vRights =="1")
			{
				adminmenu^ adminForm = gcnew adminmenu();
				adminForm->ShowDialog();
				this->username_txt->Text = "";
				this->password_txt->Text = "";
			}
			else if (count == 1 && vRights == "2")
			{
				companymenu^ companyForm = gcnew companymenu();
				companyForm->ShowDialog();
				this->username_txt->Text = "";
				this->password_txt->Text = "";
			}
			else {
				MessageBox::Show("Username or Password incorrect. Please try again!");
			}

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	signupmenu^ signupForm = gcnew signupmenu();
	signupForm->ShowDialog();
}
private: System::Void exit_but_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
};
}
