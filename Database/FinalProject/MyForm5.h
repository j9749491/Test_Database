#pragma once
#include <Windows.h>
#include <mysql.h>
#include <string>
#include <iostream>
#include "funtion.h"
using namespace std;

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm5 ���K�n
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::TextBox^  textBox1;
		MyForm5(void)
		{
			InitializeComponent();
			//
			//TODO:  �b���[�J�غc�禡�{���X
			//
			
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	//private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm5::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->AcceptsReturn = true;
			this->textBox1->AcceptsTab = true;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"�з���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox1->Location = System::Drawing::Point(16, 15);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(745, 312);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm5::textBox1_TextChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"�з���", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox4->Location = System::Drawing::Point(125, 591);
			this->checkBox4->Margin = System::Windows::Forms::Padding(4);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(40, 21);
			this->checkBox4->TabIndex = 12;
			this->checkBox4->Text = L"D";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm5::checkBox4_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"�з���", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox3->Location = System::Drawing::Point(125, 519);
			this->checkBox3->Margin = System::Windows::Forms::Padding(4);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(40, 21);
			this->checkBox3->TabIndex = 11;
			this->checkBox3->Text = L"C";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm5::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"�з���", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox2->Location = System::Drawing::Point(125, 442);
			this->checkBox2->Margin = System::Windows::Forms::Padding(4);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(40, 21);
			this->checkBox2->TabIndex = 10;
			this->checkBox2->Text = L"B";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm5::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"�з���", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox1->Location = System::Drawing::Point(125, 370);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(40, 21);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"A";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm5::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"�з���", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(580, 619);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 68);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(779, 701);
			this->ControlBox = false;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Java SE7 OCA Simulation Test";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		using namespace Runtime::InteropServices;
		const char* in = (const char*)(Marshal::StringToHGlobalAnsi(this->textBox1->Text)).ToPointer();
		funtion_DB MyDB;
		string k1 = "examination";
		string k2 = "Equestion";
		string k3 = "Enumber";
		MyDB.updateSQL(k1, k2, in, k3);
		
		if (this->checkBox1->Checked == true)
		{
			k2 = "CorrectANS";
			in = "A";
		}
		else if (this->checkBox2->Checked == true)
		{
			k2 = "CorrectANS";
			in = "B";
		}
		else if (this->checkBox3->Checked == true)
		{
			k2 = "CorrectANS";
			in = "C";
		}
		else if (this->checkBox4->Checked == true)
		{
			k2 = "CorrectANS";
			in = "D";
		}
		MyDB.updateSQL(k1, k2, in, k3);
		this->Close();
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void MyForm5_Load(System::Object^  sender, System::EventArgs^  e) {

}

	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->checkBox1->Checked == true)
		{
			this->checkBox2->Enabled = false;
			this->checkBox3->Enabled = false;
			this->checkBox4->Enabled = false;
		}
		else
		{
			this->checkBox2->Enabled = true;
			this->checkBox3->Enabled = true;
			this->checkBox4->Enabled = true;
		}
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->checkBox2->Checked == true)
		{
			this->checkBox1->Enabled = false;
			this->checkBox3->Enabled = false;
			this->checkBox4->Enabled = false;
		}
		else
		{
			this->checkBox1->Enabled = true;
			this->checkBox3->Enabled = true;
			this->checkBox4->Enabled = true;
		}
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->checkBox3->Checked == true)
		{
			this->checkBox1->Enabled = false;
			this->checkBox2->Enabled = false;
			this->checkBox4->Enabled = false;
		}
		else
		{
			this->checkBox1->Enabled = true;
			this->checkBox2->Enabled = true;
			this->checkBox4->Enabled = true;
		}
	}
	private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->checkBox4->Checked == true)
		{
			this->checkBox1->Enabled = false;
			this->checkBox2->Enabled = false;
			this->checkBox3->Enabled = false;
		}
		else
		{
			this->checkBox1->Enabled = true;
			this->checkBox2->Enabled = true;
			this->checkBox3->Enabled = true;
		}
	}
};
}
