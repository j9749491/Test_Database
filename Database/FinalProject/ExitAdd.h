#ifndef EXITADD_H
#define EXITADD_H
#include "funtion.h"



namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ExitAdd 的摘要
	/// </summary>
	public ref class ExitAdd : public System::Windows::Forms::Form
	{
	public:
		ExitAdd(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~ExitAdd()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		int aa;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(58, 42);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Are you sure \?";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(160, 109);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 29);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(20, 109);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 29);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Sure";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ExitAdd::button1_Click);
			// 
			// ExitAdd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(273, 162);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"ExitAdd";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Java SE7 OCA Simulation Test";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		this->Close();
	}
	};
}
#endif