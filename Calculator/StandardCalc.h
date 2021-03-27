#pragma once
#include <math.h>
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StandardCalc
	/// </summary>
	public ref class StandardCalc : public System::Windows::Forms::Form
	{
	public:
		StandardCalc(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StandardCalc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ numdisplay_txt;
	private: System::Windows::Forms::Button^ modulus_btn;
	private: System::Windows::Forms::Button^ ce_btn;
	private: System::Windows::Forms::Button^ c_btn;
	private: System::Windows::Forms::Button^ back_btn;
	private: System::Windows::Forms::Button^ oneoverx_btn;
	private: System::Windows::Forms::Button^ xsqrd_btn;

	private: System::Windows::Forms::Button^ sqrroot_btn;
	private: System::Windows::Forms::Button^ divide_btn;
	private: System::Windows::Forms::Button^ seven_btn;
	private: System::Windows::Forms::Button^ eight_btn;
	private: System::Windows::Forms::Button^ nine_btn;
	private: System::Windows::Forms::Button^ multiply_btn;
	private: System::Windows::Forms::Button^ four_btn;
	private: System::Windows::Forms::Button^ five_btn;
	private: System::Windows::Forms::Button^ six_btn;
	private: System::Windows::Forms::Button^ subtract_btn;
	private: System::Windows::Forms::Button^ one_btn;
	private: System::Windows::Forms::Button^ two_btn;
	private: System::Windows::Forms::Button^ three_btn;
	private: System::Windows::Forms::Button^ add_btn;
	private: System::Windows::Forms::Button^ pos_neg_btn;
	private: System::Windows::Forms::Button^ zero_btn;
	private: System::Windows::Forms::Button^ decimal_btn;
	private: System::Windows::Forms::Button^ equals_btn;
	private: System::Windows::Forms::Label^ StandardLabel;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StandardCalc::typeid));
			this->numdisplay_txt = (gcnew System::Windows::Forms::TextBox());
			this->modulus_btn = (gcnew System::Windows::Forms::Button());
			this->ce_btn = (gcnew System::Windows::Forms::Button());
			this->c_btn = (gcnew System::Windows::Forms::Button());
			this->back_btn = (gcnew System::Windows::Forms::Button());
			this->oneoverx_btn = (gcnew System::Windows::Forms::Button());
			this->xsqrd_btn = (gcnew System::Windows::Forms::Button());
			this->sqrroot_btn = (gcnew System::Windows::Forms::Button());
			this->divide_btn = (gcnew System::Windows::Forms::Button());
			this->seven_btn = (gcnew System::Windows::Forms::Button());
			this->eight_btn = (gcnew System::Windows::Forms::Button());
			this->nine_btn = (gcnew System::Windows::Forms::Button());
			this->multiply_btn = (gcnew System::Windows::Forms::Button());
			this->four_btn = (gcnew System::Windows::Forms::Button());
			this->five_btn = (gcnew System::Windows::Forms::Button());
			this->six_btn = (gcnew System::Windows::Forms::Button());
			this->subtract_btn = (gcnew System::Windows::Forms::Button());
			this->one_btn = (gcnew System::Windows::Forms::Button());
			this->two_btn = (gcnew System::Windows::Forms::Button());
			this->three_btn = (gcnew System::Windows::Forms::Button());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->pos_neg_btn = (gcnew System::Windows::Forms::Button());
			this->zero_btn = (gcnew System::Windows::Forms::Button());
			this->decimal_btn = (gcnew System::Windows::Forms::Button());
			this->equals_btn = (gcnew System::Windows::Forms::Button());
			this->StandardLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// numdisplay_txt
			// 
			this->numdisplay_txt->BackColor = System::Drawing::SystemColors::Control;
			this->numdisplay_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numdisplay_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numdisplay_txt->Location = System::Drawing::Point(1, 75);
			this->numdisplay_txt->Name = L"numdisplay_txt";
			this->numdisplay_txt->Size = System::Drawing::Size(419, 49);
			this->numdisplay_txt->TabIndex = 0;
			this->numdisplay_txt->Text = L"0";
			this->numdisplay_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// modulus_btn
			// 
			this->modulus_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->modulus_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modulus_btn->Location = System::Drawing::Point(2, 169);
			this->modulus_btn->Name = L"modulus_btn";
			this->modulus_btn->Size = System::Drawing::Size(98, 63);
			this->modulus_btn->TabIndex = 1;
			this->modulus_btn->Text = L"%";
			this->modulus_btn->UseVisualStyleBackColor = false;
			this->modulus_btn->Click += gcnew System::EventHandler(this, &StandardCalc::EnterOperator);
			// 
			// ce_btn
			// 
			this->ce_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->ce_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ce_btn->Location = System::Drawing::Point(106, 169);
			this->ce_btn->Name = L"ce_btn";
			this->ce_btn->Size = System::Drawing::Size(98, 63);
			this->ce_btn->TabIndex = 1;
			this->ce_btn->Text = L"CE";
			this->ce_btn->UseVisualStyleBackColor = false;
			this->ce_btn->Click += gcnew System::EventHandler(this, &StandardCalc::ce_btn_Click);
			// 
			// c_btn
			// 
			this->c_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->c_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->c_btn->Location = System::Drawing::Point(210, 169);
			this->c_btn->Name = L"c_btn";
			this->c_btn->Size = System::Drawing::Size(98, 63);
			this->c_btn->TabIndex = 1;
			this->c_btn->Text = L"C";
			this->c_btn->UseVisualStyleBackColor = false;
			this->c_btn->Click += gcnew System::EventHandler(this, &StandardCalc::c_btn_Click);
			// 
			// back_btn
			// 
			this->back_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->back_btn->Font = (gcnew System::Drawing::Font(L"Wingdings", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->back_btn->Location = System::Drawing::Point(314, 169);
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(98, 63);
			this->back_btn->TabIndex = 1;
			this->back_btn->Text = L"";
			this->back_btn->UseVisualStyleBackColor = false;
			this->back_btn->Click += gcnew System::EventHandler(this, &StandardCalc::back_btn_Click);
			// 
			// oneoverx_btn
			// 
			this->oneoverx_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->oneoverx_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->oneoverx_btn->Location = System::Drawing::Point(2, 238);
			this->oneoverx_btn->Name = L"oneoverx_btn";
			this->oneoverx_btn->Size = System::Drawing::Size(98, 63);
			this->oneoverx_btn->TabIndex = 1;
			this->oneoverx_btn->Text = L"1/x";
			this->oneoverx_btn->UseVisualStyleBackColor = false;
			this->oneoverx_btn->Click += gcnew System::EventHandler(this, &StandardCalc::EnterOperator);
			// 
			// xsqrd_btn
			// 
			this->xsqrd_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->xsqrd_btn->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->xsqrd_btn->Location = System::Drawing::Point(106, 238);
			this->xsqrd_btn->Name = L"xsqrd_btn";
			this->xsqrd_btn->Size = System::Drawing::Size(98, 63);
			this->xsqrd_btn->TabIndex = 1;
			this->xsqrd_btn->Text = L"x^2";
			this->xsqrd_btn->UseVisualStyleBackColor = false;
			this->xsqrd_btn->Click += gcnew System::EventHandler(this, &StandardCalc::EnterOperator);
			// 
			// sqrroot_btn
			// 
			this->sqrroot_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->sqrroot_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sqrroot_btn->Location = System::Drawing::Point(210, 238);
			this->sqrroot_btn->Name = L"sqrroot_btn";
			this->sqrroot_btn->Size = System::Drawing::Size(98, 63);
			this->sqrroot_btn->TabIndex = 1;
			this->sqrroot_btn->Text = L"√";
			this->sqrroot_btn->UseVisualStyleBackColor = false;
			this->sqrroot_btn->Click += gcnew System::EventHandler(this, &StandardCalc::EnterOperator);
			// 
			// divide_btn
			// 
			this->divide_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->divide_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divide_btn->Location = System::Drawing::Point(314, 238);
			this->divide_btn->Name = L"divide_btn";
			this->divide_btn->Size = System::Drawing::Size(98, 63);
			this->divide_btn->TabIndex = 1;
			this->divide_btn->Text = L"÷";
			this->divide_btn->UseVisualStyleBackColor = false;
			this->divide_btn->Click += gcnew System::EventHandler(this, &StandardCalc::EnterOperator);
			// 
			// seven_btn
			// 
			this->seven_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seven_btn->Location = System::Drawing::Point(2, 307);
			this->seven_btn->Name = L"seven_btn";
			this->seven_btn->Size = System::Drawing::Size(98, 63);
			this->seven_btn->TabIndex = 1;
			this->seven_btn->Text = L"7";
			this->seven_btn->UseVisualStyleBackColor = true;
			this->seven_btn->Click += gcnew System::EventHandler(this, &StandardCalc::EnterNumber);
			// 
			// eight_btn
			// 
			this->eight_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eight_btn->Location = System::Drawing::Point(106, 307);
			this->eight_btn->Name = L"eight_btn";
			this->eight_btn->Size = System::Drawing::Size(98, 63);
			this->eight_btn->TabIndex = 1;
			this->eight_btn->Text = L"8";
			this->eight_btn->UseVisualStyleBackColor = true;
			this->eight_btn->Click += gcnew System::EventHandler(this, &StandardCalc::EnterNumber);
			// 
			// nine_btn
			// 
			this->nine_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nine_btn->Location = System::Drawing::Point(210, 307);
			this->nine_btn->Name = L"nine_btn";
			this->nine_btn->Size = System::Drawing::Size(98, 63);
			this->nine_btn->TabIndex = 1;
			this->nine_btn->Text = L"9";
			this->nine_btn->UseVisualStyleBackColor = true;
			this->nine_btn->Click += gcnew System::EventHandler(this, &StandardCalc::EnterNumber);
			// 
			// multiply_btn
			// 
			this->multiply_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->multiply_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiply_btn->Location = System::Drawing::Point(314, 307);
			this->multiply_btn->Name = L"multiply_btn";
			this->multiply_btn->Size = System::Drawing::Size(98, 63);
			this->multiply_btn->TabIndex = 1;
			this->multiply_btn->Text = L"X";
			this->multiply_btn->UseVisualStyleBackColor = false;
			this->multiply_btn->Click += gcnew System::EventHandler(this, &StandardCalc::EnterOperator);
			// 
			// four_btn
			// 
			this->four_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->four_btn->Location = System::Drawing::Point(2, 376);
			this->four_btn->Name = L"four_btn";
			this->four_btn->Size = System::Drawing::Size(98, 63);
			this->four_btn->TabIndex = 1;
			this->four_btn->Text = L"4";
			this->four_btn->UseVisualStyleBackColor = true;
			this->four_btn->Click += gcnew System::EventHandler(this, &StandardCalc::EnterNumber);
			// 
			// five_btn
			// 
			this->five_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->five_btn->Location = System::Drawing::Point(106, 376);
			this->five_btn->Name = L"five_btn";
			this->five_btn->Size = System::Drawing::Size(98, 63);
			this->five_btn->TabIndex = 1;
			this->five_btn->Text = L"5";
			this->five_btn->UseVisualStyleBackColor = true;
			this->five_btn->Click += gcnew System::EventHandler(this, &StandardCalc::EnterNumber);
			// 
			// six_btn
			// 
			this->six_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->six_btn->Location = System::Drawing::Point(210, 376);
			this->six_btn->Name = L"six_btn";
			this->six_btn->Size = System::Drawing::Size(98, 63);
			this->six_btn->TabIndex = 1;
			this->six_btn->Text = L"6";
			this->six_btn->UseVisualStyleBackColor = true;
			this->six_btn->Click += gcnew System::EventHandler(this, &StandardCalc::EnterNumber);
			// 
			// subtract_btn
			// 
			this->subtract_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->subtract_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtract_btn->Location = System::Drawing::Point(314, 376);
			this->subtract_btn->Name = L"subtract_btn";
			this->subtract_btn->Size = System::Drawing::Size(98, 63);
			this->subtract_btn->TabIndex = 1;
			this->subtract_btn->Text = L"-";
			this->subtract_btn->UseVisualStyleBackColor = false;
			this->subtract_btn->Click += gcnew System::EventHandler(this, &StandardCalc::EnterOperator);
			// 
			// one_btn
			// 
			this->one_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->one_btn->Location = System::Drawing::Point(2, 445);
			this->one_btn->Name = L"one_btn";
			this->one_btn->Size = System::Drawing::Size(98, 63);
			this->one_btn->TabIndex = 1;
			this->one_btn->Text = L"1";
			this->one_btn->UseVisualStyleBackColor = true;
			this->one_btn->Click += gcnew System::EventHandler(this, &StandardCalc::EnterNumber);
			// 
			// two_btn
			// 
			this->two_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->two_btn->Location = System::Drawing::Point(106, 445);
			this->two_btn->Name = L"two_btn";
			this->two_btn->Size = System::Drawing::Size(98, 63);
			this->two_btn->TabIndex = 1;
			this->two_btn->Text = L"2";
			this->two_btn->UseVisualStyleBackColor = true;
			this->two_btn->Click += gcnew System::EventHandler(this, &StandardCalc::EnterNumber);
			// 
			// three_btn
			// 
			this->three_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->three_btn->Location = System::Drawing::Point(210, 445);
			this->three_btn->Name = L"three_btn";
			this->three_btn->Size = System::Drawing::Size(98, 63);
			this->three_btn->TabIndex = 1;
			this->three_btn->Text = L"3";
			this->three_btn->UseVisualStyleBackColor = true;
			this->three_btn->Click += gcnew System::EventHandler(this, &StandardCalc::EnterNumber);
			// 
			// add_btn
			// 
			this->add_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->add_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_btn->Location = System::Drawing::Point(314, 445);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(98, 63);
			this->add_btn->TabIndex = 1;
			this->add_btn->Text = L"+";
			this->add_btn->UseVisualStyleBackColor = false;
			this->add_btn->Click += gcnew System::EventHandler(this, &StandardCalc::EnterOperator);
			// 
			// pos_neg_btn
			// 
			this->pos_neg_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pos_neg_btn->Location = System::Drawing::Point(2, 514);
			this->pos_neg_btn->Name = L"pos_neg_btn";
			this->pos_neg_btn->Size = System::Drawing::Size(98, 63);
			this->pos_neg_btn->TabIndex = 1;
			this->pos_neg_btn->Text = L"+/-";
			this->pos_neg_btn->UseVisualStyleBackColor = true;
			this->pos_neg_btn->Click += gcnew System::EventHandler(this, &StandardCalc::pos_neg_btn_Click);
			// 
			// zero_btn
			// 
			this->zero_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zero_btn->Location = System::Drawing::Point(106, 514);
			this->zero_btn->Name = L"zero_btn";
			this->zero_btn->Size = System::Drawing::Size(98, 63);
			this->zero_btn->TabIndex = 1;
			this->zero_btn->Text = L"0";
			this->zero_btn->UseVisualStyleBackColor = true;
			this->zero_btn->Click += gcnew System::EventHandler(this, &StandardCalc::EnterNumber);
			// 
			// decimal_btn
			// 
			this->decimal_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decimal_btn->Location = System::Drawing::Point(210, 514);
			this->decimal_btn->Name = L"decimal_btn";
			this->decimal_btn->Size = System::Drawing::Size(98, 63);
			this->decimal_btn->TabIndex = 1;
			this->decimal_btn->Text = L".";
			this->decimal_btn->UseVisualStyleBackColor = true;
			this->decimal_btn->Click += gcnew System::EventHandler(this, &StandardCalc::decimal_btn_Click);
			// 
			// equals_btn
			// 
			this->equals_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equals_btn->Location = System::Drawing::Point(314, 514);
			this->equals_btn->Name = L"equals_btn";
			this->equals_btn->Size = System::Drawing::Size(98, 63);
			this->equals_btn->TabIndex = 1;
			this->equals_btn->Text = L"=";
			this->equals_btn->UseVisualStyleBackColor = true;
			this->equals_btn->Click += gcnew System::EventHandler(this, &StandardCalc::equals_btn_Click);
			// 
			// StandardLabel
			// 
			this->StandardLabel->AutoSize = true;
			this->StandardLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StandardLabel->Location = System::Drawing::Point(36, 13);
			this->StandardLabel->Name = L"StandardLabel";
			this->StandardLabel->Size = System::Drawing::Size(99, 26);
			this->StandardLabel->TabIndex = 2;
			this->StandardLabel->Text = L"Standard";
			// 
			// StandardCalc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(417, 582);
			this->Controls->Add(this->StandardLabel);
			this->Controls->Add(this->equals_btn);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->subtract_btn);
			this->Controls->Add(this->multiply_btn);
			this->Controls->Add(this->divide_btn);
			this->Controls->Add(this->back_btn);
			this->Controls->Add(this->decimal_btn);
			this->Controls->Add(this->three_btn);
			this->Controls->Add(this->six_btn);
			this->Controls->Add(this->zero_btn);
			this->Controls->Add(this->two_btn);
			this->Controls->Add(this->five_btn);
			this->Controls->Add(this->nine_btn);
			this->Controls->Add(this->pos_neg_btn);
			this->Controls->Add(this->eight_btn);
			this->Controls->Add(this->one_btn);
			this->Controls->Add(this->sqrroot_btn);
			this->Controls->Add(this->four_btn);
			this->Controls->Add(this->xsqrd_btn);
			this->Controls->Add(this->seven_btn);
			this->Controls->Add(this->c_btn);
			this->Controls->Add(this->oneoverx_btn);
			this->Controls->Add(this->ce_btn);
			this->Controls->Add(this->modulus_btn);
			this->Controls->Add(this->numdisplay_txt);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"StandardCalc";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &StandardCalc::StandardCalc_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double first_digit;
		double second_digit;
		double result;

		String^ operators;

	private: System::Void StandardCalc_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);

	if (numdisplay_txt->Text == "0") {
		numdisplay_txt->Text = Numbers->Text;
	}
	else {
		numdisplay_txt->Text += Numbers->Text;
	}
}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumbersOperator = safe_cast<Button^>(sender);
	first_digit = Double::Parse(numdisplay_txt->Text);

	numdisplay_txt->Text = "";
	operators = NumbersOperator->Text;
}
private: System::Void decimal_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	if (!numdisplay_txt->Text->Contains(".")) {
		numdisplay_txt->Text += ".";
	}
}
private: System::Void equals_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (operators == "1/x") {
		result = 1 / first_digit;
		numdisplay_txt->Text = System::Convert::ToString(result);
	}
	else if (operators == "x^2") {
		result = pow(first_digit, 2);
		numdisplay_txt->Text = System::Convert::ToString(result);
	}
	// TODO: Figure out why the conditional statement can't detect the "√" character.  
	/*else if (operators == "√") {
		result = sqrt(first_digit);
		numdisplay_txt->Text = System::Convert::ToString(result);
	}*/
	else {

		second_digit = Double::Parse(numdisplay_txt->Text);

		if (operators == "+") {
			result = first_digit + second_digit;
			numdisplay_txt->Text = System::Convert::ToString(result);
		}
		else if (operators == "-") {
			result = first_digit - second_digit;
			numdisplay_txt->Text = System::Convert::ToString(result);
		}
		else if (operators == "X") {
			result = first_digit * second_digit;
			numdisplay_txt->Text = System::Convert::ToString(result);
		}
		else if (operators == "÷") {
			result = first_digit / second_digit;
			numdisplay_txt->Text = System::Convert::ToString(result);
		}
		else if (operators == "%") {
			int first_digit_f = floor(first_digit);
			int second_digit_f = floor(second_digit);
			result = first_digit_f % second_digit_f;
			numdisplay_txt->Text = System::Convert::ToString(result);
		}
	}
}
private: System::Void c_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	numdisplay_txt->Text = "0";
}
private: System::Void ce_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	numdisplay_txt->Text = "0";
}
private: System::Void pos_neg_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	if (numdisplay_txt->Text->Contains("-")) {
		numdisplay_txt->Text = numdisplay_txt->Text->Remove(0, 1);
	}
	else {
		numdisplay_txt->Text = "-" + numdisplay_txt->Text;
	}
}
private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	if (numdisplay_txt->Text->Length > 0) {
		numdisplay_txt->Text = numdisplay_txt->Text->Remove(numdisplay_txt->Text->Length - 1, 1);
	}
	else if (numdisplay_txt->Text == ""){
		numdisplay_txt->Text = "0";
	}

}
};
}
