#pragma once
#include "funtion.h"

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// RegistryView ���K�n
	/// </summary>
	public ref class RegistryView : public System::Windows::Forms::Form
	{
	public:
		RegistryView(void)
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
		~RegistryView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox3;
	protected:
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox3;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;

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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(281, 203);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(195, 25);
			this->textBox3->TabIndex = 57;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &RegistryView::textBox3_TextChanged_1);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"�з���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label13->Location = System::Drawing::Point(89, 202);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(174, 20);
			this->label13->TabIndex = 56;
			this->label13->Text = L"registry city :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"�з���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label12->Location = System::Drawing::Point(89, 357);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(438, 20);
			this->label12->TabIndex = 55;
			this->label12->Text = L"EX : 9F, No.77, Dahu Rd, Xiangshan Dist";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"�з���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label11->Location = System::Drawing::Point(558, 151);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(174, 20);
			this->label11->TabIndex = 54;
			this->label11->Text = L"EX : 0287654321";
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Location = System::Drawing::Point(93, 298);
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->ReadOnly = true;
			this->maskedTextBox3->Size = System::Drawing::Size(575, 25);
			this->maskedTextBox3->TabIndex = 53;
			this->maskedTextBox3->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &RegistryView::maskedTextBox3_MaskInputRejected_1);
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(292, 146);
			this->maskedTextBox2->Mask = L"0000000000";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->ReadOnly = true;
			this->maskedTextBox2->Size = System::Drawing::Size(223, 25);
			this->maskedTextBox2->TabIndex = 52;
			this->maskedTextBox2->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &RegistryView::maskedTextBox2_MaskInputRejected_1);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"�з���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(89, 252);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(207, 20);
			this->label7->TabIndex = 51;
			this->label7->Text = L"registry address :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"�з���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(89, 145);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(185, 20);
			this->label6->TabIndex = 50;
			this->label6->Text = L"registry phone :";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"�з���", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(302, 451);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 68);
			this->button2->TabIndex = 49;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RegistryView::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(281, 97);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(160, 25);
			this->textBox1->TabIndex = 47;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &RegistryView::textBox1_TextChanged_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"�з���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(89, 97);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 20);
			this->label1->TabIndex = 46;
			this->label1->Text = L"registry name :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"�з���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(89, 50);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 20);
			this->label2->TabIndex = 44;
			this->label2->Text = L"registry number :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(302, 50);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(174, 25);
			this->textBox2->TabIndex = 58;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &RegistryView::textBox2_TextChanged);
			// 
			// RegistryView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(834, 532);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->maskedTextBox3);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"RegistryView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegistryView";
			this->Load += gcnew System::EventHandler(this, &RegistryView::RegistryView_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RegistryView_Load(System::Object^  sender, System::EventArgs^  e) {
		using namespace Runtime::InteropServices;
		funtion_DB MyDB;
		string k1 = "Registry";
		string k2 = "Rphone";
		string k3 = "Rnumber";
		string k4 = to_string(MyDB.getCounter());
		using namespace Runtime::InteropServices;
		this->textBox2->Text = gcnew String(k4.c_str());
		this->textBox1->Text = gcnew String(MyDB.getText().c_str());
		this->maskedTextBox2->Text = gcnew String(MyDB.selectSQL_Counter(k1, k2, k3).c_str());
		k2 = "Rcity";
		this->textBox3->Text = gcnew String(MyDB.selectSQL_Counter(k1, k2, k3).c_str());
		k2 = "Raddress";
		this->maskedTextBox3->Text = gcnew String(MyDB.selectSQL_Counter(k1, k2, k3).c_str());
		

		
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void maskedTextBox2_MaskInputRejected_1(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
}
private: System::Void textBox3_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void maskedTextBox3_MaskInputRejected_1(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
