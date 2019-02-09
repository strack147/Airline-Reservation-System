#pragma once
#include "admcreateuser.h"
#include "admdisproute.h"
#include "admarroute.h"
#include "admarre.h"
#include "admdcl.h"
#include "admdtpc.h"

namespace AirlineReservationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for adminmenu
	/// </summary>
	public ref class adminmenu : public System::Windows::Forms::Form
	{
	public:
		adminmenu(void)
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
		~adminmenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ex_but;
	protected:
	private: System::Windows::Forms::Button^  log_but;
	private: System::Windows::Forms::Button^  disptpc_but;
	private: System::Windows::Forms::Button^  dspcl_but;
	private: System::Windows::Forms::Button^  addrre_but;
	private: System::Windows::Forms::Button^  addrr_but;
	private: System::Windows::Forms::Button^  dispa_but;
	private: System::Windows::Forms::Button^  cu_but;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(adminmenu::typeid));
			this->ex_but = (gcnew System::Windows::Forms::Button());
			this->log_but = (gcnew System::Windows::Forms::Button());
			this->disptpc_but = (gcnew System::Windows::Forms::Button());
			this->dspcl_but = (gcnew System::Windows::Forms::Button());
			this->addrre_but = (gcnew System::Windows::Forms::Button());
			this->addrr_but = (gcnew System::Windows::Forms::Button());
			this->dispa_but = (gcnew System::Windows::Forms::Button());
			this->cu_but = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ex_but
			// 
			this->ex_but->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->ex_but->Location = System::Drawing::Point(46, 444);
			this->ex_but->Name = L"ex_but";
			this->ex_but->Size = System::Drawing::Size(204, 36);
			this->ex_but->TabIndex = 15;
			this->ex_but->Text = L"Exit";
			this->ex_but->UseVisualStyleBackColor = true;
			this->ex_but->Click += gcnew System::EventHandler(this, &adminmenu::ex_but_Click);
			// 
			// log_but
			// 
			this->log_but->Location = System::Drawing::Point(46, 402);
			this->log_but->Name = L"log_but";
			this->log_but->Size = System::Drawing::Size(204, 36);
			this->log_but->TabIndex = 14;
			this->log_but->Text = L"Logout";
			this->log_but->UseVisualStyleBackColor = true;
			this->log_but->Click += gcnew System::EventHandler(this, &adminmenu::log_but_Click);
			// 
			// disptpc_but
			// 
			this->disptpc_but->Location = System::Drawing::Point(46, 360);
			this->disptpc_but->Name = L"disptpc_but";
			this->disptpc_but->Size = System::Drawing::Size(204, 36);
			this->disptpc_but->TabIndex = 13;
			this->disptpc_but->Text = L"Display Tickets per Costumer";
			this->disptpc_but->UseVisualStyleBackColor = true;
			this->disptpc_but->Click += gcnew System::EventHandler(this, &adminmenu::disptpc_but_Click);
			// 
			// dspcl_but
			// 
			this->dspcl_but->Location = System::Drawing::Point(46, 318);
			this->dspcl_but->Name = L"dspcl_but";
			this->dspcl_but->Size = System::Drawing::Size(204, 36);
			this->dspcl_but->TabIndex = 12;
			this->dspcl_but->Text = L"Display Costumer List";
			this->dspcl_but->UseVisualStyleBackColor = true;
			this->dspcl_but->Click += gcnew System::EventHandler(this, &adminmenu::dspcl_but_Click);
			// 
			// addrre_but
			// 
			this->addrre_but->Location = System::Drawing::Point(46, 276);
			this->addrre_but->Name = L"addrre_but";
			this->addrre_but->Size = System::Drawing::Size(204, 36);
			this->addrre_but->TabIndex = 11;
			this->addrre_but->Text = L"Add / Remove Route Execution";
			this->addrre_but->UseVisualStyleBackColor = true;
			this->addrre_but->Click += gcnew System::EventHandler(this, &adminmenu::addrre_but_Click);
			// 
			// addrr_but
			// 
			this->addrr_but->Location = System::Drawing::Point(46, 234);
			this->addrr_but->Name = L"addrr_but";
			this->addrr_but->Size = System::Drawing::Size(204, 36);
			this->addrr_but->TabIndex = 10;
			this->addrr_but->Text = L"Add / Remove Route";
			this->addrr_but->UseVisualStyleBackColor = true;
			this->addrr_but->Click += gcnew System::EventHandler(this, &adminmenu::addrr_but_Click);
			// 
			// dispa_but
			// 
			this->dispa_but->Location = System::Drawing::Point(46, 192);
			this->dispa_but->Name = L"dispa_but";
			this->dispa_but->Size = System::Drawing::Size(204, 36);
			this->dispa_but->TabIndex = 9;
			this->dispa_but->Text = L"Display Airline Route";
			this->dispa_but->UseVisualStyleBackColor = true;
			this->dispa_but->Click += gcnew System::EventHandler(this, &adminmenu::dispa_but_Click);
			// 
			// cu_but
			// 
			this->cu_but->Location = System::Drawing::Point(46, 150);
			this->cu_but->Name = L"cu_but";
			this->cu_but->Size = System::Drawing::Size(204, 36);
			this->cu_but->TabIndex = 8;
			this->cu_but->Text = L"Create User";
			this->cu_but->UseVisualStyleBackColor = true;
			this->cu_but->Click += gcnew System::EventHandler(this, &adminmenu::cu_but_Click);
			// 
			// adminmenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(314, 504);
			this->ControlBox = false;
			this->Controls->Add(this->ex_but);
			this->Controls->Add(this->log_but);
			this->Controls->Add(this->disptpc_but);
			this->Controls->Add(this->dspcl_but);
			this->Controls->Add(this->addrre_but);
			this->Controls->Add(this->addrr_but);
			this->Controls->Add(this->dispa_but);
			this->Controls->Add(this->cu_but);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(330, 543);
			this->Name = L"adminmenu";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Admin";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void cu_but_Click(System::Object^  sender, System::EventArgs^  e) {
		admcreateuser^ createuserForm = gcnew admcreateuser();
		createuserForm->ShowDialog();
	}
private: System::Void dispa_but_Click(System::Object^  sender, System::EventArgs^  e) {
	admdisproute^ disprouteForm = gcnew admdisproute();
	disprouteForm->ShowDialog();
}
private: System::Void addrr_but_Click(System::Object^  sender, System::EventArgs^  e) {
	admarroute^ adrmrouteForm = gcnew admarroute();
	adrmrouteForm->ShowDialog();
}
private: System::Void addrre_but_Click(System::Object^  sender, System::EventArgs^  e) {
	admarre^ admarreForm = gcnew admarre();
	admarreForm->ShowDialog();
}
private: System::Void dspcl_but_Click(System::Object^  sender, System::EventArgs^  e) {
	admdcl^ admdclForm = gcnew admdcl();
	admdclForm->ShowDialog();
}
private: System::Void disptpc_but_Click(System::Object^  sender, System::EventArgs^  e) {
	admdtpc^ ticketpercusForm = gcnew admdtpc();
	ticketpercusForm->ShowDialog();
}
private: System::Void ex_but_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void log_but_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
};
}
