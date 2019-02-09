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
	/// Summary for usercatp
	/// </summary>
	public ref class usercatp : public System::Windows::Forms::Form
	{
	public:
		usercatp(void)
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
		~usercatp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  id_txt;
	private: System::Windows::Forms::Button^  button3;




	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;












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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(usercatp::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->id_txt = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(204, 32);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 4;
			this->dataGridView1->Size = System::Drawing::Size(404, 287);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(274, 376);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Cancel Purchase";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &usercatp::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(274, 427);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 31);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &usercatp::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(246, 344);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ID";
			// 
			// id_txt
			// 
			this->id_txt->Location = System::Drawing::Point(270, 341);
			this->id_txt->Name = L"id_txt";
			this->id_txt->Size = System::Drawing::Size(100, 20);
			this->id_txt->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(533, 325);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Load";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &usercatp::button3_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::LightGray;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(6, 32);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dataGridView2->RowHeadersWidth = 4;
			this->dataGridView2->Size = System::Drawing::Size(205, 287);
			this->dataGridView2->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(58, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Route Codes";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(350, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Customer Tickets";
			// 
			// usercatp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(614, 475);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->id_txt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(650, 514);
			this->Name = L"usercatp";
			this->Text = L"Cancel a ticket Purchase";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
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

	MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("select id,rcode,date from database.routeexc;", conDatabase2);
	MySqlDataReader^ myReade2r;
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
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (id_txt->Text == "") {
		MessageBox::Show("You have to insert an ID.");
	}
	else {
		int number;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase5 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase5 = gcnew MySqlCommand("select * from database.tickets where id='" + this->id_txt->Text + "';", conDatabase5);
		MySqlDataReader^ myReader5;
		try
		{

			conDatabase5->Open();
			myReader5 = cmdDataBase5->ExecuteReader();

			while (myReader5->Read()) {
				number = myReader5->GetInt32("excrouteid");
			}
			myReader5->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		///////////////////////////////////////////////////
		String^ Vmax2;
		int number2;

		MySqlConnection^ conDatabase7 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase7 = gcnew MySqlCommand("select * from database.routeexc where id=" + number + " ;", conDatabase7);
		MySqlDataReader^ myReader7;
		try
		{

			conDatabase7->Open();
			myReader7 = cmdDataBase7->ExecuteReader();

			while (myReader7->Read()) {
				Vmax2 = myReader7->GetString("max");
				number2 = Convert::ToInt32(Vmax2);
				number2++;
			}


			myReader7->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		//////////////////////////////////////////////

		MySqlConnection^ conDatabase6 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase6 = gcnew MySqlCommand("update database.routeexc set max=" + number2 + " where id=" + number + ";", conDatabase6);
		MySqlDataReader^ myReader6;
		try
		{
			conDatabase6->Open();
			myReader6 = cmdDataBase6->ExecuteReader();
			myReader6->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		///////////////////////////////

		MySqlConnection^ conDatabase4 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase4 = gcnew MySqlCommand("delete from database.tickets where id=" + this->id_txt->Text + ";", conDatabase4);
		MySqlDataReader^ myReader4;
		try
		{

			conDatabase4->Open();
			myReader4 = cmdDataBase4->ExecuteReader();
			myReader4->Close();
			MessageBox::Show("You have successfuly Cancel the Ticket Purchase !");
			this->id_txt->Text = "";
		}
		catch (Exception^ ex)
		{
			//MessageBox::Show(ex->Message);
		}
	}
}
};
}
