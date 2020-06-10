#pragma once
#include<sstream>
#include<string>
#include<string.h>
#include<numeric>

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
	private: System::Windows::Forms::RadioButton^ rbInt;

	private: System::Windows::Forms::RadioButton^ rbYforX;

	private: System::Windows::Forms::RadioButton^ rbXforY;

	private: System::Windows::Forms::RadioButton^ rbAll;

	private: System::Windows::Forms::Label^ lblResult;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbA = (gcnew System::Windows::Forms::TextBox());
			this->tbB = (gcnew System::Windows::Forms::TextBox());
			this->tbC = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panelX = (gcnew System::Windows::Forms::Panel());
			this->tbX = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panelY = (gcnew System::Windows::Forms::Panel());
			this->tbY = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->rbInt = (gcnew System::Windows::Forms::RadioButton());
			this->rbYforX = (gcnew System::Windows::Forms::RadioButton());
			this->rbXforY = (gcnew System::Windows::Forms::RadioButton());
			this->rbAll = (gcnew System::Windows::Forms::RadioButton());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panelX->SuspendLayout();
			this->panelY->SuspendLayout();
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
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
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
			this->tbA->Size = System::Drawing::Size(47, 20);
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
			this->panel1->Controls->Add(this->rbInt);
			this->panel1->Controls->Add(this->rbYforX);
			this->panel1->Controls->Add(this->rbXforY);
			this->panel1->Controls->Add(this->rbAll);
			this->panel1->Location = System::Drawing::Point(12, 95);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(269, 149);
			this->panel1->TabIndex = 7;
			// 
			// panelX
			// 
			this->panelX->Controls->Add(this->tbX);
			this->panelX->Controls->Add(this->label5);
			this->panelX->Location = System::Drawing::Point(197, 74);
			this->panelX->Name = L"panelX";
			this->panelX->Size = System::Drawing::Size(69, 30);
			this->panelX->TabIndex = 11;
			this->panelX->Visible = false;
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
			// panelY
			// 
			this->panelY->Controls->Add(this->tbY);
			this->panelY->Controls->Add(this->label4);
			this->panelY->Location = System::Drawing::Point(197, 39);
			this->panelY->Name = L"panelY";
			this->panelY->Size = System::Drawing::Size(69, 30);
			this->panelY->TabIndex = 9;
			this->panelY->Visible = false;
			// 
			// tbY
			// 
			this->tbY->Location = System::Drawing::Point(30, 5);
			this->tbY->Name = L"tbY";
			this->tbY->Size = System::Drawing::Size(36, 20);
			this->tbY->TabIndex = 10;
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
			// rbInt
			// 
			this->rbInt->AutoSize = true;
			this->rbInt->Location = System::Drawing::Point(15, 123);
			this->rbInt->Name = L"rbInt";
			this->rbInt->Size = System::Drawing::Size(206, 17);
			this->rbInt->TabIndex = 11;
			this->rbInt->Text = L"Найти все целочисленные решения";
			this->rbInt->UseVisualStyleBackColor = true;
			this->rbInt->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbAll_CheckedChanged);
			// 
			// rbYforX
			// 
			this->rbYforX->AutoSize = true;
			this->rbYforX->Location = System::Drawing::Point(15, 87);
			this->rbYforX->Name = L"rbYforX";
			this->rbYforX->Size = System::Drawing::Size(93, 17);
			this->rbYforX->TabIndex = 10;
			this->rbYforX->Text = L"Найти у для х";
			this->rbYforX->UseVisualStyleBackColor = true;
			this->rbYforX->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbAll_CheckedChanged);
			// 
			// rbXforY
			// 
			this->rbXforY->AutoSize = true;
			this->rbXforY->Location = System::Drawing::Point(15, 52);
			this->rbXforY->Name = L"rbXforY";
			this->rbXforY->Size = System::Drawing::Size(93, 17);
			this->rbXforY->TabIndex = 9;
			this->rbXforY->Text = L"Найти х для у";
			this->rbXforY->UseVisualStyleBackColor = true;
			this->rbXforY->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbAll_CheckedChanged);
			// 
			// rbAll
			// 
			this->rbAll->AutoSize = true;
			this->rbAll->Checked = true;
			this->rbAll->Location = System::Drawing::Point(15, 17);
			this->rbAll->Name = L"rbAll";
			this->rbAll->Size = System::Drawing::Size(124, 17);
			this->rbAll->TabIndex = 8;
			this->rbAll->TabStop = true;
			this->rbAll->Text = L"Найти все решения";
			this->rbAll->UseVisualStyleBackColor = true;
			this->rbAll->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbAll_CheckedChanged);
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(24, 61);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(0, 13);
			this->lblResult->TabIndex = 8;
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Решатор линейных уравнений с двумя неизвестными";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panelX->ResumeLayout(false);
			this->panelX->PerformLayout();
			this->panelY->ResumeLayout(false);
			this->panelY->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void rbAll_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->panelX->Visible = this->rbYforX->Checked;
		this->panelY->Visible = this->rbXforY->Checked;
	}

	private: Tuple<double, double, double>^ parseABC() {
		double a, b, c;
		try {
			a = Double::Parse(tbA->Text);
		}
		catch (Exception^ ex) {
			throw gcnew Exception("Не задано значение параметра \'a\' или задано в неверном формате");
		}
		try {
			b = Double::Parse(tbB->Text);
		}
		catch (Exception^ ex) {
			throw gcnew Exception("Не задано значение \'b\' или задано в неверном формате");
		}
		try {
			c = Double::Parse(tbC->Text);
		}
		catch (Exception^ ex) {
			throw gcnew Exception("Не задано значение \'c\' или задано в неверном формате");
		}
		return gcnew Tuple<double, double, double>(a, b, c);
	}
	private: double findXforY() {
		auto t = parseABC();
		double a = t->Item1; double b = t->Item2; double c = t->Item3;
		double y = Double::Parse(tbY->Text);
		double x = (-c - b * y) / a;
		return x;
	}

	private: double findYforX() {
		auto t = parseABC();
		double a = t->Item1; double b = t->Item2; double c = t->Item3;
		double x = Double::Parse(tbX->Text);
		double y = (-c - a * x) / b;
		return y;
	}
		   /// <summary>
		   /// Функция преобразования в стрко уравнеиня прямой y=kx+b
		   /// </summary>
	private: String^ formatYotX(double k, double b) {
		std::stringstream str;
		str << "x - любое, y = ";
		if (k != 0) {
			str << k << "* x ";
		}
		if (b > 0) {
			if (k != 0) {
				str << " + ";
			}
			str << b;
		}
		if (b < 0) {
			str << " " << b;
		}
		if (k == 0 && b == 0) {
			str << "0";
		}
		return gcnew String(str.str().c_str());
	}
		   /// <summary>
		   /// Проверка на возможность целочисленного решения уравнения
		   /// </summary>
	private: void isPossibleIntegerSolution() {
		auto t = parseABC();
		double a = t->Item1; double b = t->Item2; double c = t->Item3;
		if ((long long)a != a) {
			throw gcnew Exception("a не целое");
		}
		if ((long long)b != b) {
			throw gcnew Exception("b не целое");
		}
		if ((long long)c != c) {
			throw gcnew Exception("c не целое");
		}

	}

		   long long gcd(long long a, long long b, long long& x, long long& y) {
			   if (a == 0) {
				   x = 0; y = 1;
				   return b;
			   }
			   long long x1, y1;
			   long long d = gcd(b % a, a, x1, y1);
			   x = y1 - (b / a) * x1;
			   y = x1;
			   return d;
		   }

	private: void findIntSoution() {
		auto t = parseABC();
		long long a = (long long)t->Item1;
		long long b = (long long)t->Item2;
		long long c = (long long)t->Item3;



		long long d = std::gcd(a, b);
		if (c % d != 0) {
			lblResult->Text = "Нет целых решений";
			return;
		}
		a /= d;
		b /= d;
		c /= d;

		long long x0 = 1;
		long long y0 = 1;

		d = gcd(a, b, x0, y0);

		std::stringstream str;
		str << "x = " << (x0 * c) << "+" << b << "t";
		str << "\n";
		str << "y = " << (y0 * c) << "-" << a << "t";
		str << "\n";
		str << "где t - любое целое число";

		lblResult->Text = gcnew String(str.str().c_str());

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->rbAll->Checked) {
			try {
				auto t = parseABC();
				double a = t->Item1; double b = t->Item2; double c = t->Item3;
				if (b != 0) {
					double k = (-a / b);
					double _b = (-c / b);

					lblResult->Text = this->formatYotX(k, _b);
				}
				else {
					if (a != 0) {
						double x = -c / a;
						std::stringstream str;
						str << "x = " << x << ", y - любое";
						lblResult->Text = gcnew String(str.str().c_str());
					}
					else {
						if (c != 0) {
							lblResult->Text = "Нет решений";
						}
						else {
							lblResult->Text = "x, y - любые числа";
						}
					}
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}

		}

		if (rbXforY->Checked) {
			try {
				double x = this->findXforY();
				this->lblResult->Text = "x = " + x;
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}

		if (rbYforX->Checked) {
			try {
				double y = this->findYforX();
				this->lblResult->Text = "y = " + y;
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
		if (rbInt->Checked) {
			try {
				this->isPossibleIntegerSolution();
				findIntSoution();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
