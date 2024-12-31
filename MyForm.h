#pragma once

namespace firstapp {

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
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Label^ res;

	private: System::Windows::Forms::Button^ btn_clear;
	private: System::Windows::Forms::Button^ btn_del;
















	private: System::Windows::Forms::Button^ sum_minus;
	private: System::Windows::Forms::Button^ btn_procent;





	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ btn_1;

	private: System::Windows::Forms::Button^ btn_2;
	private: System::Windows::Forms::Button^ btn_3;
	private: System::Windows::Forms::Button^ btn_4;
	private: System::Windows::Forms::Button^ btn_5;
	private: System::Windows::Forms::Button^ btn_6;
	private: System::Windows::Forms::Button^ btn_7;
	private: System::Windows::Forms::Button^ btn_8;
	private: System::Windows::Forms::Button^ btn_9;
	private: System::Windows::Forms::Button^ btn_minus;

	private: System::Windows::Forms::Button^ btn_sum;
	private: System::Windows::Forms::Button^ btn_multiply;
	private: System::Windows::Forms::Button^ btn_ravno;
	private: System::Windows::Forms::Button^ button1;
	private: float first_num;
	private: char action;


	protected:

	protected:


	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->res = (gcnew System::Windows::Forms::Label());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_del = (gcnew System::Windows::Forms::Button());
			this->sum_minus = (gcnew System::Windows::Forms::Button());
			this->btn_procent = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_5 = (gcnew System::Windows::Forms::Button());
			this->btn_6 = (gcnew System::Windows::Forms::Button());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->btn_8 = (gcnew System::Windows::Forms::Button());
			this->btn_9 = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->btn_sum = (gcnew System::Windows::Forms::Button());
			this->btn_multiply = (gcnew System::Windows::Forms::Button());
			this->btn_ravno = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_exit->Location = System::Drawing::Point(12, 12);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(22, 23);
			this->btn_exit->TabIndex = 0;
			this->btn_exit->Text = L"X";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MyForm::btn_exit_Click);
			// 
			// res
			// 
			this->res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->res->ForeColor = System::Drawing::Color::Black;
			this->res->Location = System::Drawing::Point(12, 70);
			this->res->Name = L"res";
			this->res->Size = System::Drawing::Size(260, 43);
			this->res->TabIndex = 1;
			this->res->Text = L"0";
			this->res->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn_clear
			// 
			this->btn_clear->BackColor = System::Drawing::Color::DimGray;
			this->btn_clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_clear->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_clear->Location = System::Drawing::Point(7, 168);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(65, 55);
			this->btn_clear->TabIndex = 2;
			this->btn_clear->Text = L"CE";
			this->btn_clear->UseVisualStyleBackColor = false;
			this->btn_clear->Click += gcnew System::EventHandler(this, &MyForm::btn_clear_Click);
			// 
			// btn_del
			// 
			this->btn_del->BackColor = System::Drawing::Color::DarkOrange;
			this->btn_del->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_del->ForeColor = System::Drawing::Color::White;
			this->btn_del->Location = System::Drawing::Point(220, 168);
			this->btn_del->Name = L"btn_del";
			this->btn_del->Size = System::Drawing::Size(65, 55);
			this->btn_del->TabIndex = 5;
			this->btn_del->Text = L"/";
			this->btn_del->UseVisualStyleBackColor = false;
			this->btn_del->Click += gcnew System::EventHandler(this, &MyForm::btn_del_Click);
			// 
			// sum_minus
			// 
			this->sum_minus->BackColor = System::Drawing::Color::DimGray;
			this->sum_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sum_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sum_minus->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->sum_minus->Location = System::Drawing::Point(78, 168);
			this->sum_minus->Name = L"sum_minus";
			this->sum_minus->Size = System::Drawing::Size(65, 55);
			this->sum_minus->TabIndex = 18;
			this->sum_minus->Text = L"+/-";
			this->sum_minus->UseVisualStyleBackColor = false;
			this->sum_minus->Click += gcnew System::EventHandler(this, &MyForm::sum_minus_Click);
			// 
			// btn_procent
			// 
			this->btn_procent->BackColor = System::Drawing::Color::DimGray;
			this->btn_procent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_procent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_procent->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_procent->Location = System::Drawing::Point(149, 168);
			this->btn_procent->Name = L"btn_procent";
			this->btn_procent->Size = System::Drawing::Size(65, 55);
			this->btn_procent->TabIndex = 19;
			this->btn_procent->Text = L"%";
			this->btn_procent->UseVisualStyleBackColor = false;
			this->btn_procent->Click += gcnew System::EventHandler(this, &MyForm::btn_procent_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::DarkGray;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(7, 415);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(136, 55);
			this->button10->TabIndex = 25;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::BTN_NUMS_Click);
			// 
			// btn_1
			// 
			this->btn_1->BackColor = System::Drawing::Color::DarkGray;
			this->btn_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_1->ForeColor = System::Drawing::Color::White;
			this->btn_1->Location = System::Drawing::Point(7, 229);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(65, 55);
			this->btn_1->TabIndex = 26;
			this->btn_1->Text = L"1";
			this->btn_1->UseVisualStyleBackColor = false;
			this->btn_1->Click += gcnew System::EventHandler(this, &MyForm::BTN_NUMS_Click);
			// 
			// btn_2
			// 
			this->btn_2->BackColor = System::Drawing::Color::DarkGray;
			this->btn_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_2->ForeColor = System::Drawing::Color::White;
			this->btn_2->Location = System::Drawing::Point(78, 229);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(65, 55);
			this->btn_2->TabIndex = 27;
			this->btn_2->Text = L"2";
			this->btn_2->UseVisualStyleBackColor = false;
			this->btn_2->Click += gcnew System::EventHandler(this, &MyForm::BTN_NUMS_Click);
			// 
			// btn_3
			// 
			this->btn_3->BackColor = System::Drawing::Color::DarkGray;
			this->btn_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_3->ForeColor = System::Drawing::Color::White;
			this->btn_3->Location = System::Drawing::Point(149, 229);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(65, 55);
			this->btn_3->TabIndex = 28;
			this->btn_3->Text = L"3";
			this->btn_3->UseVisualStyleBackColor = false;
			this->btn_3->Click += gcnew System::EventHandler(this, &MyForm::BTN_NUMS_Click);
			// 
			// btn_4
			// 
			this->btn_4->BackColor = System::Drawing::Color::DarkGray;
			this->btn_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_4->ForeColor = System::Drawing::Color::White;
			this->btn_4->Location = System::Drawing::Point(7, 290);
			this->btn_4->Name = L"btn_4";
			this->btn_4->Size = System::Drawing::Size(65, 55);
			this->btn_4->TabIndex = 29;
			this->btn_4->Text = L"4";
			this->btn_4->UseVisualStyleBackColor = false;
			this->btn_4->Click += gcnew System::EventHandler(this, &MyForm::BTN_NUMS_Click);
			// 
			// btn_5
			// 
			this->btn_5->BackColor = System::Drawing::Color::DarkGray;
			this->btn_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_5->ForeColor = System::Drawing::Color::White;
			this->btn_5->Location = System::Drawing::Point(78, 290);
			this->btn_5->Name = L"btn_5";
			this->btn_5->Size = System::Drawing::Size(65, 55);
			this->btn_5->TabIndex = 30;
			this->btn_5->Text = L"5";
			this->btn_5->UseVisualStyleBackColor = false;
			this->btn_5->Click += gcnew System::EventHandler(this, &MyForm::BTN_NUMS_Click);
			// 
			// btn_6
			// 
			this->btn_6->BackColor = System::Drawing::Color::DarkGray;
			this->btn_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_6->ForeColor = System::Drawing::Color::White;
			this->btn_6->Location = System::Drawing::Point(149, 290);
			this->btn_6->Name = L"btn_6";
			this->btn_6->Size = System::Drawing::Size(65, 55);
			this->btn_6->TabIndex = 31;
			this->btn_6->Text = L"6";
			this->btn_6->UseVisualStyleBackColor = false;
			this->btn_6->Click += gcnew System::EventHandler(this, &MyForm::BTN_NUMS_Click);
			// 
			// btn_7
			// 
			this->btn_7->BackColor = System::Drawing::Color::DarkGray;
			this->btn_7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_7->ForeColor = System::Drawing::Color::White;
			this->btn_7->Location = System::Drawing::Point(7, 351);
			this->btn_7->Name = L"btn_7";
			this->btn_7->Size = System::Drawing::Size(65, 55);
			this->btn_7->TabIndex = 32;
			this->btn_7->Text = L"7";
			this->btn_7->UseVisualStyleBackColor = false;
			this->btn_7->Click += gcnew System::EventHandler(this, &MyForm::BTN_NUMS_Click);
			// 
			// btn_8
			// 
			this->btn_8->BackColor = System::Drawing::Color::DarkGray;
			this->btn_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_8->ForeColor = System::Drawing::Color::White;
			this->btn_8->Location = System::Drawing::Point(78, 351);
			this->btn_8->Name = L"btn_8";
			this->btn_8->Size = System::Drawing::Size(65, 55);
			this->btn_8->TabIndex = 33;
			this->btn_8->Text = L"8";
			this->btn_8->UseVisualStyleBackColor = false;
			this->btn_8->Click += gcnew System::EventHandler(this, &MyForm::BTN_NUMS_Click);
			// 
			// btn_9
			// 
			this->btn_9->BackColor = System::Drawing::Color::DarkGray;
			this->btn_9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_9->ForeColor = System::Drawing::Color::White;
			this->btn_9->Location = System::Drawing::Point(149, 351);
			this->btn_9->Name = L"btn_9";
			this->btn_9->Size = System::Drawing::Size(65, 55);
			this->btn_9->TabIndex = 34;
			this->btn_9->Text = L"9";
			this->btn_9->UseVisualStyleBackColor = false;
			this->btn_9->Click += gcnew System::EventHandler(this, &MyForm::BTN_NUMS_Click);
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::Color::DarkOrange;
			this->btn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus->ForeColor = System::Drawing::Color::White;
			this->btn_minus->Location = System::Drawing::Point(220, 351);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(65, 55);
			this->btn_minus->TabIndex = 35;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = false;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_Click);
			// 
			// btn_sum
			// 
			this->btn_sum->BackColor = System::Drawing::Color::DarkOrange;
			this->btn_sum->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_sum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_sum->ForeColor = System::Drawing::Color::White;
			this->btn_sum->Location = System::Drawing::Point(220, 290);
			this->btn_sum->Name = L"btn_sum";
			this->btn_sum->Size = System::Drawing::Size(65, 55);
			this->btn_sum->TabIndex = 36;
			this->btn_sum->Text = L"+";
			this->btn_sum->UseVisualStyleBackColor = false;
			this->btn_sum->Click += gcnew System::EventHandler(this, &MyForm::btn_sum_Click);
			// 
			// btn_multiply
			// 
			this->btn_multiply->BackColor = System::Drawing::Color::DarkOrange;
			this->btn_multiply->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_multiply->ForeColor = System::Drawing::Color::White;
			this->btn_multiply->Location = System::Drawing::Point(220, 229);
			this->btn_multiply->Name = L"btn_multiply";
			this->btn_multiply->Size = System::Drawing::Size(65, 55);
			this->btn_multiply->TabIndex = 37;
			this->btn_multiply->Text = L"x";
			this->btn_multiply->UseVisualStyleBackColor = false;
			this->btn_multiply->Click += gcnew System::EventHandler(this, &MyForm::btn_multiply_Click);
			// 
			// btn_ravno
			// 
			this->btn_ravno->BackColor = System::Drawing::Color::DarkOrange;
			this->btn_ravno->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_ravno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ravno->ForeColor = System::Drawing::Color::White;
			this->btn_ravno->Location = System::Drawing::Point(220, 415);
			this->btn_ravno->Name = L"btn_ravno";
			this->btn_ravno->Size = System::Drawing::Size(65, 55);
			this->btn_ravno->TabIndex = 38;
			this->btn_ravno->Text = L"=";
			this->btn_ravno->UseVisualStyleBackColor = false;
			this->btn_ravno->Click += gcnew System::EventHandler(this, &MyForm::btn_ravno_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(149, 415);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(65, 55);
			this->button1->TabIndex = 39;
			this->button1->Text = L",";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(292, 479);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_ravno);
			this->Controls->Add(this->btn_multiply);
			this->Controls->Add(this->btn_sum);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->btn_9);
			this->Controls->Add(this->btn_8);
			this->Controls->Add(this->btn_7);
			this->Controls->Add(this->btn_6);
			this->Controls->Add(this->btn_5);
			this->Controls->Add(this->btn_4);
			this->Controls->Add(this->btn_3);
			this->Controls->Add(this->btn_2);
			this->Controls->Add(this->btn_1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->btn_procent);
			this->Controls->Add(this->sum_minus);
			this->Controls->Add(this->btn_del);
			this->Controls->Add(this->btn_clear);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->res);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	
	private: System::Void BTN_NUMS_Click(System::Object^ sender, System::EventArgs^ e)
	{	
		this->res->ForeColor = Color::White;
		Button^ button = safe_cast<Button^>(sender);
		
		if (this->res->Text == "0")
			this->res->Text = button->Text;
		else
			this->res->Text += button->Text;
	}

	private: System::Void btn_del_Click(System::Object^ sender, System::EventArgs^ e) {
		math_simvol('/');
	}
	private: System::Void btn_multiply_Click(System::Object^ sender, System::EventArgs^ e) {
		math_simvol('*');
	}
	private: System::Void btn_sum_Click(System::Object^ sender, System::EventArgs^ e) {
		math_simvol('+');
	}
	private: System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_simvol('-');
	}

	private:  System::Void math_simvol(char doing)
	{
		this->first_num = System::Convert::ToDouble(this->res->Text);
		this->action = doing;
		this->res->Text = "0";
	}

	private: System::Void btn_ravno_Click(System::Object^ sender, System::EventArgs^ e) {
		float second = System::Convert::ToDouble(this->res->Text);
		float res;
		switch (this->action)
		{
		case '+': res = this->first_num + second; break;
		case '-': res = this->first_num - second; break;
		case '*': res = this->first_num * second; break;
		case '%': res = this->first_num * second / 100; break;
		case '/':
			if (second == 0)
			{	
				res = 0;
				this->res->ForeColor = Color::Red;
				MessageBox::Show(this, "Нельзя делить на 0", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			else {
				res = this->first_num / second;
				break;
			}
				
		}

		this->res->Text = System::Convert::ToString(res);
	}
	
	
	private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->res->Text = "0";
		this->first_num = 0;
	}
	private: System::Void sum_minus_Click(System::Object^ sender, System::EventArgs^ e) { 
		float num = System::Convert::ToDouble(this->res->Text);
		num *= -1;
		this->res->Text = System::Convert::ToString(num);
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->res->Text;
		if (!text->Contains(","))
			this->res->Text = text + ",";
	}

	private: System::Void btn_procent_Click(System::Object^ sender, System::EventArgs^ e) {
		math_simvol('%');
	}
};
}
