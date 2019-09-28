#include "MyForm1.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm7.h"
#include <Windows.h>
#include <mysql.h>
#include <string>
#include <iostream>
#include "funtion.h"

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Examination ���K�n
	/// </summary>
	public ref class Examination : public System::Windows::Forms::Form
	{
	public:
		Examination(void)
		{
			InitializeComponent();
			//
			//TODO:  �b���[�J�غc�禡�{���X

			funtion_DB MyDB;
			string k1 = MyDB.getText();
			string k2 = "Enumber";
			string k3 = "NULL";
			string k4 = "NULL";
			string Catch;
			int i = 1;
			if (MyDB.selectSQL_Max(k1, k2, k3, k4) == "")
				Catch = "1";
			else
			{
				cout << MyDB.getRow() << endl;
				int i2 = atoi(MyDB.selectSQL_Max(k1, k2, k3, k4).c_str());
				while (i <= i2)
				{
					string Counter = to_string(i);
					this->comboBox1->Items->Add(i);
					i++;
				}
			}
			//�U�Կ��Ʀr�]�w
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~Examination()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button5;
	protected:
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;

	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�
		/// �o�Ӥ�k�����e�C
		/// </summary>
		void InitializeComponent(void)
		{
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"�з���", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button5->Location = System::Drawing::Point(136, 342);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(464, 71);
			this->button5->TabIndex = 15;
			this->button5->Text = L"View the Examination";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Examination::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"�з���", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button4->Location = System::Drawing::Point(136, 582);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(464, 71);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Delete the Examination";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Examination::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"�з���", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(136, 456);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(464, 71);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Rewrite the Examination";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Examination::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"�з���", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(136, 102);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(464, 65);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Add the Examination";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Examination::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"�з���", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(567, 20);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 46);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Examination::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(65, 212);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(607, 15);
			this->label2->TabIndex = 18;
			this->label2->Text = L"---------------------------------------------------------------------------------"
				L"---------------------------------------";
			this->label2->Click += gcnew System::EventHandler(this, &Examination::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"�з���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(164, 284);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(229, 20);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Examination number :";
			this->label1->Click += gcnew System::EventHandler(this, &Examination::label1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(416, 281);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 23);
			this->comboBox1->TabIndex = 16;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Examination::comboBox1_SelectedIndexChanged);
			// 
			// Examination
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(779, 701);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Examination";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Examination";
			this->Load += gcnew System::EventHandler(this, &Examination::Examination_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		using namespace Runtime::InteropServices;
		const char* in = (const char*)(Marshal::StringToHGlobalAnsi(this->comboBox1->Text)).ToPointer();
		int En = atoi(in);
		funtion_DB MyDB;
		string k1 = "Examination";
		string k2 = "Equestion";
		string k3 = "Enumber";
		MyDB.setCounter(En);
		MyDB.setText(MyDB.selectSQL_Counter(k1, k2, k3));
		FinalProject::MyForm4^sp = gcnew FinalProject::MyForm4;
		sp->ShowDialog();;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		using namespace Runtime::InteropServices;
		const char* in = (const char*)(Marshal::StringToHGlobalAnsi(this->comboBox1->Text)).ToPointer();
		int En = atoi(in);
		funtion_DB MyDB;
		MyDB.setCounter(En);
		FinalProject::MyForm5^sp = gcnew FinalProject::MyForm5;
		sp->ShowDialog();;
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	FinalProject::MyForm7^sp = gcnew FinalProject::MyForm7;
	sp->ShowDialog();;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	using namespace Runtime::InteropServices;
	const char* in = (const char*)(Marshal::StringToHGlobalAnsi(this->comboBox1->Text)).ToPointer();
	funtion_DB MyDB;
	string k1 = "Examination";
	string k2 = "Enumber";
	string k3 = in;
	MyDB.deleteSQL(k1, k2, in);
}
private: System::Void Examination_Load(System::Object^  sender, System::EventArgs^  e) {

}
};
}
