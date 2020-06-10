#pragma once

namespace CLR2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbA;
	private: System::Windows::Forms::TextBox^ tbB;
	private: System::Windows::Forms::TextBox^ tbC;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panelX;
	private: System::Windows::Forms::TextBox^ tbX;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panelY;
	private: System::Windows::Forms::TextBox^ tbY;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ lblResult;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbA = (gcnew System::Windows::Forms::TextBox());
			this->tbB = (gcnew System::Windows::Forms::TextBox());
			this->tbC = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->panelY = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbY = (gcnew System::Windows::Forms::TextBox());
			this->panelX = (gcnew System::Windows::Forms::Panel());
			this->tbX = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panelY->SuspendLayout();
			this->panelX->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(329, 209);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Расчитать";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(67, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"x+";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(133, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"y+";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(220, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"= 0";
			// 
			// tbA
			// 
			this->tbA->Location = System::Drawing::Point(12, 16);
			this->tbA->Name = L"tbA";
			this->tbA->Size = System::Drawing::Size(49, 20);
			this->tbA->TabIndex = 4;
			// 
			// tbB
			// 
			this->tbB->Location = System::Drawing::Point(91, 17);
			this->tbB->Name = L"tbB";
			this->tbB->Size = System::Drawing::Size(36, 20);
			this->tbB->TabIndex = 5;
			// 
			// tbC
			// 
			this->tbC->Location = System::Drawing::Point(157, 18);
			this->tbC->Name = L"tbC";
			this->tbC->Size = System::Drawing::Size(41, 20);
			this->tbC->TabIndex = 6;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panelX);
			this->panel1->Controls->Add(this->panelY);
			this->panel1->Controls->Add(this->radioButton4);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Location = System::Drawing::Point(12, 95);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(269, 149);
			this->panel1->TabIndex = 7;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(15, 17);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(124, 17);
			this->radioButton1->TabIndex = 8;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Найти все решения";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(15, 52);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(93, 17);
			this->radioButton2->TabIndex = 9;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Найти х для у";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(15, 87);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(93, 17);
			this->radioButton3->TabIndex = 10;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Найти у для х";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(15, 123);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(206, 17);
			this->radioButton4->TabIndex = 11;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Найти все целочисленные решения";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(24, 61);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(35, 13);
			this->lblResult->TabIndex = 8;
			this->lblResult->Text = L"label4";
			// 
			// panelY
			// 
			this->panelY->Controls->Add(this->tbY);
			this->panelY->Controls->Add(this->label4);
			this->panelY->Location = System::Drawing::Point(197, 39);
			this->panelY->Name = L"panelY";
			this->panelY->Size = System::Drawing::Size(69, 30);
			this->panelY->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(5, 8);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"y=";
			// 
			// tbY
			// 
			this->tbY->Location = System::Drawing::Point(30, 5);
			this->tbY->Name = L"tbY";
			this->tbY->Size = System::Drawing::Size(36, 20);
			this->tbY->TabIndex = 10;
			// 
			// panelX
			// 
			this->panelX->Controls->Add(this->tbX);
			this->panelX->Controls->Add(this->label5);
			this->panelX->Location = System::Drawing::Point(197, 74);
			this->panelX->Name = L"panelX";
			this->panelX->Size = System::Drawing::Size(69, 30);
			this->panelX->TabIndex = 11;
			// 
			// tbX
			// 
			this->tbX->Location = System::Drawing::Point(30, 5);
			this->tbX->Name = L"tbX";
			this->tbX->Size = System::Drawing::Size(36, 20);
			this->tbX->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(5, 8);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"x=";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(460, 277);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tbC);
			this->Controls->Add(this->tbB);
			this->Controls->Add(this->tbA);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panelY->ResumeLayout(false);
			this->panelY->PerformLayout();
			this->panelX->ResumeLayout(false);
			this->panelX->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
