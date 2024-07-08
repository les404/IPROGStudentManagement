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
	/// Summary for ClassResult
	/// </summary>
	public ref class ClassResult : public System::Windows::Forms::Form
	{
	public:
		ClassResult(void)
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
		~ClassResult()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ btnback;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ tblMath;
	private: System::Windows::Forms::DataGridView^ tblEnglish;
	private: System::Windows::Forms::DataGridView^ tblDatabase;
	private: System::Windows::Forms::DataGridView^ tblProgramming;






	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ Programmingtxtxt;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ClassResult::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnback = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tblMath = (gcnew System::Windows::Forms::DataGridView());
			this->tblEnglish = (gcnew System::Windows::Forms::DataGridView());
			this->tblDatabase = (gcnew System::Windows::Forms::DataGridView());
			this->tblProgramming = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Programmingtxtxt = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblMath))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblEnglish))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblDatabase))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblProgramming))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1250, 797);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// btnback
			// 
			this->btnback->BackColor = System::Drawing::Color::DarkRed;
			this->btnback->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnback->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnback->Location = System::Drawing::Point(1121, 749);
			this->btnback->Name = L"btnback";
			this->btnback->Size = System::Drawing::Size(117, 36);
			this->btnback->TabIndex = 38;
			this->btnback->Text = L"back";
			this->btnback->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::DimGray;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(549, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 27);
			this->label2->TabIndex = 39;
			this->label2->Text = L"Class Report";
			this->label2->Click += gcnew System::EventHandler(this, &ClassResult::label2_Click);
			// 
			// tblMath
			// 
			this->tblMath->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblMath->Location = System::Drawing::Point(201, 227);
			this->tblMath->Name = L"tblMath";
			this->tblMath->Size = System::Drawing::Size(402, 223);
			this->tblMath->TabIndex = 42;
			// 
			// tblEnglish
			// 
			this->tblEnglish->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblEnglish->Location = System::Drawing::Point(653, 227);
			this->tblEnglish->Name = L"tblEnglish";
			this->tblEnglish->Size = System::Drawing::Size(402, 223);
			this->tblEnglish->TabIndex = 43;
			// 
			// tblDatabase
			// 
			this->tblDatabase->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblDatabase->Location = System::Drawing::Point(201, 489);
			this->tblDatabase->Name = L"tblDatabase";
			this->tblDatabase->Size = System::Drawing::Size(402, 226);
			this->tblDatabase->TabIndex = 44;
			// 
			// tblProgramming
			// 
			this->tblProgramming->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblProgramming->Location = System::Drawing::Point(653, 489);
			this->tblProgramming->Name = L"tblProgramming";
			this->tblProgramming->Size = System::Drawing::Size(402, 226);
			this->tblProgramming->TabIndex = 45;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::DimGray;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(807, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 24);
			this->label3->TabIndex = 46;
			this->label3->Text = L"English";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::DimGray;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(357, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 24);
			this->label4->TabIndex = 47;
			this->label4->Text = L"Math";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::DimGray;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(275, 462);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(205, 24);
			this->label5->TabIndex = 48;
			this->label5->Text = L"DataBase Management";
			// 
			// Programmingtxtxt
			// 
			this->Programmingtxtxt->AutoSize = true;
			this->Programmingtxtxt->BackColor = System::Drawing::Color::DimGray;
			this->Programmingtxtxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Programmingtxtxt->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Programmingtxtxt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Programmingtxtxt.Image")));
			this->Programmingtxtxt->Location = System::Drawing::Point(790, 462);
			this->Programmingtxtxt->Name = L"Programmingtxtxt";
			this->Programmingtxtxt->Size = System::Drawing::Size(124, 24);
			this->Programmingtxtxt->TabIndex = 49;
			this->Programmingtxtxt->Text = L"Programming";
			// 
			// ClassResult
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1250, 797);
			this->Controls->Add(this->Programmingtxtxt);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tblProgramming);
			this->Controls->Add(this->tblDatabase);
			this->Controls->Add(this->tblEnglish);
			this->Controls->Add(this->tblMath);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnback);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ClassResult";
			this->Text = L"ClassResult";
			this->Load += gcnew System::EventHandler(this, &ClassResult::ClassResult_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblMath))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblEnglish))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblDatabase))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblProgramming))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ connString = "Server=localhost;port=3306;database=dbiprog;uid=root;password=1234";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);

	private: System::Void ClassResult_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			conn->Open();

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT ID,LastName,Math_Grade,Math_Evaluation FROM subjectiprog ", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			tblMath->DataSource = dt;

			MySqlDataAdapter^ adaptera= gcnew MySqlDataAdapter("SELECT ID,LastName,English_Grade,English_Evaluation FROM subjectiprog ", conn);
			DataTable^ dta = gcnew DataTable();
			adaptera->Fill(dta);
			tblEnglish->DataSource = dta;

			MySqlDataAdapter^ adapterb = gcnew MySqlDataAdapter("SELECT ID,LastName,Database_Grade, Database_Evaluation FROM subjectiprog ", conn);
			DataTable^ dtb = gcnew DataTable();
			adapterb->Fill(dtb);
			tblDatabase->DataSource = dtb;

			MySqlDataAdapter^ adapterc = gcnew MySqlDataAdapter("SELECT ID,LastName,Programming_Grade,Programming_Evaluation FROM subjectiprog ", conn);
			DataTable^ dtc = gcnew DataTable();
			adapterc->Fill(dtc);
			tblProgramming->DataSource = dtc;

		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to loadimahe idk");
		}
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
