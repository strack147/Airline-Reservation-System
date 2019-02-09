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
	/// Summary for userdispst
	/// </summary>
	public ref class userdispst : public System::Windows::Forms::Form
	{
	public:
		userdispst(void)
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
		~userdispst()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  back_but;
	protected:
	private: System::Windows::Forms::Button^  disp_but;
	private: System::Windows::Forms::DataGridView^  dataGridView1;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(userdispst::typeid));
			this->back_but = (gcnew System::Windows::Forms::Button());
			this->disp_but = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// back_but
			// 
			this->back_but->Location = System::Drawing::Point(261, 379);
			this->back_but->Name = L"back_but";
			this->back_but->Size = System::Drawing::Size(89, 43);
			this->back_but->TabIndex = 8;
			this->back_but->Text = L"Back";
			this->back_but->UseVisualStyleBackColor = true;
			this->back_but->Click += gcnew System::EventHandler(this, &userdispst::back_but_Click);
			// 
			// disp_but
			// 
			this->disp_but->Location = System::Drawing::Point(261, 321);
			this->disp_but->Name = L"disp_but";
			this->disp_but->Size = System::Drawing::Size(89, 43);
			this->disp_but->TabIndex = 7;
			this->disp_but->Text = L"Display";
			this->disp_but->UseVisualStyleBackColor = true;
			this->disp_but->Click += gcnew System::EventHandler(this, &userdispst::disp_but_Click_1);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->Location = System::Drawing::Point(80, 51);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(443, 264);
			this->dataGridView1->TabIndex = 6;
			// 
			// userdispst
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(614, 473);
			this->Controls->Add(this->back_but);
			this->Controls->Add(this->disp_but);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(630, 512);
			this->Name = L"userdispst";
			this->Text = L"Display sold Tickets";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void disp_but_Click_1(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select id,customerid,excrouteid,username from database.tickets where online=1;", conDatabase);
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
private: System::Void back_but_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
};
}