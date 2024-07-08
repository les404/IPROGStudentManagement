#pragma once
#include "NewRecord.h" 
#include "AllRecords.h"
#include "ClassResult.h"
#include "UpdateStudent.h"

namespace IPROGStudentManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HomeForm
	/// </summary>
	public ref class HomeForm : public System::Windows::Forms::Form
	{
	public:
		HomeForm(void)
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
		~HomeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnAddRecord;
	private: System::Windows::Forms::Button^ btnView;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Button^ btnDisplay;
	private: System::Windows::Forms::Button^ btnExit;





	private: System::Windows::Forms::Label^ label1;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HomeForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnAddRecord = (gcnew System::Windows::Forms::Button());
			this->btnView = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnDisplay = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1000, 639);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// btnAddRecord
			// 
			this->btnAddRecord->BackColor = System::Drawing::Color::DarkRed;
			this->btnAddRecord->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddRecord->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnAddRecord->Location = System::Drawing::Point(386, 278);
			this->btnAddRecord->Name = L"btnAddRecord";
			this->btnAddRecord->Size = System::Drawing::Size(244, 39);
			this->btnAddRecord->TabIndex = 1;
			this->btnAddRecord->Text = L"Add New Record";
			this->btnAddRecord->UseVisualStyleBackColor = false;
			this->btnAddRecord->Click += gcnew System::EventHandler(this, &HomeForm::button1_Click);
			// 
			// btnView
			// 
			this->btnView->BackColor = System::Drawing::Color::DarkRed;
			this->btnView->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnView->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnView->Location = System::Drawing::Point(386, 323);
			this->btnView->Name = L"btnView";
			this->btnView->Size = System::Drawing::Size(244, 39);
			this->btnView->TabIndex = 2;
			this->btnView->Text = L"View All Record";
			this->btnView->UseVisualStyleBackColor = false;
			this->btnView->Click += gcnew System::EventHandler(this, &HomeForm::btnView_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->BackColor = System::Drawing::Color::DarkRed;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnSearch->Location = System::Drawing::Point(386, 368);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(244, 39);
			this->btnSearch->TabIndex = 3;
			this->btnSearch->Text = L"Update Record";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &HomeForm::btnSearch_Click);
			// 
			// btnDisplay
			// 
			this->btnDisplay->BackColor = System::Drawing::Color::DarkRed;
			this->btnDisplay->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDisplay->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDisplay->Location = System::Drawing::Point(386, 413);
			this->btnDisplay->Name = L"btnDisplay";
			this->btnDisplay->Size = System::Drawing::Size(244, 39);
			this->btnDisplay->TabIndex = 4;
			this->btnDisplay->Text = L"Display Class Results";
			this->btnDisplay->UseVisualStyleBackColor = false;
			this->btnDisplay->Click += gcnew System::EventHandler(this, &HomeForm::btnDisplay_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::DarkRed;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnExit->Location = System::Drawing::Point(386, 458);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(244, 39);
			this->btnExit->TabIndex = 5;
			this->btnExit->Text = L"Exits";
			this->btnExit->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DimGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(353, 213);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(314, 24);
			this->label1->TabIndex = 6;
			this->label1->Text = L"SCHOOL MANAGEMENT SYSTEM";
			// 
			// HomeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 639);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnDisplay);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->btnView);
			this->Controls->Add(this->btnAddRecord);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"HomeForm";
			this->Text = L"HomeForm";
			this->Load += gcnew System::EventHandler(this, &HomeForm::HomeForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// add new records button
		NewRecord^ sub = gcnew NewRecord();
		sub->Show();
		Hide();
	}
    private: System::Void HomeForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
	
}
    private: System::Void btnView_Click(System::Object^ sender, System::EventArgs^ e) {
	   AllRecords^ ar = gcnew AllRecords();
	   ar->Show();
	   Hide();
}
private: System::Void btnDisplay_Click(System::Object^ sender, System::EventArgs^ e) {
	ClassResult^ cr = gcnew ClassResult();
	cr->Show();
	Hide();


}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	UpdateStudent^ ur = gcnew UpdateStudent();
	ur->Show();
	Hide();
}
};
}
