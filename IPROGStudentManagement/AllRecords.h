#pragma once

namespace IPROGStudentManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;

	/// <summary>
	/// Summary for AllRecords
	/// </summary>
	public ref class AllRecords : public System::Windows::Forms::Form
	{
	public:
		AllRecords(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AllRecords()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnback;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ tblinfo;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AllRecords::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnback = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tblinfo = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblinfo))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1249, 800);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// btnback
			// 
			this->btnback->BackColor = System::Drawing::Color::DarkRed;
			this->btnback->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnback->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnback->Location = System::Drawing::Point(1132, 764);
			this->btnback->Name = L"btnback";
			this->btnback->Size = System::Drawing::Size(117, 36);
			this->btnback->TabIndex = 3;
			this->btnback->Text = L"back";
			this->btnback->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(504, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"View All Records";
			// 
			// tblinfo
			// 
			this->tblinfo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblinfo->Location = System::Drawing::Point(99, 177);
			this->tblinfo->Name = L"tblinfo";
			this->tblinfo->Size = System::Drawing::Size(1047, 516);
			this->tblinfo->TabIndex = 5;
			this->tblinfo->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AllRecords::tblinfo_CellContentClick_1);
			// 
			// AllRecords
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1249, 800);
			this->Controls->Add(this->tblinfo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnback);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"AllRecords";
			this->Text = L"AllRecords";
			this->Load += gcnew System::EventHandler(this, &AllRecords::AllRecords_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblinfo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	//sqlconnection
	// need para iconnect server = localhost, port = 3306, database name = dbshop, uid = root, password = yungpasword sa mysql   
	// sa mysql yan
		String^ connString = "Server=localhost;port=3306;database=dbiprog;uid=root;password=1234";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);

#pragma endregion
	private: System::Void AllRecords_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			conn->Open();

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT * FROM subjectiprog ", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			tblinfo->DataSource = dt;


		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to loadimahe idk");
		}
	}
private: System::Void tblInfo_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//String^ currPID = tblInfo->Rows[tblInfo->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	
}
private: System::Void tblinfo_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
