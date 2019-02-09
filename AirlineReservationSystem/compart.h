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
	/// Summary for compart
	/// </summary>
	public ref class compart : public System::Windows::Forms::Form
	{
	public:
		compart(void)
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
		~compart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:



	private: System::Windows::Forms::TextBox^  cid_txt;
	private: System::Windows::Forms::TextBox^  excrid_txt;
	private: System::Windows::Forms::TextBox^  id_txt;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DataGridView^  dataGridView5;
	private: System::Windows::Forms::Label^  label6;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(compart::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->cid_txt = (gcnew System::Windows::Forms::TextBox());
			this->excrid_txt = (gcnew System::Windows::Forms::TextBox());
			this->id_txt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(13, 278);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 4;
			this->dataGridView1->Size = System::Drawing::Size(308, 172);
			this->dataGridView1->TabIndex = 0;
			// 
			// cid_txt
			// 
			this->cid_txt->Location = System::Drawing::Point(441, 346);
			this->cid_txt->Name = L"cid_txt";
			this->cid_txt->Size = System::Drawing::Size(100, 20);
			this->cid_txt->TabIndex = 1;
			// 
			// excrid_txt
			// 
			this->excrid_txt->Location = System::Drawing::Point(441, 383);
			this->excrid_txt->Name = L"excrid_txt";
			this->excrid_txt->Size = System::Drawing::Size(100, 20);
			this->excrid_txt->TabIndex = 2;
			// 
			// id_txt
			// 
			this->id_txt->Location = System::Drawing::Point(84, 453);
			this->id_txt->Name = L"id_txt";
			this->id_txt->Size = System::Drawing::Size(100, 20);
			this->id_txt->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(477, 264);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &compart::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(190, 453);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 20);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Remove";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &compart::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(401, 411);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Add";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &compart::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(482, 411);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &compart::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(370, 349);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Customer ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(343, 386);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Execute Route ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(61, 456);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(143, 262);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Tickets";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(31, 18);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 4;
			this->dataGridView2->Size = System::Drawing::Size(521, 115);
			this->dataGridView2->TabIndex = 136;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(263, 2);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 137;
			this->label5->Text = L"Customers";
			// 
			// dataGridView5
			// 
			this->dataGridView5->AllowUserToAddRows = false;
			this->dataGridView5->AllowUserToDeleteRows = false;
			this->dataGridView5->AllowUserToResizeColumns = false;
			this->dataGridView5->AllowUserToResizeRows = false;
			this->dataGridView5->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(31, 154);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->ReadOnly = true;
			this->dataGridView5->RowHeadersWidth = 4;
			this->dataGridView5->Size = System::Drawing::Size(521, 104);
			this->dataGridView5->TabIndex = 138;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(245, 137);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 13);
			this->label6->TabIndex = 139;
			this->label6->Text = L"Route Executions";
			// 
			// compart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(611, 475);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->id_txt);
			this->Controls->Add(this->excrid_txt);
			this->Controls->Add(this->cid_txt);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(627, 514);
			this->Name = L"compart";
			this->Text = L"Add / Remove Tickets";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select id,rcode,date,p1,p2,ar1,ar2,ar3,ar4,max from database.routeexc;", conDatabase);
		MySqlDataReader^ myReader;
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			this->dataGridView5->DataSource = bSource;
			sda->Update(dbdataset);
			myReader->Close();
		}
		catch (Exception^ ex) {
			//MessageBox::Show(ex->Message);
		}	

		MySqlConnection^ conDatabase2 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("select id,fname,lname,number,address,username from database.customers;", conDatabase2);
		MySqlDataReader^ myReader2;
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase2;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			this->dataGridView2->DataSource = bSource;
			sda->Update(dbdataset);
			myReader2->Close();

		}
		catch (Exception^ ex) {
			//MessageBox::Show(ex->Message);
		}

		MySqlConnection^ conDatabase3 = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("select id,customerid,excrouteid,username from database.tickets;", conDatabase3);
		MySqlDataReader^ myReader3;
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase3;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			this->dataGridView1->DataSource = bSource;
			sda->Update(dbdataset);
			myReader3->Close();

		}
		catch (Exception^ ex) {
			//MessageBox::Show(ex->Message);
		}

	}


private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
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
			MessageBox::Show("You have successfuly deleted the ticket !");
			this->id_txt->Text = "";
		}
		catch (Exception^ ex)
		{
			//MessageBox::Show(ex->Message);
		}
	}
}



	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ Vus;

		if (cid_txt->Text == "" || excrid_txt->Text == "") {
			MessageBox::Show("You have to complete all the fields.");
		}
		else if (cid_txt->Text != "") {
			String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
			MySqlConnection^ conDatabase11 = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase11 = gcnew MySqlCommand("select * from database.customers where id='" + this->cid_txt->Text + "';", conDatabase11);
			MySqlDataReader^ myReader11;
			try
			{

				conDatabase11->Open();
				myReader11 = cmdDataBase11->ExecuteReader();
				int count = 0;
				while (myReader11->Read()) {
					count = count + 1;
				}
				if (count != 1) {
					MessageBox::Show("Please check again Customer ID.");
				}
				else { goto finished1; }
				myReader11->Close();

			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
		else if (excrid_txt->Text != "") {
		finished1:
			String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
			MySqlConnection^ conDatabase12 = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase12 = gcnew MySqlCommand("select * from database.routeexc where id='" + this->excrid_txt->Text + "';", conDatabase12);
			MySqlDataReader^ myReader12;
			try
			{

				conDatabase12->Open();
				myReader12 = cmdDataBase12->ExecuteReader();
				int count = 0;
				while (myReader12->Read()) {
					count = count + 1;
				}
				if (count != 1) {
					MessageBox::Show("Please check again Route Execution ID.");
				}
				else { goto finished; }
				myReader12->Close();

			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
		else
		{
			finished:
			String^ constring = L"datasource=localhost;port=3306;username=root;password=" ";";
			MySqlConnection^ conDatabase8 = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase8 = gcnew MySqlCommand("select * from database.customers where id=" + this->cid_txt->Text + ";", conDatabase8);
			MySqlDataReader^ myReader8;
			try
			{
				conDatabase8->Open();
				myReader8 = cmdDataBase8->ExecuteReader();

				while (myReader8->Read()) {
					Vus = myReader8->GetString("username");
				}
				myReader8->Close();
				
			}
			catch (Exception^ ex)
			{
				//MessageBox::Show(ex->Message);
			}
			////////////////////////////////


			String^ Vmax2;
			int number;

			MySqlConnection^ conDatabase10 = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase10 = gcnew MySqlCommand("select * from database.routeexc where id='" + this->excrid_txt->Text + "' ;", conDatabase10);
			MySqlDataReader^ myReader10;
			try
			{

				conDatabase10->Open();
				myReader10 = cmdDataBase10->ExecuteReader();

				while (myReader10->Read()) {
					Vmax2 = myReader10->GetString("max");
					number = Convert::ToInt32(Vmax2);
					number--;
				}


				myReader10->Close();
			}
			catch (Exception^ ex)
			{
				//MessageBox::Show(ex->Message);
			}


			///////////////////////////////////////
			MySqlConnection^ conDatabase11 = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase11 = gcnew MySqlCommand("update database.routeexc set max='" + number + "' where id='" + this->excrid_txt->Text + "' ;", conDatabase11);
			MySqlDataReader^ myReader11;
			try
			{
				conDatabase11->Open();
				myReader11 = cmdDataBase11->ExecuteReader();
				myReader11->Close();
			}
			catch (Exception^ ex)
			{
				//MessageBox::Show(ex->Message);
			}
			//////////////////////////////////


			MySqlConnection^ conDatabase9 = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase9 = gcnew MySqlCommand("insert into database.tickets (customerid,excrouteid,username,online) values ('" + this->cid_txt->Text + "','" + this->excrid_txt->Text + "','"+Vus+"',0);", conDatabase9);
			MySqlDataReader^ myReader9;
			try
			{
				conDatabase9->Open();
				myReader9 = cmdDataBase9->ExecuteReader();
				myReader9->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
			MessageBox::Show("You have successfuly added a ticket !");

			this->cid_txt->Text = "";
			this->excrid_txt->Text = "";
		}
}
};
}