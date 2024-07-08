#pragma once
#include "AllRecords.h"
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
	/// Summary for NewRecord
	/// </summary>
	public ref class NewRecord : public System::Windows::Forms::Form
	{
	public:

		NewRecord(void)
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
		~NewRecord()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ btnback;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::TextBox^ txtMiddleName;




	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::TextBox^ txtMAct;
	private: System::Windows::Forms::TextBox^ txtMMidterms;
	private: System::Windows::Forms::TextBox^ txtMFinals;
	private: System::Windows::Forms::TextBox^ txtMRecitation;

	private: System::Windows::Forms::TextBox^ txtMAttendance;









	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label24;

	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ txtPAct;

	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TextBox^ txtPMidterms;
	private: System::Windows::Forms::TextBox^ txtPAttendance;


	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::TextBox^ txtPFinals;
	private: System::Windows::Forms::TextBox^ txtPRecitation;






















	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtEAct;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txtEMidterms;
	private: System::Windows::Forms::TextBox^ txtEAttendance;


	private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ txtEFinals;
private: System::Windows::Forms::TextBox^ txtERecitation;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button4;







private: System::Windows::Forms::Button^ btnAddM;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TextBox^ txtDBAct;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TextBox^ txtDBMidterms;
private: System::Windows::Forms::TextBox^ txtDBAttendance;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ txtDBFinals;
private: System::Windows::Forms::TextBox^ txtDBRecitation;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ txtMgrade;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ txtMevaluation;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ txtPevaluation;
private: System::Windows::Forms::Label^ txtPGrade;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ txtDBevaluation;
private: System::Windows::Forms::Label^ txtDBgrade;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ txtEevaluation;
private: System::Windows::Forms::Label^ txtEgrade;
private: System::Windows::Forms::Label^ label36;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NewRecord::typeid));
			this->btnback = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->txtMiddleName = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtMAct = (gcnew System::Windows::Forms::TextBox());
			this->txtMMidterms = (gcnew System::Windows::Forms::TextBox());
			this->txtMFinals = (gcnew System::Windows::Forms::TextBox());
			this->txtMRecitation = (gcnew System::Windows::Forms::TextBox());
			this->txtMAttendance = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnAddM = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->txtPAct = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->txtPMidterms = (gcnew System::Windows::Forms::TextBox());
			this->txtPAttendance = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->txtPFinals = (gcnew System::Windows::Forms::TextBox());
			this->txtPRecitation = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->txtDBAct = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->txtDBMidterms = (gcnew System::Windows::Forms::TextBox());
			this->txtDBAttendance = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txtDBFinals = (gcnew System::Windows::Forms::TextBox());
			this->txtDBRecitation = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtEAct = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtEMidterms = (gcnew System::Windows::Forms::TextBox());
			this->txtEAttendance = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->txtEFinals = (gcnew System::Windows::Forms::TextBox());
			this->txtERecitation = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->txtMevaluation = (gcnew System::Windows::Forms::Label());
			this->txtMgrade = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->txtEevaluation = (gcnew System::Windows::Forms::Label());
			this->txtEgrade = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->txtDBevaluation = (gcnew System::Windows::Forms::Label());
			this->txtDBgrade = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->txtPevaluation = (gcnew System::Windows::Forms::Label());
			this->txtPGrade = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnback
			// 
			this->btnback->BackColor = System::Drawing::Color::DarkRed;
			this->btnback->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnback->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnback->Location = System::Drawing::Point(0, 0);
			this->btnback->Name = L"btnback";
			this->btnback->Size = System::Drawing::Size(117, 36);
			this->btnback->TabIndex = 2;
			this->btnback->Text = L"back";
			this->btnback->UseVisualStyleBackColor = false;
			this->btnback->Click += gcnew System::EventHandler(this, &NewRecord::btnback_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(153, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 19);
			this->label1->TabIndex = 3;
			this->label1->Text = L"NAME";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(870, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 19);
			this->label2->TabIndex = 4;
			this->label2->Text = L"ID NUMBER";
			this->label2->Click += gcnew System::EventHandler(this, &NewRecord::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(127, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 19);
			this->label3->TabIndex = 5;
			this->label3->Text = L"GRADES";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(3, 71);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 21);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Activities";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(3, 183);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 21);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Recitation";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(3, 146);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 21);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Finals";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(3, 106);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(77, 21);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Midterms";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(3, 220);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 21);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Attendance";
			// 
			// txtFirstName
			// 
			this->txtFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFirstName->Location = System::Drawing::Point(217, 40);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(190, 24);
			this->txtFirstName->TabIndex = 13;
			// 
			// txtMiddleName
			// 
			this->txtMiddleName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMiddleName->Location = System::Drawing::Point(644, 39);
			this->txtMiddleName->Name = L"txtMiddleName";
			this->txtMiddleName->Size = System::Drawing::Size(190, 24);
			this->txtMiddleName->TabIndex = 14;
			// 
			// txtLastName
			// 
			this->txtLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLastName->Location = System::Drawing::Point(426, 40);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(190, 24);
			this->txtLastName->TabIndex = 15;
			// 
			// txtID
			// 
			this->txtID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtID->Location = System::Drawing::Point(976, 39);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(190, 24);
			this->txtID->TabIndex = 16;
			// 
			// txtMAct
			// 
			this->txtMAct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMAct->Location = System::Drawing::Point(91, 68);
			this->txtMAct->Name = L"txtMAct";
			this->txtMAct->Size = System::Drawing::Size(147, 24);
			this->txtMAct->TabIndex = 17;
			this->txtMAct->Text = L"0";
			// 
			// txtMMidterms
			// 
			this->txtMMidterms->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMMidterms->Location = System::Drawing::Point(91, 106);
			this->txtMMidterms->Name = L"txtMMidterms";
			this->txtMMidterms->Size = System::Drawing::Size(147, 24);
			this->txtMMidterms->TabIndex = 18;
			this->txtMMidterms->Text = L"0";
			// 
			// txtMFinals
			// 
			this->txtMFinals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMFinals->Location = System::Drawing::Point(91, 146);
			this->txtMFinals->Name = L"txtMFinals";
			this->txtMFinals->Size = System::Drawing::Size(147, 24);
			this->txtMFinals->TabIndex = 19;
			this->txtMFinals->Text = L"0";
			// 
			// txtMRecitation
			// 
			this->txtMRecitation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMRecitation->Location = System::Drawing::Point(91, 183);
			this->txtMRecitation->Name = L"txtMRecitation";
			this->txtMRecitation->Size = System::Drawing::Size(147, 24);
			this->txtMRecitation->TabIndex = 20;
			this->txtMRecitation->Text = L"0";
			// 
			// txtMAttendance
			// 
			this->txtMAttendance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMAttendance->Location = System::Drawing::Point(91, 220);
			this->txtMAttendance->Name = L"txtMAttendance";
			this->txtMAttendance->Size = System::Drawing::Size(147, 24);
			this->txtMAttendance->TabIndex = 21;
			this->txtMAttendance->Text = L"0";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->btnAddM);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->btnback);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->txtID);
			this->panel1->Controls->Add(this->txtLastName);
			this->panel1->Controls->Add(this->txtMiddleName);
			this->panel1->Controls->Add(this->txtFirstName);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 123);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1206, 533);
			this->panel1->TabIndex = 24;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &NewRecord::panel1_Paint);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(635, 453);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(265, 51);
			this->button4->TabIndex = 24;
			this->button4->Text = L"View Records";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &NewRecord::button4_Click);
			// 
			// btnAddM
			// 
			this->btnAddM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnAddM->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddM->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnAddM->Location = System::Drawing::Point(335, 453);
			this->btnAddM->Name = L"btnAddM";
			this->btnAddM->Size = System::Drawing::Size(264, 51);
			this->btnAddM->TabIndex = 23;
			this->btnAddM->Text = L"Add";
			this->btnAddM->UseVisualStyleBackColor = false;
			this->btnAddM->Click += gcnew System::EventHandler(this, &NewRecord::btnAddR_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::DarkRed;
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel5->Controls->Add(this->label41);
			this->panel5->Controls->Add(this->txtPevaluation);
			this->panel5->Controls->Add(this->txtPGrade);
			this->panel5->Controls->Add(this->label44);
			this->panel5->Controls->Add(this->label24);
			this->panel5->Controls->Add(this->label25);
			this->panel5->Controls->Add(this->label26);
			this->panel5->Controls->Add(this->label27);
			this->panel5->Controls->Add(this->txtPAct);
			this->panel5->Controls->Add(this->label28);
			this->panel5->Controls->Add(this->label29);
			this->panel5->Controls->Add(this->txtPMidterms);
			this->panel5->Controls->Add(this->txtPAttendance);
			this->panel5->Controls->Add(this->label30);
			this->panel5->Controls->Add(this->txtPFinals);
			this->panel5->Controls->Add(this->txtPRecitation);
			this->panel5->Location = System::Drawing::Point(906, 89);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(277, 336);
			this->panel5->TabIndex = 27;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label24->Location = System::Drawing::Point(3, 13);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(106, 19);
			this->label24->TabIndex = 22;
			this->label24->Text = L"Programming";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label25->Location = System::Drawing::Point(3, 220);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(88, 21);
			this->label25->TabIndex = 11;
			this->label25->Text = L"Attendance";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label26->Location = System::Drawing::Point(3, 106);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(77, 21);
			this->label26->TabIndex = 10;
			this->label26->Text = L"Midterms";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label27->Location = System::Drawing::Point(3, 146);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(50, 21);
			this->label27->TabIndex = 9;
			this->label27->Text = L"Finals";
			// 
			// txtPAct
			// 
			this->txtPAct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPAct->Location = System::Drawing::Point(91, 68);
			this->txtPAct->Name = L"txtPAct";
			this->txtPAct->Size = System::Drawing::Size(147, 24);
			this->txtPAct->TabIndex = 17;
			this->txtPAct->Text = L"0";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label28->Location = System::Drawing::Point(127, 39);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(68, 19);
			this->label28->TabIndex = 5;
			this->label28->Text = L"GRADES";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label29->Location = System::Drawing::Point(3, 183);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(79, 21);
			this->label29->TabIndex = 8;
			this->label29->Text = L"Recitation";
			// 
			// txtPMidterms
			// 
			this->txtPMidterms->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPMidterms->Location = System::Drawing::Point(91, 106);
			this->txtPMidterms->Name = L"txtPMidterms";
			this->txtPMidterms->Size = System::Drawing::Size(147, 24);
			this->txtPMidterms->TabIndex = 18;
			this->txtPMidterms->Text = L"0";
			// 
			// txtPAttendance
			// 
			this->txtPAttendance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPAttendance->Location = System::Drawing::Point(91, 220);
			this->txtPAttendance->Name = L"txtPAttendance";
			this->txtPAttendance->Size = System::Drawing::Size(147, 24);
			this->txtPAttendance->TabIndex = 21;
			this->txtPAttendance->Text = L"0";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label30->Location = System::Drawing::Point(3, 71);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(72, 21);
			this->label30->TabIndex = 7;
			this->label30->Text = L"Activities";
			// 
			// txtPFinals
			// 
			this->txtPFinals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPFinals->Location = System::Drawing::Point(91, 146);
			this->txtPFinals->Name = L"txtPFinals";
			this->txtPFinals->Size = System::Drawing::Size(147, 24);
			this->txtPFinals->TabIndex = 19;
			this->txtPFinals->Text = L"0";
			// 
			// txtPRecitation
			// 
			this->txtPRecitation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPRecitation->Location = System::Drawing::Point(91, 183);
			this->txtPRecitation->Name = L"txtPRecitation";
			this->txtPRecitation->Size = System::Drawing::Size(147, 24);
			this->txtPRecitation->TabIndex = 20;
			this->txtPRecitation->Text = L"0";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Maroon;
			this->panel4->Controls->Add(this->label37);
			this->panel4->Controls->Add(this->txtDBevaluation);
			this->panel4->Controls->Add(this->txtDBgrade);
			this->panel4->Controls->Add(this->label40);
			this->panel4->Controls->Add(this->label21);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->label19);
			this->panel4->Controls->Add(this->label20);
			this->panel4->Controls->Add(this->txtDBAct);
			this->panel4->Controls->Add(this->label22);
			this->panel4->Controls->Add(this->txtDBMidterms);
			this->panel4->Controls->Add(this->txtDBAttendance);
			this->panel4->Controls->Add(this->label23);
			this->panel4->Controls->Add(this->txtDBFinals);
			this->panel4->Controls->Add(this->txtDBRecitation);
			this->panel4->Location = System::Drawing::Point(607, 89);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(277, 336);
			this->panel4->TabIndex = 26;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label21->Location = System::Drawing::Point(107, 39);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(68, 19);
			this->label21->TabIndex = 24;
			this->label21->Text = L"GRADES";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label17->Location = System::Drawing::Point(3, 13);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(172, 19);
			this->label17->TabIndex = 22;
			this->label17->Text = L"DataBase Management";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label18->Location = System::Drawing::Point(3, 220);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(88, 21);
			this->label18->TabIndex = 11;
			this->label18->Text = L"Attendance";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label19->Location = System::Drawing::Point(3, 106);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(77, 21);
			this->label19->TabIndex = 10;
			this->label19->Text = L"Midterms";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label20->Location = System::Drawing::Point(3, 146);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(50, 21);
			this->label20->TabIndex = 9;
			this->label20->Text = L"Finals";
			// 
			// txtDBAct
			// 
			this->txtDBAct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDBAct->Location = System::Drawing::Point(91, 68);
			this->txtDBAct->Name = L"txtDBAct";
			this->txtDBAct->Size = System::Drawing::Size(147, 24);
			this->txtDBAct->TabIndex = 17;
			this->txtDBAct->Text = L"0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label22->Location = System::Drawing::Point(3, 183);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(79, 21);
			this->label22->TabIndex = 8;
			this->label22->Text = L"Recitation";
			// 
			// txtDBMidterms
			// 
			this->txtDBMidterms->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDBMidterms->Location = System::Drawing::Point(91, 106);
			this->txtDBMidterms->Name = L"txtDBMidterms";
			this->txtDBMidterms->Size = System::Drawing::Size(147, 24);
			this->txtDBMidterms->TabIndex = 18;
			this->txtDBMidterms->Text = L"0";
			// 
			// txtDBAttendance
			// 
			this->txtDBAttendance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtDBAttendance->Location = System::Drawing::Point(91, 220);
			this->txtDBAttendance->Name = L"txtDBAttendance";
			this->txtDBAttendance->Size = System::Drawing::Size(147, 24);
			this->txtDBAttendance->TabIndex = 21;
			this->txtDBAttendance->Text = L"0";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label23->Location = System::Drawing::Point(3, 71);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(72, 21);
			this->label23->TabIndex = 7;
			this->label23->Text = L"Activities";
			// 
			// txtDBFinals
			// 
			this->txtDBFinals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDBFinals->Location = System::Drawing::Point(91, 146);
			this->txtDBFinals->Name = L"txtDBFinals";
			this->txtDBFinals->Size = System::Drawing::Size(147, 24);
			this->txtDBFinals->TabIndex = 19;
			this->txtDBFinals->Text = L"0";
			// 
			// txtDBRecitation
			// 
			this->txtDBRecitation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtDBRecitation->Location = System::Drawing::Point(91, 183);
			this->txtDBRecitation->Name = L"txtDBRecitation";
			this->txtDBRecitation->Size = System::Drawing::Size(147, 24);
			this->txtDBRecitation->TabIndex = 20;
			this->txtDBRecitation->Text = L"0";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Maroon;
			this->panel3->Controls->Add(this->label32);
			this->panel3->Controls->Add(this->txtEevaluation);
			this->panel3->Controls->Add(this->txtEgrade);
			this->panel3->Controls->Add(this->label36);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->txtEAct);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->txtEMidterms);
			this->panel3->Controls->Add(this->txtEAttendance);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->txtEFinals);
			this->panel3->Controls->Add(this->txtERecitation);
			this->panel3->Location = System::Drawing::Point(315, 89);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(277, 336);
			this->panel3->TabIndex = 25;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(16, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 19);
			this->label4->TabIndex = 22;
			this->label4->Text = L"English";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label11->Location = System::Drawing::Point(3, 220);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(88, 21);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Attendance";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label12->Location = System::Drawing::Point(3, 106);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(77, 21);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Midterms";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label13->Location = System::Drawing::Point(3, 146);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(50, 21);
			this->label13->TabIndex = 9;
			this->label13->Text = L"Finals";
			// 
			// txtEAct
			// 
			this->txtEAct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEAct->Location = System::Drawing::Point(91, 68);
			this->txtEAct->Name = L"txtEAct";
			this->txtEAct->Size = System::Drawing::Size(147, 24);
			this->txtEAct->TabIndex = 17;
			this->txtEAct->Text = L"0";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label14->Location = System::Drawing::Point(127, 39);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(68, 19);
			this->label14->TabIndex = 5;
			this->label14->Text = L"GRADES";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label15->Location = System::Drawing::Point(3, 183);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(79, 21);
			this->label15->TabIndex = 8;
			this->label15->Text = L"Recitation";
			// 
			// txtEMidterms
			// 
			this->txtEMidterms->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEMidterms->Location = System::Drawing::Point(91, 106);
			this->txtEMidterms->Name = L"txtEMidterms";
			this->txtEMidterms->Size = System::Drawing::Size(147, 24);
			this->txtEMidterms->TabIndex = 18;
			this->txtEMidterms->Text = L"0";
			// 
			// txtEAttendance
			// 
			this->txtEAttendance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEAttendance->Location = System::Drawing::Point(91, 220);
			this->txtEAttendance->Name = L"txtEAttendance";
			this->txtEAttendance->Size = System::Drawing::Size(147, 24);
			this->txtEAttendance->TabIndex = 21;
			this->txtEAttendance->Text = L"0";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label16->Location = System::Drawing::Point(3, 71);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(72, 21);
			this->label16->TabIndex = 7;
			this->label16->Text = L"Activities";
			// 
			// txtEFinals
			// 
			this->txtEFinals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEFinals->Location = System::Drawing::Point(91, 146);
			this->txtEFinals->Name = L"txtEFinals";
			this->txtEFinals->Size = System::Drawing::Size(147, 24);
			this->txtEFinals->TabIndex = 19;
			this->txtEFinals->Text = L"0";
			// 
			// txtERecitation
			// 
			this->txtERecitation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtERecitation->Location = System::Drawing::Point(91, 183);
			this->txtERecitation->Name = L"txtERecitation";
			this->txtERecitation->Size = System::Drawing::Size(147, 24);
			this->txtERecitation->TabIndex = 20;
			this->txtERecitation->Text = L"0";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Maroon;
			this->panel2->Controls->Add(this->label33);
			this->panel2->Controls->Add(this->txtMevaluation);
			this->panel2->Controls->Add(this->txtMgrade);
			this->panel2->Controls->Add(this->label31);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->txtMAct);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->txtMMidterms);
			this->panel2->Controls->Add(this->txtMAttendance);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->txtMFinals);
			this->panel2->Controls->Add(this->txtMRecitation);
			this->panel2->Location = System::Drawing::Point(12, 89);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(277, 336);
			this->panel2->TabIndex = 24;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label33->Location = System::Drawing::Point(14, 296);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(82, 21);
			this->label33->TabIndex = 26;
			this->label33->Text = L"Evaluation";
			// 
			// txtMevaluation
			// 
			this->txtMevaluation->AutoSize = true;
			this->txtMevaluation->BackColor = System::Drawing::Color::White;
			this->txtMevaluation->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMevaluation->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtMevaluation->Location = System::Drawing::Point(114, 296);
			this->txtMevaluation->Name = L"txtMevaluation";
			this->txtMevaluation->Size = System::Drawing::Size(92, 21);
			this->txtMevaluation->TabIndex = 25;
			this->txtMevaluation->Text = L"Evaluation";
			// 
			// txtMgrade
			// 
			this->txtMgrade->AutoSize = true;
			this->txtMgrade->BackColor = System::Drawing::Color::White;
			this->txtMgrade->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMgrade->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtMgrade->Location = System::Drawing::Point(127, 256);
			this->txtMgrade->Name = L"txtMgrade";
			this->txtMgrade->Size = System::Drawing::Size(55, 21);
			this->txtMgrade->TabIndex = 24;
			this->txtMgrade->Text = L"Grade";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label31->Location = System::Drawing::Point(14, 256);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(52, 21);
			this->label31->TabIndex = 23;
			this->label31->Text = L"Grade";
			this->label31->Click += gcnew System::EventHandler(this, &NewRecord::label31_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(3, 13);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(46, 19);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Math";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1206, 656);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label32->Location = System::Drawing::Point(10, 296);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(82, 21);
			this->label32->TabIndex = 30;
			this->label32->Text = L"Evaluation";
			// 
			// txtEevaluation
			// 
			this->txtEevaluation->AutoSize = true;
			this->txtEevaluation->BackColor = System::Drawing::Color::White;
			this->txtEevaluation->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEevaluation->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtEevaluation->Location = System::Drawing::Point(110, 296);
			this->txtEevaluation->Name = L"txtEevaluation";
			this->txtEevaluation->Size = System::Drawing::Size(92, 21);
			this->txtEevaluation->TabIndex = 29;
			this->txtEevaluation->Text = L"Evaluation";
			// 
			// txtEgrade
			// 
			this->txtEgrade->AutoSize = true;
			this->txtEgrade->BackColor = System::Drawing::Color::White;
			this->txtEgrade->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEgrade->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtEgrade->Location = System::Drawing::Point(123, 256);
			this->txtEgrade->Name = L"txtEgrade";
			this->txtEgrade->Size = System::Drawing::Size(55, 21);
			this->txtEgrade->TabIndex = 28;
			this->txtEgrade->Text = L"Grade";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::Transparent;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label36->Location = System::Drawing::Point(10, 256);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(52, 21);
			this->label36->TabIndex = 27;
			this->label36->Text = L"Grade";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label37->Location = System::Drawing::Point(9, 296);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(82, 21);
			this->label37->TabIndex = 30;
			this->label37->Text = L"Evaluation";
			// 
			// txtDBevaluation
			// 
			this->txtDBevaluation->AutoSize = true;
			this->txtDBevaluation->BackColor = System::Drawing::Color::White;
			this->txtDBevaluation->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDBevaluation->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtDBevaluation->Location = System::Drawing::Point(109, 296);
			this->txtDBevaluation->Name = L"txtDBevaluation";
			this->txtDBevaluation->Size = System::Drawing::Size(92, 21);
			this->txtDBevaluation->TabIndex = 29;
			this->txtDBevaluation->Text = L"Evaluation";
			// 
			// txtDBgrade
			// 
			this->txtDBgrade->AutoSize = true;
			this->txtDBgrade->BackColor = System::Drawing::Color::White;
			this->txtDBgrade->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDBgrade->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtDBgrade->Location = System::Drawing::Point(122, 256);
			this->txtDBgrade->Name = L"txtDBgrade";
			this->txtDBgrade->Size = System::Drawing::Size(55, 21);
			this->txtDBgrade->TabIndex = 28;
			this->txtDBgrade->Text = L"Grade";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::Transparent;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label40->Location = System::Drawing::Point(9, 256);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(52, 21);
			this->label40->TabIndex = 27;
			this->label40->Text = L"Grade";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::Transparent;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label41->Location = System::Drawing::Point(9, 296);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(82, 21);
			this->label41->TabIndex = 30;
			this->label41->Text = L"Evaluation";
			// 
			// txtPevaluation
			// 
			this->txtPevaluation->AutoSize = true;
			this->txtPevaluation->BackColor = System::Drawing::Color::White;
			this->txtPevaluation->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPevaluation->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtPevaluation->Location = System::Drawing::Point(109, 296);
			this->txtPevaluation->Name = L"txtPevaluation";
			this->txtPevaluation->Size = System::Drawing::Size(92, 21);
			this->txtPevaluation->TabIndex = 29;
			this->txtPevaluation->Text = L"Evaluation";
			// 
			// txtPGrade
			// 
			this->txtPGrade->AutoSize = true;
			this->txtPGrade->BackColor = System::Drawing::Color::White;
			this->txtPGrade->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPGrade->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtPGrade->Location = System::Drawing::Point(122, 256);
			this->txtPGrade->Name = L"txtPGrade";
			this->txtPGrade->Size = System::Drawing::Size(55, 21);
			this->txtPGrade->TabIndex = 28;
			this->txtPGrade->Text = L"Grade";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::Color::Transparent;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label44->Location = System::Drawing::Point(9, 256);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(52, 21);
			this->label44->TabIndex = 27;
			this->label44->Text = L"Grade";
			// 
			// NewRecord
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1206, 656);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"NewRecord";
			this->Text = L"NewRecord";
			this->Load += gcnew System::EventHandler(this, &NewRecord::NewRecord_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
	//sqlconnection
	// need para iconnect server = localhost, port = 3306, database name = dbshop, uid = root, password = yungpasword sa mysql   
	// sa mysql yan

		String^ connString = "Server=localhost;port=3306;database=dbiprog;uid=root;password=1234";

		MySqlConnection^ conn = gcnew MySqlConnection(connString);

#pragma endregion


	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
    private: System::Void btnback_Click(System::Object^ sender, System::EventArgs^ e) {		

    }
	private: System::Void btnAddR_Click(System::Object^ sender, System::EventArgs^ e) {
		// Add button para sa math

   // First name lastname middname id
		String^ fname = txtFirstName->Text;
		String^ lname = txtLastName->Text;
		String^ mname = txtMiddleName->Text;
		String^ id = txtID->Text;
		// End

		// Math grade
		String^ mact = txtMAct->Text;
		String^ mmidterms = txtMMidterms->Text;
		String^ mfinals = txtMFinals->Text;
		String^ mrecitations = txtMRecitation->Text;
		String^ mattendance = txtMAttendance->Text;
	
		//calculation math
		int mcact = Int32::Parse(txtMAct->Text);
		int mcmidterms = Int32::Parse(txtMMidterms->Text);
		int mcfinals = Int32::Parse(txtMFinals->Text);
		int mcrecitations = Int32::Parse(txtMRecitation->Text);
		int mcattendance = Int32::Parse(txtMAttendance->Text);
		int mcgrade = mcact + mcmidterms + mcfinals + mcrecitations + mcattendance;
		int maverage = mcgrade/5;

		String^ mgradeLabel;
		String^ mevaluation;

		if (maverage > 59 && maverage <= 74) {
			mgradeLabel = "5.00";
			mevaluation = "Fail";
		}
		else if (maverage > 74 && maverage <= 78) {
			mgradeLabel = "3.00";
			mevaluation = "Passed";
		}
		else if (maverage > 77 && maverage <= 80) {
			mgradeLabel = "2.75";
			mevaluation = "Passed";
		}
		else if (maverage > 79 && maverage <= 83) {
			mgradeLabel = "2.50";
			mevaluation = "Passed";
		}
		else if (maverage > 83 && maverage <= 86) {
			mgradeLabel = "2.25";
			mevaluation = "Passed";
		}
		else if (maverage > 86 && maverage <= 89) {
			mgradeLabel = "2.00";
			mevaluation = "Passed";
		}
		else if (maverage > 89 && maverage <= 92) {
			mgradeLabel = "1.75";
			mevaluation = "Passed!";
		}
		else if (maverage > 92 && maverage <= 96) {
			mgradeLabel = "1.50";
			mevaluation = "Passed";
		}
		else if (maverage > 96 && maverage <= 98) {
			mgradeLabel = "1.25";
			mevaluation = "Passed";
		}
		else if (maverage > 98 && maverage <= 100) {
			mgradeLabel = "1.00";
			mevaluation = "Passed";
		}
		else {
			mgradeLabel = "Error...";
			mevaluation = "Error...";
		}

		txtMgrade->Text = mgradeLabel;
		txtMevaluation->Text = mevaluation;

		// End

		// English grade
		String^ eact = txtEAct->Text;
		String^ emidterms = txtEMidterms->Text;
		String^ efinals = txtEFinals->Text;
		String^ erecitations = txtERecitation->Text;
		String^ eattendance = txtEAttendance->Text;
		

		// Calculation for English
		int ecact = Int32::Parse(eact);
		int ecmidterms = Int32::Parse(emidterms);
		int ecfinals = Int32::Parse(efinals);
		int ecrecitations = Int32::Parse(erecitations);
		int ecattendance = Int32::Parse(eattendance);
		int ecgrade = ecact + ecmidterms + ecfinals + ecrecitations + ecattendance;
		int eaverage = ecgrade / 5;

		String^ egradeLabel;
		String^ eevaluation;

		if (eaverage > 59 && eaverage <= 74) {
			egradeLabel = "5.00";
			eevaluation = "Fail";
		}
		else if (eaverage > 74 && eaverage <= 78) {
			egradeLabel = "3.00";
			eevaluation = "Passed";
		}
		else if (eaverage > 77 && eaverage <= 80) {
			egradeLabel = "2.75";
			eevaluation = "Passed";
		}
		else if (eaverage > 79 && eaverage <= 83) {
			egradeLabel = "2.50";
			eevaluation = "Passed";
		}
		else if (eaverage > 83 && eaverage <= 86) {
			egradeLabel = "2.25";
			eevaluation = "Passed";
		}
		else if (eaverage > 86 && eaverage <= 89) {
			egradeLabel = "2.00";
			eevaluation = "Passed";
		}
		else if (eaverage > 89 && eaverage <= 92) {
			egradeLabel = "1.75";
			eevaluation = "Passed!";
		}
		else if (eaverage > 92 && eaverage <= 96) {
			egradeLabel = "1.50";
			eevaluation = "Passed";
		}
		else if (eaverage > 96 && eaverage <= 98) {
			egradeLabel = "1.25";
			eevaluation = "Passed";
		}
		else if (eaverage > 98 && eaverage <= 100) {
			egradeLabel = "1.00";
			eevaluation = "Passed";
		}
		else {
			egradeLabel = "Error...";
			eevaluation = "Error...";
		}

		txtEgrade->Text = egradeLabel;
		txtEevaluation->Text = eevaluation;
		// End

		// Database grade
		String^ dbact = txtDBAct->Text;
		String^ dbmidterms = txtDBMidterms->Text;
		String^ dbfinals = txtDBFinals->Text;
		String^ dbrecitations = txtDBRecitation->Text;
		String^ dbattendance = txtDBAttendance->Text;
	

		// Calculation for Database
		int dbcact = Int32::Parse(dbact);
		int dbcmidterms = Int32::Parse(dbmidterms);
		int dbcfinals = Int32::Parse(dbfinals);
		int dbcrecitations = Int32::Parse(dbrecitations);
		int dbcattendance = Int32::Parse(dbattendance);
		int dbcgrade = dbcact + dbcmidterms + dbcfinals + dbcrecitations + dbcattendance;
		int dbaverage = dbcgrade / 5;

		String^ dbgradeLabel;
		String^ dbevaluation;

		if (dbaverage > 59 && dbaverage <= 74) {
			dbgradeLabel = "5.00";
			dbevaluation = "Fail";
		}
		else if (dbaverage > 74 && dbaverage <= 78) {
			dbgradeLabel = "3.00";
			dbevaluation = "Passed";
		}
		else if (dbaverage > 77 && dbaverage <= 80) {
			dbgradeLabel = "2.75";
			dbevaluation = "Passed";
		}
		else if (dbaverage > 79 && dbaverage <= 83) {
			dbgradeLabel = "2.50";
			dbevaluation = "Passed";
		}
		else if (dbaverage > 83 && dbaverage <= 86) {
			dbgradeLabel = "2.25";
			dbevaluation = "Passed";
		}
		else if (dbaverage > 86 && dbaverage <= 89) {
			dbgradeLabel = "2.00";
			dbevaluation = "Passed";
		}
		else if (dbaverage > 89 && dbaverage <= 92) {
			dbgradeLabel = "1.75";
			dbevaluation = "Passed!";
		}
		else if (dbaverage > 92 && dbaverage <= 96) {
			dbgradeLabel = "1.50";
			dbevaluation = "Passed";
		}
		else if (dbaverage > 96 && dbaverage <= 98) {
			dbgradeLabel = "1.25";
			dbevaluation = "Passed";
		}
		else if (dbaverage > 98 && dbaverage <= 100) {
			dbgradeLabel = "1.00";
			dbevaluation = "Passed";
		}
		else {
			dbgradeLabel = "Error...";
			dbevaluation = "Error...";
		}

		txtDBgrade->Text = dbgradeLabel;
		txtDBevaluation->Text = dbevaluation;
		// End

		// Programming grade
		String^ pact = txtPAct->Text;
		String^ pmidterms = txtPMidterms->Text;
		String^ pfinals = txtPFinals->Text;
		String^ precitations = txtPRecitation->Text;
		String^ pattendance = txtPAttendance->Text;



		// Calculation for Programming
		int pcact = Int32::Parse(pact);
		int pcmidterms = Int32::Parse(pmidterms);
		int pcfinals = Int32::Parse(pfinals);
		int pcrecitations = Int32::Parse(precitations);
		int pcattendance = Int32::Parse(pattendance);
		int pcgrade = pcact + pcmidterms + pcfinals + pcrecitations + pcattendance;
		int paverage = pcgrade / 5;

		String^ pgradeLabel;
		String^ pevaluation;

		if (paverage > 59 && paverage <= 74) {
			pgradeLabel = "5.00";
			pevaluation = "Fail";
		}
		else if (paverage > 74 && paverage <= 78) {
			pgradeLabel = "3.00";
			pevaluation = "Passed";
		}
		else if (paverage > 77 && paverage <= 80) {
			pgradeLabel = "2.75";
			pevaluation = "Passed";
		}
		else if (paverage > 79 && paverage <= 83) {
			pgradeLabel = "2.50";
			pevaluation = "Passed";
		}
		else if (paverage > 83 && paverage <= 86) {
			pgradeLabel = "2.25";
			pevaluation = "Passed";
		}
		else if (paverage > 86 && paverage <= 89) {
			pgradeLabel = "2.00";
			pevaluation = "Passed";
		}
		else if (paverage > 89 && paverage <= 92) {
			pgradeLabel = "1.75";
			pevaluation = "Passed!";
		}
		else if (paverage > 92 && paverage <= 96) {
			pgradeLabel = "1.50";
			pevaluation = "Passed";
		}
		else if (paverage > 96 && paverage <= 98) {
			pgradeLabel = "1.25";
			pevaluation = "Passed";
		}
		else if (paverage > 98 && paverage <= 100) {
			pgradeLabel = "1.00";
			pevaluation = "Passed";
		}
		else {
			pgradeLabel = "Error...";
			pevaluation = "Error...";
		}

		txtPGrade->Text = pgradeLabel;
		txtPevaluation->Text = pevaluation;
		// End

		bool isValid = true;

		if (fname->Trim()->Length <= 0) {
			MessageBox::Show("Enter First Name");
			isValid = false;  
		}
		if (lname->Trim()->Length <= 0) {
			MessageBox::Show("Enter Last Name");
			isValid = false;  
		}
		if (mname->Trim()->Length <= 0) {
			MessageBox::Show("Enter Middle Name");
			isValid = false; 
		}
		if (id->Trim()->Length <= 0) {
			MessageBox::Show("Enter ID");  
			isValid = false;  
		}

		// Parameters sa math 
		if (mact->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Activities in Math Subjects");
			isValid = false;  
		}
		if (mmidterms->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Midterm in Math Subjects");
			isValid = false;  
		}
		if (mfinals->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Finals in Math Subjects"); 
			isValid = false;  
		}
		if (mrecitations->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Recitation in Math Subjects");
			isValid = false; 
		}
		if (mattendance->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Attendance in Math Subjects");
			isValid = false;  
		}

		// Parameters sa English 
		if (eact->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Activities in English Subjects");
			isValid = false; 
		}
		if (emidterms->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Midterm in English Subjects");
			isValid = false; 
		}
		if (efinals->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Finals in English Subjects");  
			isValid = false;  
		}
		if (erecitations->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Recitation in English Subjects");
			isValid = false;  
		}
		if (eattendance->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Attendance in English Subjects");
			isValid = false;  
		}

		// Parameters sa Database
		if (dbact->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Activities in Database Management Subjects");
			isValid = false; 
		}
		if (dbmidterms->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Midterm in Database Management Subjects");
			isValid = false;  
		}
		if (dbfinals->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Finals in Database Management Subjects");  
			isValid = false; 
		}
		if (dbrecitations->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Recitation in Database Management Subjects");
			isValid = false;  
		}
		if (dbattendance->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Attendance in Database Management Subjects");
			isValid = false;  
		}

		// Parameters sa Programming
		if (pact->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Activities in Programming Subjects");
			isValid = false;  
		}
		if (pmidterms->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Midterm in Programming Subjects");
			isValid = false;  
		}
		if (pfinals->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Finals in Programming Subjects");  
			isValid = false;  
		}
		if (precitations->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Recitation in Programming Subjects");
			isValid = false;  
		}
		if (pattendance->Trim()->Length <= 0) {
			MessageBox::Show("Enter Grade for Attendance in Programming Subjects");
			isValid = false;  
		}

		if (isValid) {
			// Inserting data process
			conn->Open();

			String^ cmdString = "INSERT INTO subjectiprog (FirstName, LastName, MiddleName, ID, " +
				"Math_Activities, Math_Midterms, Math_Finals, Math_Recitation, Math_Attendance, " +
				"Math_Grade, Math_Evaluation, " +
				"English_Activities, English_Midterms, English_Finals, English_Recitation, English_Attendance, " +
				"English_Grade, English_Evaluation, " +
				"Database_Activities, Database_Midterms, Database_Finals, Database_Recitation, Database_Attendance, " +
				"Database_Grade, Database_Evaluation, " +
				"Programming_Activities, Programming_Midterms, Programming_Finals, Programming_Recitation, Programming_Attendance, " +
				"Programming_Grade, Programming_Evaluation) " +
				"VALUES (@fname, @lname, @mname, @id, " +
				"@mact, @mmidterms, @mfinals, @mrecitations, @mattendance, " +
				"@mgrade, @mevaluation, " +
				"@eact, @emidterms, @efinals, @erecitations, @eattendance, " +
				"@egrade, @eevaluation, " +
				"@dbact, @dbmidterms, @dbfinals, @dbrecitations, @dbattendance, " +
				"@dbgrade, @dbevaluation, " +
				"@pact, @pmidterms, @pfinals, @precitations, @pattendance, " +
				"@pgrade, @pevaluation)";

			MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

			cmd->Parameters->AddWithValue("@fname", fname);
			cmd->Parameters->AddWithValue("@lname", lname);
			cmd->Parameters->AddWithValue("@mname", mname);
			cmd->Parameters->AddWithValue("@id", id);

			// Math parameters
			cmd->Parameters->AddWithValue("@mact", mact);
			cmd->Parameters->AddWithValue("@mmidterms", mmidterms);
			cmd->Parameters->AddWithValue("@mfinals", mfinals);
			cmd->Parameters->AddWithValue("@mrecitations", mrecitations);
			cmd->Parameters->AddWithValue("@mattendance", mattendance);
			cmd->Parameters->AddWithValue("@mgrade", mgradeLabel); 
			cmd->Parameters->AddWithValue("@mevaluation", mevaluation); 

			// English parameters
			cmd->Parameters->AddWithValue("@eact", eact);
			cmd->Parameters->AddWithValue("@emidterms", emidterms);
			cmd->Parameters->AddWithValue("@efinals", efinals);
			cmd->Parameters->AddWithValue("@erecitations", erecitations);
			cmd->Parameters->AddWithValue("@eattendance", eattendance);
			cmd->Parameters->AddWithValue("@egrade", egradeLabel); 
			cmd->Parameters->AddWithValue("@eevaluation", eevaluation); 

			// Database parameters
			cmd->Parameters->AddWithValue("@dbact", dbact);
			cmd->Parameters->AddWithValue("@dbmidterms", dbmidterms);
			cmd->Parameters->AddWithValue("@dbfinals", dbfinals);
			cmd->Parameters->AddWithValue("@dbrecitations", dbrecitations);
			cmd->Parameters->AddWithValue("@dbattendance", dbattendance);
			cmd->Parameters->AddWithValue("@dbgrade", dbgradeLabel); 
			cmd->Parameters->AddWithValue("@dbevaluation", dbevaluation);

			// Programming parameters
			cmd->Parameters->AddWithValue("@pact", pact);
			cmd->Parameters->AddWithValue("@pmidterms", pmidterms);
			cmd->Parameters->AddWithValue("@pfinals", pfinals);
			cmd->Parameters->AddWithValue("@precitations", precitations);
			cmd->Parameters->AddWithValue("@pattendance", pattendance);
			cmd->Parameters->AddWithValue("@pgrade", pgradeLabel); 
			cmd->Parameters->AddWithValue("@pevaluation", pevaluation); 


			try {
				cmd->ExecuteNonQuery();
				MessageBox::Show("Insert successful");
				conn->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show("Insert failed");
			}
		}
	}


		   // main frame
    private: System::Void NewRecord_Load(System::Object^ sender, System::EventArgs^ e) {
		
    }

    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	AllRecords^ alr = gcnew AllRecords();
	alr->Show();
	this->Close();

     }
  private: System::Void label31_Click(System::Object^ sender, System::EventArgs^ e) {
  }
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
