#include"funtion.h"
#include"MyForm2.h"
#include"Options.h"

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sign_In ���K�n
	/// </summary>
	public ref class Sign_In : public System::Windows::Forms::Form
	{
	public:
		Sign_In(void)
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
		~Sign_In()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"�з���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(20, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 16);
			this->label2->TabIndex = 15;
			this->label2->Text = L"UserName :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"�з���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(20, 146);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 16);
			this->label1->TabIndex = 16;
			this->label1->Text = L"PassWord :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"�з���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(20, 235);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 16);
			this->label3->TabIndex = 17;
			this->label3->Text = L"DataBase Name :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(178, 70);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(209, 22);
			this->textBox1->TabIndex = 18;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Sign_In::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(178, 146);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(209, 22);
			this->textBox2->TabIndex = 19;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(178, 231);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(209, 22);
			this->textBox3->TabIndex = 20;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"�з���", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(249, 316);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 54);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Sign_In::button1_Click);
			// 
			// Sign_In
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(418, 399);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Sign_In";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sign_In";
			this->Load += gcnew System::EventHandler(this, &Sign_In::Sign_In_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		using namespace Runtime::InteropServices;
		const char* U = (const char*)(Marshal::StringToHGlobalAnsi(this->textBox1->Text)).ToPointer();
		const char* P = (const char*)(Marshal::StringToHGlobalAnsi(this->textBox2->Text)).ToPointer();
		const char* D = (const char*)(Marshal::StringToHGlobalAnsi(this->textBox3->Text)).ToPointer();
		//cout << U << endl;
		//MyDB.setuser(U, P, D);
		funtion_DB MyDB(U,P,D);
		if (MyDB.getY() == false)
		{
			FinalProject::MyForm6^sp = gcnew FinalProject::MyForm6;
			sp->ShowDialog();;
		}
		else
		{
			FinalProject::Options^sp2 = gcnew FinalProject::Options;
			sp2->Show();
		}
		
		this->Close();
		
		
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Sign_In_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
