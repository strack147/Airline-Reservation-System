#pragma once
#include "comparc.h"
#include "compare.h"
#include "comparr.h"
#include "compart.h"

namespace AirlineReservationSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for companymenu
	/// </summary>
	public ref class companymenu : public System::Windows::Forms::Form
	{
	public:
		companymenu(void)
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
		~companymenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  arroute_but;
	private: System::Windows::Forms::Button^  arc_but;
	private: System::Windows::Forms::Button^  are_but;
	private: System::Windows::Forms::Button^  art_but;
	private: System::Windows::Forms::Button^  logout_but;
	private: System::Windows::Forms::Button^  exit_but;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(companymenu::typeid));
			this->arroute_but = (gcnew System::Windows::Forms::Button());
			this->arc_but = (gcnew System::Windows::Forms::Button());
			this->are_but = (gcnew System::Windows::Forms::Button());
			this->art_but = (gcnew System::Windows::Forms::Button());
			this->logout_but = (gcnew System::Windows::Forms::Button());
			this->exit_but = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// arroute_but
			// 
			this->arroute_but->Location = System::Drawing::Point(49, 199);
			this->arroute_but->Name = L"arroute_but";
			this->arroute_but->Size = System::Drawing::Size(204, 36);
			this->arroute_but->TabIndex = 0;
			this->arroute_but->Text = L"Add / Remove Route";
			this->arroute_but->UseVisualStyleBackColor = true;
			this->arroute_but->Click += gcnew System::EventHandler(this, &companymenu::arroute_but_Click);
			// 
			// arc_but
			// 
			this->arc_but->Location = System::Drawing::Point(49, 240);
			this->arc_but->Name = L"arc_but";
			this->arc_but->Size = System::Drawing::Size(204, 36);
			this->arc_but->TabIndex = 1;
			this->arc_but->Text = L"Add / Remove Customers";
			this->arc_but->UseVisualStyleBackColor = true;
			this->arc_but->Click += gcnew System::EventHandler(this, &companymenu::arc_but_Click);
			// 
			// are_but
			// 
			this->are_but->Location = System::Drawing::Point(48, 281);
			this->are_but->Name = L"are_but";
			this->are_but->Size = System::Drawing::Size(204, 36);
			this->are_but->TabIndex = 2;
			this->are_but->Text = L"Add / Remove Employees";
			this->are_but->UseVisualStyleBackColor = true;
			this->are_but->Click += gcnew System::EventHandler(this, &companymenu::are_but_Click);
			// 
			// art_but
			// 
			this->art_but->Location = System::Drawing::Point(48, 322);
			this->art_but->Name = L"art_but";
			this->art_but->Size = System::Drawing::Size(204, 36);
			this->art_but->TabIndex = 3;
			this->art_but->Text = L"Add / Remove Tickets";
			this->art_but->UseVisualStyleBackColor = true;
			this->art_but->Click += gcnew System::EventHandler(this, &companymenu::art_but_Click);
			// 
			// logout_but
			// 
			this->logout_but->Location = System::Drawing::Point(49, 363);
			this->logout_but->Name = L"logout_but";
			this->logout_but->Size = System::Drawing::Size(204, 36);
			this->logout_but->TabIndex = 4;
			this->logout_but->Text = L"Logout";
			this->logout_but->UseVisualStyleBackColor = true;
			this->logout_but->Click += gcnew System::EventHandler(this, &companymenu::logout_but_Click);
			// 
			// exit_but
			// 
			this->exit_but->Location = System::Drawing::Point(49, 404);
			this->exit_but->Name = L"exit_but";
			this->exit_but->Size = System::Drawing::Size(204, 36);
			this->exit_but->TabIndex = 5;
			this->exit_but->Text = L"Exit";
			this->exit_but->UseVisualStyleBackColor = true;
			this->exit_but->Click += gcnew System::EventHandler(this, &companymenu::exit_but_Click);
			// 
			// companymenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(314, 504);
			this->Controls->Add(this->exit_but);
			this->Controls->Add(this->logout_but);
			this->Controls->Add(this->art_but);
			this->Controls->Add(this->are_but);
			this->Controls->Add(this->arc_but);
			this->Controls->Add(this->arroute_but);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(330, 543);
			this->Name = L"companymenu";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Company";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void logout_but_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
private: System::Void arroute_but_Click(System::Object^  sender, System::EventArgs^  e) {
	comparr^ comparrForm = gcnew comparr();
	comparrForm->ShowDialog();
}
private: System::Void arc_but_Click(System::Object^  sender, System::EventArgs^  e) {
	comparc^ comparcForm = gcnew comparc();
	comparcForm->ShowDialog();
}
private: System::Void are_but_Click(System::Object^  sender, System::EventArgs^  e) {
	compare^ compareForm = gcnew compare();
	compareForm->ShowDialog();
}
private: System::Void art_but_Click(System::Object^  sender, System::EventArgs^  e) {
	compart^ compartForm = gcnew compart();
	compartForm->ShowDialog();
}
private: System::Void exit_but_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
};
}
