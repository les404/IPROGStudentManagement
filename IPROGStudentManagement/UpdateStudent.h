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
	/// Summary for UpdateStudent
	/// </summary>
	public ref class UpdateStudent : public System::Windows::Forms::Form
	{
	public:
		UpdateStudent(void)
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
		~UpdateStudent()
		{
			if (components)
			{
				delete components;
			}
		}






























	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btndelete;

	private: System::Windows::Forms::Button^ btnClick;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ txtPevaluation;
	private: System::Windows::Forms::Label^ txtPGrade;
	private: System::Windows::Forms::Label^ label44;
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
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ txtDBevaluation;
	private: System::Windows::Forms::Label^ txtDBgrade;
	private: System::Windows::Forms::Label^ label40;
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
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ txtEevaluation;
	private: System::Windows::Forms::Label^ txtEgrade;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label10;
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
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ txtMevaluation;
	private: System::Windows::Forms::Label^ txtMgrade;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::TextBox^ txtMAct;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::TextBox^ txtMMidterms;
	private: System::Windows::Forms::TextBox^ txtMAttendance;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::TextBox^ txtMFinals;
	private: System::Windows::Forms::TextBox^ txtMRecitation;
	private: System::Windows::Forms::Button^ btnback;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::TextBox^ txtID;
private: System::Windows::Forms::TextBox^ txtLastName;

	private: System::Windows::Forms::TextBox^ txtMiddleName;
private: System::Windows::Forms::TextBox^ txtFName;

	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::DataGridView^ tblUD;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UpdateStudent::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tblUD = (gcnew System::Windows::Forms::DataGridView());
			this->btndelete = (gcnew System::Windows::Forms::Button());
			this->btnClick = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->txtPevaluation = (gcnew System::Windows::Forms::Label());
			this->txtPGrade = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
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
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->txtDBevaluation = (gcnew System::Windows::Forms::Label());
			this->txtDBgrade = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
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
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->txtEevaluation = (gcnew System::Windows::Forms::Label());
			this->txtEgrade = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
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
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->txtMAct = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->txtMMidterms = (gcnew System::Windows::Forms::TextBox());
			this->txtMAttendance = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->txtMFinals = (gcnew System::Windows::Forms::TextBox());
			this->txtMRecitation = (gcnew System::Windows::Forms::TextBox());
			this->btnback = (gcnew System::Windows::Forms::Button());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtMiddleName = (gcnew System::Windows::Forms::TextBox());
			this->txtFName = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblUD))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel1->Controls->Add(this->tblUD);
			this->panel1->Controls->Add(this->btndelete);
			this->panel1->Controls->Add(this->btnClick);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->btnback);
			this->panel1->Controls->Add(this->label46);
			this->panel1->Controls->Add(this->txtID);
			this->panel1->Controls->Add(this->txtLastName);
			this->panel1->Controls->Add(this->txtMiddleName);
			this->panel1->Controls->Add(this->txtFName);
			this->panel1->Controls->Add(this->label47);
			this->panel1->Location = System::Drawing::Point(0, 121);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1250, 705);
			this->panel1->TabIndex = 48;
			// 
			// tblUD
			// 
			this->tblUD->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblUD->Location = System::Drawing::Point(743, 124);
			this->tblUD->Name = L"tblUD";
			this->tblUD->ReadOnly = true;
			this->tblUD->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tblUD->Size = System::Drawing::Size(321, 336);
			this->tblUD->TabIndex = 28;
			this->tblUD->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UpdateStudent::tblUD_CellClick_1);
			this->tblUD->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UpdateStudent::tblUD_CellClick_1);
			// 
			// btndelete
			// 
			this->btndelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btndelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndelete->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btndelete->Location = System::Drawing::Point(914, 507);
			this->btndelete->Name = L"btndelete";
			this->btndelete->Size = System::Drawing::Size(199, 51);
			this->btndelete->TabIndex = 24;
			this->btndelete->Text = L"Delete";
			this->btndelete->UseVisualStyleBackColor = false;
			this->btndelete->Click += gcnew System::EventHandler(this, &UpdateStudent::btndelete_Click);
			// 
			// btnClick
			// 
			this->btnClick->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnClick->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClick->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnClick->Location = System::Drawing::Point(709, 507);
			this->btnClick->Name = L"btnClick";
			this->btnClick->Size = System::Drawing::Size(199, 51);
			this->btnClick->TabIndex = 23;
			this->btnClick->Text = L"Update";
			this->btnClick->UseVisualStyleBackColor = false;
			this->btnClick->Click += gcnew System::EventHandler(this, &UpdateStudent::btnClick_Click);
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
			this->panel5->Location = System::Drawing::Point(302, 377);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(274, 318);
			this->panel5->TabIndex = 27;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::Transparent;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label41->Location = System::Drawing::Point(9, 286);
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
			this->txtPevaluation->Location = System::Drawing::Point(113, 286);
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
			this->panel4->Location = System::Drawing::Point(12, 377);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(271, 318);
			this->panel4->TabIndex = 26;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label37->Location = System::Drawing::Point(9, 286);
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
			this->txtDBevaluation->Location = System::Drawing::Point(107, 286);
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
			this->panel3->Controls->Add(this->label10);
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
			this->panel3->Location = System::Drawing::Point(302, 53);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(274, 318);
			this->panel3->TabIndex = 25;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label32->Location = System::Drawing::Point(9, 286);
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
			this->txtEevaluation->Location = System::Drawing::Point(112, 286);
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
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(16, 13);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 19);
			this->label10->TabIndex = 22;
			this->label10->Text = L"English";
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
			this->panel2->Controls->Add(this->label34);
			this->panel2->Controls->Add(this->label35);
			this->panel2->Controls->Add(this->label38);
			this->panel2->Controls->Add(this->label39);
			this->panel2->Controls->Add(this->txtMAct);
			this->panel2->Controls->Add(this->label42);
			this->panel2->Controls->Add(this->label43);
			this->panel2->Controls->Add(this->txtMMidterms);
			this->panel2->Controls->Add(this->txtMAttendance);
			this->panel2->Controls->Add(this->label45);
			this->panel2->Controls->Add(this->txtMFinals);
			this->panel2->Controls->Add(this->txtMRecitation);
			this->panel2->Location = System::Drawing::Point(12, 53);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(271, 318);
			this->panel2->TabIndex = 24;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label33->Location = System::Drawing::Point(14, 286);
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
			this->txtMevaluation->Location = System::Drawing::Point(113, 286);
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
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::Transparent;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label34->Location = System::Drawing::Point(3, 13);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(46, 19);
			this->label34->TabIndex = 22;
			this->label34->Text = L"Math";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label35->Location = System::Drawing::Point(3, 220);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(88, 21);
			this->label35->TabIndex = 11;
			this->label35->Text = L"Attendance";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label38->Location = System::Drawing::Point(3, 106);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(77, 21);
			this->label38->TabIndex = 10;
			this->label38->Text = L"Midterms";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::Transparent;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label39->Location = System::Drawing::Point(3, 146);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(50, 21);
			this->label39->TabIndex = 9;
			this->label39->Text = L"Finals";
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
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label42->Location = System::Drawing::Point(127, 39);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(68, 19);
			this->label42->TabIndex = 5;
			this->label42->Text = L"GRADES";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::Transparent;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label43->Location = System::Drawing::Point(3, 183);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(79, 21);
			this->label43->TabIndex = 8;
			this->label43->Text = L"Recitation";
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
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->BackColor = System::Drawing::Color::Transparent;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label45->Location = System::Drawing::Point(3, 71);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(72, 21);
			this->label45->TabIndex = 7;
			this->label45->Text = L"Activities";
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
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(880, 16);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(94, 19);
			this->label46->TabIndex = 4;
			this->label46->Text = L"ID NUMBER";
			// 
			// txtID
			// 
			this->txtID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtID->Location = System::Drawing::Point(986, 11);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(190, 24);
			this->txtID->TabIndex = 16;
			// 
			// txtLastName
			// 
			this->txtLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLastName->Location = System::Drawing::Point(436, 12);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(190, 24);
			this->txtLastName->TabIndex = 15;
			// 
			// txtMiddleName
			// 
			this->txtMiddleName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMiddleName->Location = System::Drawing::Point(654, 11);
			this->txtMiddleName->Name = L"txtMiddleName";
			this->txtMiddleName->Size = System::Drawing::Size(190, 24);
			this->txtMiddleName->TabIndex = 14;
			// 
			// txtFName
			// 
			this->txtFName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFName->Location = System::Drawing::Point(227, 12);
			this->txtFName->Name = L"txtFName";
			this->txtFName->Size = System::Drawing::Size(190, 24);
			this->txtFName->TabIndex = 13;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(163, 17);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(54, 19);
			this->label47->TabIndex = 3;
			this->label47->Text = L"NAME";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1219, 825);
			this->pictureBox3->TabIndex = 47;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &UpdateStudent::pictureBox3_Click);
			// 
			// UpdateStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1219, 825);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox3);
			this->Name = L"UpdateStudent";
			this->Text = L"UpdateStudent";
			this->Load += gcnew System::EventHandler(this, &UpdateStudent::UpdateStudent_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblUD))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}

		//sa mysql yan
		String^ connString = "Server=localhost;port=3306;database=dbiprog;uid=root;password=1234";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);


#pragma endregion
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnAddR_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   // update buuton
  
    private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}



     //main screen
    private: System::Void UpdateStudent_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			conn->Open();

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT ID, LastName, FirstName FROM subjectiprog", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			tblUD->DataSource = dt;

			conn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to load data: " + ex->Message);
		}
}


    private: System::Void btnClick_Click(System::Object^ sender, System::EventArgs^ e) {
	//update
		if (tblUD->CurrentRow != nullptr) {
			String^ currID = tblUD->CurrentRow->Cells[0]->Value->ToString();
			String^ newFname = txtFName->Text;
			String^ newLname = txtLastName->Text;
			String^ newMname = txtMiddleName->Text;

			// Calculation for Math
			int mact = Int32::Parse(txtMAct->Text);
			int mmidterms = Int32::Parse(txtMMidterms->Text);
			int mfinals = Int32::Parse(txtMFinals->Text);
			int mrecitations = Int32::Parse(txtMRecitation->Text);
			int mattendance = Int32::Parse(txtMAttendance->Text);
			int mgrade = mact + mmidterms + mfinals + mrecitations + mattendance;
			double maverage = (double)mgrade / 5.0;
			String^ mevaluation;
			String^ mgradeLabel;

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

			// Calculation for English
			int eact = Int32::Parse(txtEAct->Text);
			int emidterms = Int32::Parse(txtEMidterms->Text);
			int efinals = Int32::Parse(txtEFinals->Text);
			int erecitations = Int32::Parse(txtERecitation->Text);
			int eattendance = Int32::Parse(txtEAttendance->Text);
			int egrade = eact + emidterms + efinals + erecitations + eattendance;
			double eaverage = (double)egrade / 5.0;
			String^ eevaluation;
			String^ egradeLabel;

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

			// Calculation for Database
			int dbact = Int32::Parse(txtDBAct->Text);
			int dbmidterms = Int32::Parse(txtDBMidterms->Text);
			int dbfinals = Int32::Parse(txtDBFinals->Text);
			int dbrecitations = Int32::Parse(txtDBRecitation->Text);
			int dbattendance = Int32::Parse(txtDBAttendance->Text);
			int dbgrade = dbact + dbmidterms + dbfinals + dbrecitations + dbattendance;
			double dbaverage = (double)dbgrade / 5.0;
			String^ dbevaluation;
			String^ dbgradeLabel;

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

			// Calculation for Programming
			int pact = Int32::Parse(txtPAct->Text);
			int pmidterms = Int32::Parse(txtPMidterms->Text);
			int pfinals = Int32::Parse(txtPFinals->Text);
			int precitations = Int32::Parse(txtPRecitation->Text);
			int pattendance = Int32::Parse(txtPAttendance->Text);
			int pgrade = pact + pmidterms + pfinals + precitations + pattendance;
			double paverage = (double)pgrade / 5.0;
			String^ pevaluation;
			String^ pgradeLabel;

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

			try {
				conn->Open();

				MySqlCommand^ cmd = gcnew MySqlCommand(
					"UPDATE subjectiprog SET FirstName = @FirstName, LastName = @LastName, MiddleName = @MiddleName, " +
					"Math_Activities = @Math_Activities, Math_Midterms = @Math_Midterms, Math_Finals = @Math_Finals, Math_Recitation = @Math_Recitation, Math_Attendance = @Math_Attendance, " +
					"Math_Grade = @Math_Grade, Math_Evaluation = @Math_Evaluation, " +
					"English_Activities = @English_Activities, English_Midterms = @English_Midterms, English_Finals = @English_Finals, English_Recitation = @English_Recitation, English_Attendance = @English_Attendance, " +
					"English_Grade = @English_Grade, English_Evaluation = @English_Evaluation, " +
					"Database_Activities = @Database_Activities, Database_Midterms = @Database_Midterms, Database_Finals = @Database_Finals, Database_Recitation = @Database_Recitation, Database_Attendance = @Database_Attendance, " +
					"Database_Grade = @Database_Grade, Database_Evaluation = @Database_Evaluation, " +
					"Programming_Activities = @Programming_Activities, Programming_Midterms = @Programming_Midterms, Programming_Finals = @Programming_Finals, Programming_Recitation = @Programming_Recitation, Programming_Attendance = @Programming_Attendance, " +
					"Programming_Grade = @Programming_Grade, Programming_Evaluation = @Programming_Evaluation " +
					"WHERE ID = @ID", conn);

				cmd->Parameters->AddWithValue("@FirstName", newFname);
				cmd->Parameters->AddWithValue("@LastName", newLname);
				cmd->Parameters->AddWithValue("@MiddleName", newMname);
				cmd->Parameters->AddWithValue("@Math_Activities", mact);
				cmd->Parameters->AddWithValue("@Math_Midterms", mmidterms);
				cmd->Parameters->AddWithValue("@Math_Finals", mfinals);
				cmd->Parameters->AddWithValue("@Math_Recitation", mrecitations);
				cmd->Parameters->AddWithValue("@Math_Attendance", mattendance);
				cmd->Parameters->AddWithValue("@Math_Grade", mgradeLabel);
				cmd->Parameters->AddWithValue("@Math_Evaluation", mevaluation);
				cmd->Parameters->AddWithValue("@English_Activities", eact);
				cmd->Parameters->AddWithValue("@English_Midterms", emidterms);
				cmd->Parameters->AddWithValue("@English_Finals", efinals);
				cmd->Parameters->AddWithValue("@English_Recitation", erecitations);
				cmd->Parameters->AddWithValue("@English_Attendance", eattendance);
				cmd->Parameters->AddWithValue("@English_Grade", egradeLabel);
				cmd->Parameters->AddWithValue("@English_Evaluation", eevaluation);
				cmd->Parameters->AddWithValue("@Database_Activities", dbact);
				cmd->Parameters->AddWithValue("@Database_Midterms", dbmidterms);
				cmd->Parameters->AddWithValue("@Database_Finals", dbfinals);
				cmd->Parameters->AddWithValue("@Database_Recitation", dbrecitations);
				cmd->Parameters->AddWithValue("@Database_Attendance", dbattendance);
				cmd->Parameters->AddWithValue("@Database_Grade", dbgradeLabel);
				cmd->Parameters->AddWithValue("@Database_Evaluation", dbevaluation);
				cmd->Parameters->AddWithValue("@Programming_Activities", pact);
				cmd->Parameters->AddWithValue("@Programming_Midterms", pmidterms);
				cmd->Parameters->AddWithValue("@Programming_Finals", pfinals);
				cmd->Parameters->AddWithValue("@Programming_Recitation", precitations);
				cmd->Parameters->AddWithValue("@Programming_Attendance", pattendance);
				cmd->Parameters->AddWithValue("@Programming_Grade", pgradeLabel);
				cmd->Parameters->AddWithValue("@Programming_Evaluation", pevaluation);
				cmd->Parameters->AddWithValue("@ID", currID);

				int rowsAffected = cmd->ExecuteNonQuery();

				if (rowsAffected > 0) {
					MessageBox::Show("Update successful.");
				}
				else {
					MessageBox::Show("No record found with the given ID.");
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
			finally {
				conn->Close();
			}
		}
    }


private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tblUD_CellClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0) {
		String^ currID = tblUD->Rows[e->RowIndex]->Cells[0]->Value->ToString();

		try {
			conn->Open();

			
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM subjectiprog WHERE ID = @ID", conn);
			cmd->Parameters->AddWithValue("@ID", currID);

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);

			if (dt->Rows->Count > 0) {
				String^ Fname = dt->Rows[0]["FirstName"]->ToString();
				txtFName->Text = Fname;
			}
			else {
				MessageBox::Show("No record found with the given ID.");
			}
			if (dt->Rows->Count > 0) {
				String^ Lname = dt->Rows[0]["LastName"]->ToString();
				txtLastName->Text = Lname;
			}
			else {
				MessageBox::Show("No record found with the given ID.");
			}
			if (dt->Rows->Count > 0) {
				String^ Mname = dt->Rows[0]["MiddleName"]->ToString();
				txtMiddleName->Text = Mname;
			}
			else {
				MessageBox::Show("No record found with the given ID.");
			}
			if (dt->Rows->Count > 0) {
				String^ ID = dt->Rows[0]["ID"]->ToString();
				txtID->Text = ID;
			}
			else {
				MessageBox::Show("No record found with the given ID.");
			}
			//math

			if (dt->Rows->Count > 0) {
				String^ mact = dt->Rows[0]["Math_Activities"]->ToString();
				txtMAct->Text = mact;
			}
			if (dt->Rows->Count > 0) {
				String^ mmidterms = dt->Rows[0]["Math_Midterms"]->ToString();
				txtMMidterms->Text = mmidterms;
			}
			if (dt->Rows->Count > 0) {
				String^ mfinals = dt->Rows[0]["Math_Finals"]->ToString();
				txtMFinals->Text = mfinals;
			}
			if (dt->Rows->Count > 0) {
				String^ mrecitation = dt->Rows[0]["Math_Recitation"]->ToString();
				txtMRecitation->Text = mrecitation;
			}
			if (dt->Rows->Count > 0) {
				String^ mattendance = dt->Rows[0]["Math_Attendance"]->ToString();
				txtMAttendance->Text = mattendance;
			}
			if (dt->Rows->Count > 0) {
				String^ mgrade = dt->Rows[0]["Math_Grade"]->ToString();
				txtMgrade->Text = mgrade;
			}
			if (dt->Rows->Count > 0) {
				String^ mevaluation = dt->Rows[0]["Math_Evaluation"]->ToString();
				txtMevaluation->Text = mevaluation;
			}
			//english
			if (dt->Rows->Count > 0) {
				String^ eact = dt->Rows[0]["English_Activities"]->ToString();
				txtEAct->Text = eact;
			}
			if (dt->Rows->Count > 0) {
				String^ emidterms = dt->Rows[0]["English_Midterms"]->ToString();
				txtEMidterms->Text = emidterms;
			}
			if (dt->Rows->Count > 0) {
				String^ efinals = dt->Rows[0]["English_Finals"]->ToString();
				txtEFinals->Text = efinals;
			}
			if (dt->Rows->Count > 0) {
				String^ erecitation = dt->Rows[0]["English_Recitation"]->ToString();
				txtERecitation->Text = erecitation;
			}
			if (dt->Rows->Count > 0) {
				String^ eattendance = dt->Rows[0]["English_Attendance"]->ToString();
				txtEAttendance->Text = eattendance;
			}
			if (dt->Rows->Count > 0) {
				String^ egrade = dt->Rows[0]["English_Grade"]->ToString();
				txtEgrade->Text = egrade;
			}
			if (dt->Rows->Count > 0) {
				String^ eevaluation = dt->Rows[0]["English_Evaluation"]->ToString();
				txtEevaluation->Text = eevaluation;
			}
			//database
			if (dt->Rows->Count > 0) {
				String^ dbact = dt->Rows[0]["Database_Activities"]->ToString();
				txtDBAct->Text = dbact;
			}
			if (dt->Rows->Count > 0) {
				String^ dbmidterms = dt->Rows[0]["Database_Midterms"]->ToString();
				txtDBMidterms->Text = dbmidterms;
			}
			if (dt->Rows->Count > 0) {
				String^ dbfinals = dt->Rows[0]["Database_Finals"]->ToString();
				txtDBFinals->Text = dbfinals;
			}
			if (dt->Rows->Count > 0) {
				String^ dbrecitation = dt->Rows[0]["Database_Recitation"]->ToString();
				txtDBRecitation->Text = dbrecitation;
			}
			if (dt->Rows->Count > 0) {
				String^ dbattendance = dt->Rows[0]["Database_Attendance"]->ToString();
				txtDBAttendance->Text = dbattendance;
			}
			if (dt->Rows->Count > 0) {
				String^ dbgrade = dt->Rows[0]["Database_Grade"]->ToString();
				txtDBgrade->Text = dbgrade;
			}
			if (dt->Rows->Count > 0) {
				String^ dbevaluation = dt->Rows[0]["Database_Evaluation"]->ToString();
				txtDBevaluation->Text = dbevaluation;
			}
			if (dt->Rows->Count > 0) {
			String^ pact = dt->Rows[0]["Programming_Activities"]->ToString();
			txtPAct->Text = pact;

			String^ pmidterms = dt->Rows[0]["Programming_Midterms"]->ToString();
			txtPMidterms->Text = pmidterms;

			String^ pfinals = dt->Rows[0]["Programming_Finals"]->ToString();
			txtPFinals->Text = pfinals;

			String^ precitation = dt->Rows[0]["Programming_Recitation"]->ToString();
			txtPRecitation->Text = precitation;

			String^ pattendance = dt->Rows[0]["Programming_Attendance"]->ToString();
			txtPAttendance->Text = pattendance;

			String^ pgrade = dt->Rows[0]["Programming_Grade"]->ToString();
			txtPGrade->Text = pgrade;

			String^ pevaluation = dt->Rows[0]["Programming_Evaluation"]->ToString();
			txtPevaluation->Text = pevaluation;
        }
            else {
               MessageBox::Show("No record found with the given ID.");
            }
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			conn->Close();
		}
	}


}
private: System::Void btndelete_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		conn->Open();

		String^ currID = tblUD->CurrentRow->Cells[0]->Value->ToString(); // Assuming this gets the ID of the selected row

		MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM subjectiprog WHERE ID = @ID", conn);
		cmd->Parameters->AddWithValue("@ID", currID);

		int rowsAffected = cmd->ExecuteNonQuery();

		if (rowsAffected > 0) {
			MessageBox::Show("Record deleted successfully.");
			// Optionally, clear or refresh your data source or UI components after deletion
		}
		else {
			MessageBox::Show("No record found with the given ID.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}
	finally {
		conn->Close();
	}
}
};
}
