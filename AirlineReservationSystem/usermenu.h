#pragma once
#include "userdisproute.h"
#include "userdispst.h"
#include "userbat.h"
#include "usercatp.h"

namespace AirlineReservationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for usermenu
	/// </summary>
	public ref class usermenu : public System::Windows::Forms::Form
	{
	public:
		usermenu(void)
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
		~usermenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  exit_but;
	protected:
	private: System::Windows::Forms::Button^  log_but;
	private: System::Windows::Forms::Button^  canctic_but;
	private: System::Windows::Forms::Button^  dispst_but;
	private: System::Windows::Forms::Button^  buyt_but;
	private: System::Windows::Forms::Button^  dspar_but;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(usermenu::typeid));
			this->exit_but = (gcnew System::Windows::Forms::Button());
			this->log_but = (gcnew System::Windows::Forms::Button());
			this->canctic_but = (gcnew System::Windows::Forms::Button());
			this->dispst_but = (gcnew System::Windows::Forms::Button());
			this->buyt_but = (gcnew System::Windows::Forms::Button());
			this->dspar_but = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// exit_but
			// 
			this->exit_but->Location = System::Drawing::Point(54, 401);
			this->exit_but->Name = L"exit_but";
			this->exit_but->Size = System::Drawing::Size(204, 36);
			this->exit_but->TabIndex = 11;
			this->exit_but->Text = L"Exit";
			this->exit_but->UseVisualStyleBackColor = true;
			this->exit_but->Click += gcnew System::EventHandler(this, &usermenu::exit_but_Click);
			// 
			// log_but
			// 
			this->log_but->Location = System::Drawing::Point(54, 359);
			this->log_but->Name = L"log_but";
			this->log_but->Size = System::Drawing::Size(204, 36);
			this->log_but->TabIndex = 10;
			this->log_but->Text = L"Logout";
			this->log_but->UseVisualStyleBackColor = true;
			this->log_but->Click += gcnew System::EventHandler(this, &usermenu::log_but_Click);
			// 
			// canctic_but
			// 
			this->canctic_but->Location = System::Drawing::Point(54, 275);
			this->canctic_but->Name = L"canctic_but";
			this->canctic_but->Size = System::Drawing::Size(204, 36);
			this->canctic_but->TabIndex = 9;
			this->canctic_but->Text = L"Cancel a Ticket Purchase";
			this->canctic_but->UseVisualStyleBackColor = true;
			this->canctic_but->Click += gcnew System::EventHandler(this, &usermenu::canctic_but_Click);
			// 
			// dispst_but
			// 
			this->dispst_but->Location = System::Drawing::Point(54, 317);
			this->dispst_but->Name = L"dispst_but";
			this->dispst_but->Size = System::Drawing::Size(204, 36);
			this->dispst_but->TabIndex = 8;
			this->dispst_but->Text = L"Display sold Tickets";
			this->dispst_but->UseVisualStyleBackColor = true;
			this->dispst_but->Click += gcnew System::EventHandler(this, &usermenu::dispst_but_Click);
			// 
			// buyt_but
			// 
			this->buyt_but->Location = System::Drawing::Point(54, 233);
			this->buyt_but->Name = L"buyt_but";
			this->buyt_but->Size = System::Drawing::Size(204, 36);
			this->buyt_but->TabIndex = 7;
			this->buyt_but->Text = L"Buy a Ticket";
			this->buyt_but->UseVisualStyleBackColor = true;
			this->buyt_but->Click += gcnew System::EventHandler(this, &usermenu::buyt_but_Click);
			// 
			// dspar_but
			// 
			this->dspar_but->Location = System::Drawing::Point(54, 191);
			this->dspar_but->Name = L"dspar_but";
			this->dspar_but->Size = System::Drawing::Size(204, 36);
			this->dspar_but->TabIndex = 6;
			this->dspar_but->Text = L"Display Airline Route";
			this->dspar_but->UseVisualStyleBackColor = true;
			this->dspar_but->Click += gcnew System::EventHandler(this, &usermenu::dspar_but_Click);
			// 
			// usermenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(326, 451);
			this->ControlBox = false;
			this->Controls->Add(this->exit_but);
			this->Controls->Add(this->log_but);
			this->Controls->Add(this->canctic_but);
			this->Controls->Add(this->dispst_but);
			this->Controls->Add(this->buyt_but);
			this->Controls->Add(this->dspar_but);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(342, 490);
			this->Name = L"usermenu";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"User";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void log_but_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update database.customers set online=0 where online=1;", conDatabase);
		MySqlDataReader^ myReader;
		MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("update database.tickets set online=0 where online=1;", conDatabase);
		MySqlDataReader^ myReader1;
		try
		{

			conDatabase->Open();
			myReader = cmdDataBase->ExecuteReader();
			myReader->Close();
			myReader1 = cmdDataBase1->ExecuteReader();
			myReader1->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

		this->Hide();
	}
	private: System::Void exit_but_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("update database.customers set online=0 where online=1;", conDatabase2);
		MySqlDataReader^ myReader2;
		MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("update database.tickets set online=0 where online=1;", conDatabase2);
		MySqlDataReader^ myReader3;
		try
		{

			conDatabase2->Open();
			myReader2 = cmdDataBase2->ExecuteReader();
			myReader2->Close();
			myReader3 = cmdDataBase3->ExecuteReader();
			myReader3->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

		Application::Exit();
	}
	private: System::Void dspar_but_Click(System::Object^  sender, System::EventArgs^  e) {
		userdisproute^ userdisprouteForm = gcnew userdisproute();
		userdisprouteForm->ShowDialog();
	}
	private: System::Void buyt_but_Click(System::Object^  sender, System::EventArgs^  e) {
		userbat^ userbatForm = gcnew userbat();
		userbatForm->ShowDialog();
	}
	private: System::Void dispst_but_Click(System::Object^  sender, System::EventArgs^  e) {
		userdispst^ userdispstForm = gcnew userdispst();
		userdispstForm->ShowDialog();
	}
private: System::Void canctic_but_Click(System::Object^  sender, System::EventArgs^  e) {
	usercatp^ usercatpForm = gcnew usercatp();
	usercatpForm->ShowDialog();
}
};
}
