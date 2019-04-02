#pragma once
#include <math.h>

namespace YapC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace My4lab;

    

	/// <summary>
	/// Сводка для Laba4F2
	/// </summary>

	public ref class Laba4F2 : public System::Windows::Forms::Form
	{
	public:
		Laba4F2(void)
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
		~Laba4F2()
		{
			if (components)
			{
				delete components;
			}
		}

		double vvod(TextBox^ x)
		{
			return System::Convert::ToDouble(x->Text);
		}
	
		void vivod_TextBox(double z, TextBox^ t)
		{
			t->Text = z.ToString("F5");
		}

		void vivod_ListBox(double x, double y, ListBox^ L)
		{
			L->Items->Add(x.ToString("F2") + "\t" + y.ToString("F3"));
		}

		void TypeCheck(TextBox^ t, KeyPressEventArgs^ e)
		{
			if (!Char::IsDigit(e->KeyChar) && !(Char::IsControl(e->KeyChar)))
			{
				if (!(e->KeyChar.ToString() == "," && t->Text->IndexOf(',') == -1) && !(e->KeyChar.ToString() == "-" && t->Text->IndexOf('-') == -1))
				{
					e->Handled = true;
				}
			}
		}

		void Valid(TextBox^ t, ErrorProvider^ e)
		{
			if (t->Text == "")
			{
				e->SetError(t, "Вы не ввели данные");
			}
			else
			{
				e->SetError(t, "");
			}
		}
		double Fn(double x, double y, double b)
		{
			double min1, min2, max,z;
			if (x * y < 2)
			{
				if (x < y)
				{
					z = x;
				}
				else
				{
					z = y;
				}
				
			}

			if (x * y > 5)
			{
				if (cos(x) < sin(y))
					max = sin(y);
				else
					max = cos(x);
				if (max < b * x)
				{
					max = b * x;
				}
				if (x < b)

					min2 = x;
				else
					min2 = b;

				z = max / min2;

				
			}
			else
			{
				 z = b + (y * sin(x));
				
			}
			return z;
		}















	private: System::Windows::Forms::ErrorProvider^  errorProvider1;




private: System::Windows::Forms::Timer^  timer1;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Button^  Result;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Button^  Back;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::TextBox^  res_value;
private: System::Windows::Forms::TextBox^  z_value;
private: System::Windows::Forms::TextBox^  x_value;
private: System::Windows::Forms::TextBox^  y_value;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::TextBox^  h_value;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::ListBox^  Answer_List;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::TextBox^  max_value;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::TextBox^  n_value;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::TextBox^  m_value;
private: System::Windows::Forms::TextBox^  b_value;
private: System::Windows::Forms::TextBox^  a_value;
	private: System::ComponentModel::IContainer^  components;
	protected:







	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Laba4F2::typeid));
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->Result = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->res_value = (gcnew System::Windows::Forms::TextBox());
			this->z_value = (gcnew System::Windows::Forms::TextBox());
			this->x_value = (gcnew System::Windows::Forms::TextBox());
			this->y_value = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->h_value = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Answer_List = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->max_value = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->n_value = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->m_value = (gcnew System::Windows::Forms::TextBox());
			this->b_value = (gcnew System::Windows::Forms::TextBox());
			this->a_value = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Laba4F2::timer1_Tick);
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"MatchTV", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(94, 377);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 23);
			this->label7->TabIndex = 98;
			this->label7->Text = L"B";
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"MatchTV", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(94, 323);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(21, 23);
			this->label19->TabIndex = 97;
			this->label19->Text = L"A";
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"MatchTV", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(94, 269);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(21, 23);
			this->label20->TabIndex = 96;
			this->label20->Text = L"Z";
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"MatchTV", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(94, 215);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(21, 23);
			this->label21->TabIndex = 95;
			this->label21->Text = L"Y";
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"MatchTV", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(94, 161);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(22, 23);
			this->label22->TabIndex = 94;
			this->label22->Text = L"X";
			// 
			// Result
			// 
			this->Result->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Result->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Result->Location = System::Drawing::Point(373, 451);
			this->Result->Margin = System::Windows::Forms::Padding(2);
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(128, 47);
			this->Result->TabIndex = 93;
			this->Result->Text = L"Вычислить";
			this->Result->UseVisualStyleBackColor = true;
			this->Result->Click += gcnew System::EventHandler(this, &Laba4F2::Result_Click);
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(795, 15);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(166, 21);
			this->label18->TabIndex = 92;
			this->label18->Text = L"x                    y=f(x)";
			// 
			// Back
			// 
			this->Back->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Back->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Back->Location = System::Drawing::Point(1280, 531);
			this->Back->Margin = System::Windows::Forms::Padding(2);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(111, 28);
			this->Back->TabIndex = 91;
			this->Back->Text = L"Назад";
			this->Back->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(143, 438);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(108, 24);
			this->label16->TabIndex = 90;
			this->label16->Text = L"Результат:";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(100, 477);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(34, 21);
			this->label13->TabIndex = 89;
			this->label13->Text = L"z =";
			// 
			// res_value
			// 
			this->res_value->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->res_value->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->res_value->Location = System::Drawing::Point(137, 473);
			this->res_value->Margin = System::Windows::Forms::Padding(2);
			this->res_value->Name = L"res_value";
			this->res_value->Size = System::Drawing::Size(125, 29);
			this->res_value->TabIndex = 88;
			// 
			// z_value
			// 
			this->z_value->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->z_value->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->z_value->Location = System::Drawing::Point(147, 263);
			this->z_value->Margin = System::Windows::Forms::Padding(2);
			this->z_value->Name = L"z_value";
			this->z_value->Size = System::Drawing::Size(43, 29);
			this->z_value->TabIndex = 87;
			// 
			// x_value
			// 
			this->x_value->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->x_value->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->x_value->Location = System::Drawing::Point(147, 161);
			this->x_value->Margin = System::Windows::Forms::Padding(2);
			this->x_value->Name = L"x_value";
			this->x_value->Size = System::Drawing::Size(43, 29);
			this->x_value->TabIndex = 86;
			// 
			// y_value
			// 
			this->y_value->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->y_value->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->y_value->Location = System::Drawing::Point(147, 215);
			this->y_value->Margin = System::Windows::Forms::Padding(2);
			this->y_value->Name = L"y_value";
			this->y_value->Size = System::Drawing::Size(43, 29);
			this->y_value->TabIndex = 85;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(597, 119);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(139, 21);
			this->label12->TabIndex = 84;
			this->label12->Text = L"Второе задание:";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(94, 105);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(139, 21);
			this->label11->TabIndex = 83;
			this->label11->Text = L"Первое задание:";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(642, 246);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 21);
			this->label10->TabIndex = 82;
			this->label10->Text = L"h =";
			// 
			// h_value
			// 
			this->h_value->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->h_value->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h_value->Location = System::Drawing::Point(679, 243);
			this->h_value->Margin = System::Windows::Forms::Padding(2);
			this->h_value->Name = L"h_value";
			this->h_value->Size = System::Drawing::Size(43, 29);
			this->h_value->TabIndex = 81;
			this->h_value->Text = L"0,2";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(579, 245);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(48, 21);
			this->label9->TabIndex = 80;
			this->label9->Text = L"Шаг:";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(563, 160);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(187, 21);
			this->label8->TabIndex = 79;
			this->label8->Text = L"Границы промежутка:";
			// 
			// Answer_List
			// 
			this->Answer_List->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Answer_List->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Answer_List->FormattingEnabled = true;
			this->Answer_List->ItemHeight = 20;
			this->Answer_List->Location = System::Drawing::Point(791, 47);
			this->Answer_List->Margin = System::Windows::Forms::Padding(2);
			this->Answer_List->Name = L"Answer_List";
			this->Answer_List->Size = System::Drawing::Size(218, 444);
			this->Answer_List->TabIndex = 78;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(566, 351);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 21);
			this->label6->TabIndex = 77;
			this->label6->Text = L"max =";
			// 
			// max_value
			// 
			this->max_value->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->max_value->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->max_value->Location = System::Drawing::Point(625, 349);
			this->max_value->Margin = System::Windows::Forms::Padding(2);
			this->max_value->Name = L"max_value";
			this->max_value->Size = System::Drawing::Size(111, 29);
			this->max_value->TabIndex = 76;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(563, 317);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 21);
			this->label5->TabIndex = 75;
			this->label5->Text = L"Результат:";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(663, 198);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 21);
			this->label3->TabIndex = 74;
			this->label3->Text = L"n =";
			// 
			// n_value
			// 
			this->n_value->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->n_value->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->n_value->Location = System::Drawing::Point(700, 195);
			this->n_value->Margin = System::Windows::Forms::Padding(2);
			this->n_value->Name = L"n_value";
			this->n_value->Size = System::Drawing::Size(43, 29);
			this->n_value->TabIndex = 73;
			this->n_value->Text = L"8";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(574, 197);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 21);
			this->label4->TabIndex = 72;
			this->label4->Text = L"m =";
			// 
			// m_value
			// 
			this->m_value->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->m_value->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->m_value->Location = System::Drawing::Point(617, 191);
			this->m_value->Margin = System::Windows::Forms::Padding(2);
			this->m_value->Name = L"m_value";
			this->m_value->Size = System::Drawing::Size(43, 29);
			this->m_value->TabIndex = 71;
			this->m_value->Text = L"6";
			// 
			// b_value
			// 
			this->b_value->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->b_value->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_value->Location = System::Drawing::Point(147, 377);
			this->b_value->Margin = System::Windows::Forms::Padding(2);
			this->b_value->Name = L"b_value";
			this->b_value->Size = System::Drawing::Size(43, 29);
			this->b_value->TabIndex = 70;
			// 
			// a_value
			// 
			this->a_value->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->a_value->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->a_value->Location = System::Drawing::Point(147, 323);
			this->a_value->Margin = System::Windows::Forms::Padding(2);
			this->a_value->Name = L"a_value";
			this->a_value->Size = System::Drawing::Size(43, 29);
			this->a_value->TabIndex = 69;
			// 
			// Laba4F2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1436, 570);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->Result);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->res_value);
			this->Controls->Add(this->z_value);
			this->Controls->Add(this->x_value);
			this->Controls->Add(this->y_value);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->h_value);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Answer_List);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->max_value);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->n_value);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->m_value);
			this->Controls->Add(this->b_value);
			this->Controls->Add(this->a_value);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Laba4F2";
			this->Opacity = 0;
			this->Text = L"Решение лабораторной работы №4";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Laba4F2::Laba4F2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void Result_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		// Вычисления первого задания
		double x = lab4funcs::vvod(x_value);
		double y = lab4funcs::vvod(y_value);
		double z = lab4funcs::vvod(z_value);
		double a = lab4funcs::vvod(a_value);
		double b = lab4funcs::vvod(b_value);
		double res = lab4funcs::Solution(x, y, z, a, b);
		lab4funcs::vivod_TextBox(res, res_value);
		// Вычисления второго задания 
		double m = lab4funcs::vvod(m_value);
		double n = lab4funcs::vvod(n_value);
		double h = lab4funcs::vvod(h_value);

		double max = -pow(10, 23);
		lab4funcs::resh2(m, n, h, y, z, a, b, max, Answer_List);
		lab4funcs::vivod_TextBox(max, max_value);
	}
	catch (Exception^ e) {
		lab4funcs::Valid(x_value, errorProvider1);
		lab4funcs::Valid(y_value, errorProvider1);
		lab4funcs::Valid(z_value, errorProvider1);
		lab4funcs::Valid(a_value, errorProvider1);
		lab4funcs::Valid(b_value, errorProvider1);
		lab4funcs::Valid(m_value, errorProvider1);
		lab4funcs::Valid(n_value, errorProvider1);
		lab4funcs::Valid(h_value, errorProvider1);

	}
}
		 private: System::Void x_value_Validated(System::Object^  sender, System::EventArgs^  e) {
			 lab4funcs::Valid(x_value, errorProvider1);
		 }
		private: System::Void y_value_Validated(System::Object^  sender, System::EventArgs^  e) {
			lab4funcs::Valid(y_value, errorProvider1);
		}
		private: System::Void z_value_Validated(System::Object^  sender, System::EventArgs^  e) {
			lab4funcs::Valid(z_value, errorProvider1);
		}
		private: System::Void a_value_Validated(System::Object^  sender, System::EventArgs^  e) {
			lab4funcs::Valid(a_value, errorProvider1);
		}
		private: System::Void b_value_Validated(System::Object^  sender, System::EventArgs^  e) {
			lab4funcs::Valid(b_value, errorProvider1);
		}
		private: System::Void m_value_Validated(System::Object^  sender, System::EventArgs^  e) {
			lab4funcs::Valid(m_value, errorProvider1);
		}
		private: System::Void n_value_Validated(System::Object^  sender, System::EventArgs^  e) {
			lab4funcs::Valid(n_value, errorProvider1);
		}
		private: System::Void h_value_Validated(System::Object^  sender, System::EventArgs^  e) {
			lab4funcs::Valid(h_value, errorProvider1);
		}

		private: System::Void x_value_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			lab4funcs::TypeCheck(x_value, e);
		}
		private: System::Void y_value_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			lab4funcs::TypeCheck(y_value, e);
		}
		private: System::Void z_value_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			lab4funcs::TypeCheck(z_value, e);
		}
		private: System::Void a_value_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			lab4funcs::TypeCheck(a_value, e);
		}
		private: System::Void b_value_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			lab4funcs::TypeCheck(b_value, e);
		}
		private: System::Void m_value_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			lab4funcs::TypeCheck(m_value, e);
		}
		private: System::Void n_value_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			lab4funcs::TypeCheck(n_value, e);
		}
		private: System::Void h_value_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			lab4funcs::TypeCheck(h_value, e);
		}
		private: System::Void Back_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Owner->Show();
			this->Hide();
		}
		private: System::Void Laba4F2_Load(System::Object^  sender, System::EventArgs^  e) {
			timer1->Enabled = true;
		}
		private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			this->Opacity = this->Opacity + 0.2;
			if (this->Opacity == 1)
			{
				timer1->Enabled = false;
			}
		}
};
}
