#pragma once
#include "DotNetUtilities.h"

#include <fstream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <string>
#include <iostream>
#include "Vec.h"
#include "Addedfunc.h"
#include <math.h>
#include "Mat.h"
#include "vectorOP.h"
#define PI 3.141592653589793238462643383
namespace Matrix_HW {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	Vec *vec=new Vec();
	Addedfunc *addedfunc=new Addedfunc();
	bool no_normal;
	vector<double> sum;
	vector<vector<double>> temps;
	vector<vector<vector<double>>> tempss;
	 vector<double> temp;  //做計算的暫存
	 double tempvalue;
	 bool sumvec=false;
	 bool sumvalue=false;
	 Mat *mat=new Mat();
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::ListBox^  Matrix_listBox;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  OpenVector_button;
	private: System::Windows::Forms::Button^  OpenMatrix_button;
	private: System::Windows::Forms::OpenFileDialog^  openVector_FileDialog;
	private: System::Windows::Forms::OpenFileDialog^  openMatrix_FileDialog;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;





	private: System::Windows::Forms::Label^  total;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  parallel;
	private: System::Windows::Forms::TextBox^  para;
	private: System::Windows::Forms::TextBox^  parb;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::TextBox^  martrix_input;

	private: System::Windows::Forms::Label^  Mat_Label;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::Button^  t_buttom;

	private: System::Windows::Forms::TextBox^  transtbox;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button14;

	private: System::Windows::Forms::TextBox^  Inde_text;

	private: System::Windows::Forms::Label^  Indepen;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::TextBox^  rank_text;

	private: System::Windows::Forms::Label^  Rank;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  adjoint_button;
	private: System::Windows::Forms::Button^  Inverse_buttom;
	private: System::Windows::Forms::Button^  Power_buttom;

	private: System::Windows::Forms::TextBox^  Power_a;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  Eginvalue;
	private: System::Windows::Forms::TextBox^  Liner_x;


	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::TextBox^  Liner_y;

private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Button^  button15;
private: System::Windows::Forms::Button^  button16;
private: System::Windows::Forms::TextBox^  scaleBoxn;

private: System::Windows::Forms::TextBox^  scaleBoxa;

private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Button^  solve_buttom;
private: System::Windows::Forms::TextBox^  solve_b;
private: System::Windows::Forms::TextBox^  solve_a;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Button^  button18;
private: System::Windows::Forms::Button^  button17;
private: System::Windows::Forms::TextBox^  RowReduction;

private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::TextBox^  orthbox;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::ListBox^  answer;
private: System::Windows::Forms::Button^  button19;
private: System::Windows::Forms::Button^  button21;
private: System::Windows::Forms::Button^  button23;
private: System::Windows::Forms::Button^  button22;
private: System::Windows::Forms::Button^  button24;
private: System::Windows::Forms::Button^  button25;
private: System::Windows::Forms::Button^  button26;

private: System::Windows::Forms::Button^  button28;
private: System::Windows::Forms::Button^  button29;














	private: System::ComponentModel::IContainer^  components;
	protected: 

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Matrix_listBox = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->OpenVector_button = (gcnew System::Windows::Forms::Button());
			this->OpenMatrix_button = (gcnew System::Windows::Forms::Button());
			this->openVector_FileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openMatrix_FileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->total = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->parallel = (gcnew System::Windows::Forms::Label());
			this->para = (gcnew System::Windows::Forms::TextBox());
			this->parb = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->answer = (gcnew System::Windows::Forms::ListBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->orthbox = (gcnew System::Windows::Forms::TextBox());
			this->Inde_text = (gcnew System::Windows::Forms::TextBox());
			this->Indepen = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->scaleBoxn = (gcnew System::Windows::Forms::TextBox());
			this->scaleBoxa = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->solve_buttom = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->Power_buttom = (gcnew System::Windows::Forms::Button());
			this->t_buttom = (gcnew System::Windows::Forms::Button());
			this->Eginvalue = (gcnew System::Windows::Forms::Button());
			this->Inverse_buttom = (gcnew System::Windows::Forms::Button());
			this->adjoint_button = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->rank_text = (gcnew System::Windows::Forms::TextBox());
			this->Rank = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->RowReduction = (gcnew System::Windows::Forms::TextBox());
			this->solve_b = (gcnew System::Windows::Forms::TextBox());
			this->Liner_y = (gcnew System::Windows::Forms::TextBox());
			this->solve_a = (gcnew System::Windows::Forms::TextBox());
			this->Liner_x = (gcnew System::Windows::Forms::TextBox());
			this->Power_a = (gcnew System::Windows::Forms::TextBox());
			this->transtbox = (gcnew System::Windows::Forms::TextBox());
			this->martrix_input = (gcnew System::Windows::Forms::TextBox());
			this->Mat_Label = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// Matrix_listBox
			// 
			this->Matrix_listBox->FormattingEnabled = true;
			this->Matrix_listBox->ItemHeight = 24;
			this->Matrix_listBox->Location = System::Drawing::Point(21, 19);
			this->Matrix_listBox->Margin = System::Windows::Forms::Padding(6);
			this->Matrix_listBox->Name = L"Matrix_listBox";
			this->Matrix_listBox->Size = System::Drawing::Size(779, 796);
			this->Matrix_listBox->TabIndex = 0;
			this->Matrix_listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::Matrix_listBox_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->OpenVector_button);
			this->groupBox1->Controls->Add(this->OpenMatrix_button);
			this->groupBox1->Location = System::Drawing::Point(21, 832);
			this->groupBox1->Margin = System::Windows::Forms::Padding(6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(6);
			this->groupBox1->Size = System::Drawing::Size(782, 592);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"OpenFile";
			// 
			// OpenVector_button
			// 
			this->OpenVector_button->Dock = System::Windows::Forms::DockStyle::Top;
			this->OpenVector_button->Location = System::Drawing::Point(6, 121);
			this->OpenVector_button->Margin = System::Windows::Forms::Padding(6);
			this->OpenVector_button->Name = L"OpenVector_button";
			this->OpenVector_button->Size = System::Drawing::Size(770, 86);
			this->OpenVector_button->TabIndex = 8;
			this->OpenVector_button->Text = L"Open_VectorFile";
			this->OpenVector_button->UseVisualStyleBackColor = true;
			this->OpenVector_button->Click += gcnew System::EventHandler(this, &Form1::OpenVector_button_Click);
			// 
			// OpenMatrix_button
			// 
			this->OpenMatrix_button->Dock = System::Windows::Forms::DockStyle::Top;
			this->OpenMatrix_button->Location = System::Drawing::Point(6, 35);
			this->OpenMatrix_button->Margin = System::Windows::Forms::Padding(6);
			this->OpenMatrix_button->Name = L"OpenMatrix_button";
			this->OpenMatrix_button->Size = System::Drawing::Size(770, 86);
			this->OpenMatrix_button->TabIndex = 7;
			this->OpenMatrix_button->Text = L"Open_MatrixFile";
			this->OpenMatrix_button->UseVisualStyleBackColor = true;
			this->OpenMatrix_button->Click += gcnew System::EventHandler(this, &Form1::OpenMatrix_button_Click);
			// 
			// openVector_FileDialog
			// 
			this->openVector_FileDialog->FileName = L"openFileDialog1";
			this->openVector_FileDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openVector_FileDialog_FileOk);
			// 
			// openMatrix_FileDialog
			// 
			this->openMatrix_FileDialog->FileName = L"openFileDialog1";
			this->openMatrix_FileDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openMatrix_FileDialog_FileOk);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(453, 110);
			this->button1->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 45);
			this->button1->TabIndex = 15;
			this->button1->Text = L"caculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(34, 120);
			this->textBox1->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(407, 36);
			this->textBox1->TabIndex = 14;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// total
			// 
			this->total->AutoSize = true;
			this->total->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->total->Location = System::Drawing::Point(36, 43);
			this->total->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->total->Name = L"total";
			this->total->Size = System::Drawing::Size(67, 28);
			this->total->TabIndex = 11;
			this->total->Text = L"Sum";
			this->total->UseMnemonic = false;
			this->total->Click += gcnew System::EventHandler(this, &Form1::total_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(627, 109);
			this->button2->Margin = System::Windows::Forms::Padding(6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 45);
			this->button2->TabIndex = 16;
			this->button2->Text = L"normalize";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(816, 109);
			this->button3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(138, 45);
			this->button3->TabIndex = 17;
			this->button3->Text = L"magnitude";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(34, 250);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 40);
			this->label1->TabIndex = 18;
			this->label1->Text = L"projection";
			this->label1->UseMnemonic = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(229, 253);
			this->textBox2->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(67, 36);
			this->textBox2->TabIndex = 19;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label2->Location = System::Drawing::Point(310, 253);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 40);
			this->label2->TabIndex = 20;
			this->label2->Text = L"onto";
			this->label2->UseMnemonic = false;
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(411, 253);
			this->textBox3->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(67, 36);
			this->textBox3->TabIndex = 21;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(505, 253);
			this->button4->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(156, 45);
			this->button4->TabIndex = 22;
			this->button4->Text = L"caculate";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button5->ForeColor = System::Drawing::Color::Red;
			this->button5->Location = System::Drawing::Point(505, 189);
			this->button5->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(156, 45);
			this->button5->TabIndex = 27;
			this->button5->Text = L"caculate";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(411, 190);
			this->textBox4->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(67, 36);
			this->textBox4->TabIndex = 26;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label3->Location = System::Drawing::Point(310, 190);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 40);
			this->label3->TabIndex = 25;
			this->label3->Text = L"onto";
			this->label3->UseMnemonic = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(229, 190);
			this->textBox5->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(67, 36);
			this->textBox5->TabIndex = 24;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label4->Location = System::Drawing::Point(28, 189);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(200, 40);
			this->label4->TabIndex = 23;
			this->label4->Text = L"component";
			this->label4->UseMnemonic = false;
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// parallel
			// 
			this->parallel->AutoSize = true;
			this->parallel->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->parallel->Location = System::Drawing::Point(34, 317);
			this->parallel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->parallel->Name = L"parallel";
			this->parallel->Size = System::Drawing::Size(144, 40);
			this->parallel->TabIndex = 28;
			this->parallel->Text = L"par/oth";
			this->parallel->UseMnemonic = false;
			// 
			// para
			// 
			this->para->Location = System::Drawing::Point(229, 318);
			this->para->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->para->Name = L"para";
			this->para->Size = System::Drawing::Size(67, 36);
			this->para->TabIndex = 29;
			// 
			// parb
			// 
			this->parb->Location = System::Drawing::Point(411, 318);
			this->parb->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->parb->Name = L"parb";
			this->parb->Size = System::Drawing::Size(67, 36);
			this->parb->TabIndex = 30;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button6->ForeColor = System::Drawing::Color::Red;
			this->button6->Location = System::Drawing::Point(505, 318);
			this->button6->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(156, 45);
			this->button6->TabIndex = 31;
			this->button6->Text = L"caculate";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label5->Location = System::Drawing::Point(34, 382);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 40);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Area of";
			this->label5->UseMnemonic = false;
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(229, 382);
			this->textBox6->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(67, 36);
			this->textBox6->TabIndex = 33;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(411, 382);
			this->textBox7->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(67, 36);
			this->textBox7->TabIndex = 34;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label6->Location = System::Drawing::Point(310, 318);
			this->label6->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 40);
			this->label6->TabIndex = 35;
			this->label6->Text = L"and";
			this->label6->UseMnemonic = false;
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label7->Location = System::Drawing::Point(310, 382);
			this->label7->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 40);
			this->label7->TabIndex = 36;
			this->label7->Text = L"and";
			this->label7->UseMnemonic = false;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button7->ForeColor = System::Drawing::Color::Red;
			this->button7->Location = System::Drawing::Point(505, 382);
			this->button7->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(223, 45);
			this->button7->TabIndex = 37;
			this->button7->Text = L"parallelogram";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button8->ForeColor = System::Drawing::Color::Red;
			this->button8->Location = System::Drawing::Point(736, 382);
			this->button8->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(135, 45);
			this->button8->TabIndex = 38;
			this->button8->Text = L"triangle";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label8->Location = System::Drawing::Point(34, 445);
			this->label8->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(180, 40);
			this->label8->TabIndex = 39;
			this->label8->Text = L"Angle btw";
			this->label8->UseMnemonic = false;
			this->label8->Click += gcnew System::EventHandler(this, &Form1::label8_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(229, 448);
			this->textBox8->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(67, 36);
			this->textBox8->TabIndex = 40;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label9->Location = System::Drawing::Point(310, 448);
			this->label9->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 40);
			this->label9->TabIndex = 41;
			this->label9->Text = L"and";
			this->label9->UseMnemonic = false;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(411, 451);
			this->textBox9->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(67, 36);
			this->textBox9->TabIndex = 42;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_TextChanged);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button9->ForeColor = System::Drawing::Color::Red;
			this->button9->Location = System::Drawing::Point(505, 448);
			this->button9->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(156, 45);
			this->button9->TabIndex = 43;
			this->button9->Text = L"radiance";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button10->ForeColor = System::Drawing::Color::Red;
			this->button10->Location = System::Drawing::Point(691, 451);
			this->button10->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(156, 45);
			this->button10->TabIndex = 44;
			this->button10->Text = L"degree";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button24);
			this->groupBox2->Controls->Add(this->button23);
			this->groupBox2->Controls->Add(this->button22);
			this->groupBox2->Controls->Add(this->button21);
			this->groupBox2->Controls->Add(this->button19);
			this->groupBox2->Controls->Add(this->answer);
			this->groupBox2->Controls->Add(this->button16);
			this->groupBox2->Controls->Add(this->orthbox);
			this->groupBox2->Controls->Add(this->Inde_text);
			this->groupBox2->Controls->Add(this->Indepen);
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->scaleBoxn);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->scaleBoxa);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->parb);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->para);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->parallel);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->total);
			this->groupBox2->Location = System::Drawing::Point(814, 19);
			this->groupBox2->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->groupBox2->Size = System::Drawing::Size(2620, 798);
			this->groupBox2->TabIndex = 45;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Vector";
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button24->ForeColor = System::Drawing::Color::Red;
			this->button24->Location = System::Drawing::Point(850, 241);
			this->button24->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(146, 45);
			this->button24->TabIndex = 54;
			this->button24->Text = L"scale";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button23->ForeColor = System::Drawing::Color::Red;
			this->button23->Location = System::Drawing::Point(925, 190);
			this->button23->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(71, 45);
			this->button23->TabIndex = 53;
			this->button23->Text = L"x";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button22->ForeColor = System::Drawing::Color::Red;
			this->button22->Location = System::Drawing::Point(844, 189);
			this->button22->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(71, 45);
			this->button22->TabIndex = 52;
			this->button22->Text = L"*";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button21->ForeColor = System::Drawing::Color::Red;
			this->button21->Location = System::Drawing::Point(763, 190);
			this->button21->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(71, 45);
			this->button21->TabIndex = 51;
			this->button21->Text = L"-";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button19->ForeColor = System::Drawing::Color::Red;
			this->button19->Location = System::Drawing::Point(682, 189);
			this->button19->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(71, 45);
			this->button19->TabIndex = 50;
			this->button19->Text = L"+";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// answer
			// 
			this->answer->FormattingEnabled = true;
			this->answer->HorizontalScrollbar = true;
			this->answer->ItemHeight = 24;
			this->answer->Location = System::Drawing::Point(1009, 24);
			this->answer->Margin = System::Windows::Forms::Padding(5);
			this->answer->Name = L"answer";
			this->answer->Size = System::Drawing::Size(1164, 772);
			this->answer->TabIndex = 49;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button16->ForeColor = System::Drawing::Color::Red;
			this->button16->Location = System::Drawing::Point(697, 635);
			this->button16->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(156, 48);
			this->button16->TabIndex = 15;
			this->button16->Text = L"caculate";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::orth_Click);
			// 
			// orthbox
			// 
			this->orthbox->Location = System::Drawing::Point(411, 645);
			this->orthbox->Margin = System::Windows::Forms::Padding(6);
			this->orthbox->Name = L"orthbox";
			this->orthbox->Size = System::Drawing::Size(264, 36);
			this->orthbox->TabIndex = 48;
			// 
			// Inde_text
			// 
			this->Inde_text->Location = System::Drawing::Point(229, 510);
			this->Inde_text->Margin = System::Windows::Forms::Padding(6);
			this->Inde_text->Name = L"Inde_text";
			this->Inde_text->Size = System::Drawing::Size(316, 36);
			this->Inde_text->TabIndex = 48;
			// 
			// Indepen
			// 
			this->Indepen->AutoSize = true;
			this->Indepen->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->Indepen->Location = System::Drawing::Point(34, 520);
			this->Indepen->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Indepen->Name = L"Indepen";
			this->Indepen->Size = System::Drawing::Size(147, 40);
			this->Indepen->TabIndex = 47;
			this->Indepen->Text = L"Indepen";
			this->Indepen->UseMnemonic = false;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button12->ForeColor = System::Drawing::Color::Red;
			this->button12->Location = System::Drawing::Point(572, 502);
			this->button12->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(156, 45);
			this->button12->TabIndex = 44;
			this->button12->Text = L"check";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// scaleBoxn
			// 
			this->scaleBoxn->Location = System::Drawing::Point(263, 709);
			this->scaleBoxn->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->scaleBoxn->Name = L"scaleBoxn";
			this->scaleBoxn->Size = System::Drawing::Size(56, 36);
			this->scaleBoxn->TabIndex = 14;
			// 
			// scaleBoxa
			// 
			this->scaleBoxa->Location = System::Drawing::Point(164, 709);
			this->scaleBoxa->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->scaleBoxa->Name = L"scaleBoxa";
			this->scaleBoxa->Size = System::Drawing::Size(56, 36);
			this->scaleBoxa->TabIndex = 14;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label19->Location = System::Drawing::Point(332, 704);
			this->label19->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(29, 40);
			this->label19->TabIndex = 39;
			this->label19->Text = L")";
			this->label19->UseMnemonic = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label18->Location = System::Drawing::Point(229, 704);
			this->label18->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(25, 40);
			this->label18->TabIndex = 39;
			this->label18->Text = L",";
			this->label18->UseMnemonic = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label24->Location = System::Drawing::Point(28, 640);
			this->label24->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(354, 40);
			this->label24->TabIndex = 39;
			this->label24->Text = L"orthonormal basis of";
			this->label24->UseMnemonic = false;
			this->label24->Click += gcnew System::EventHandler(this, &Form1::label8_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label17->Location = System::Drawing::Point(32, 706);
			this->label17->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(132, 40);
			this->label17->TabIndex = 39;
			this->label17->Text = L"Sacle (";
			this->label17->UseMnemonic = false;
			this->label17->Click += gcnew System::EventHandler(this, &Form1::label8_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button11->ForeColor = System::Drawing::Color::Red;
			this->button11->Location = System::Drawing::Point(369, 571);
			this->button11->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(156, 45);
			this->button11->TabIndex = 27;
			this->button11->Text = L"caculate";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(150, 581);
			this->textBox10->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(207, 36);
			this->textBox10->TabIndex = 24;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label10->Location = System::Drawing::Point(31, 579);
			this->label10->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(106, 40);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Norm";
			this->label10->UseMnemonic = false;
			this->label10->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button14->ForeColor = System::Drawing::Color::RoyalBlue;
			this->button14->Location = System::Drawing::Point(626, 61);
			this->button14->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(214, 45);
			this->button14->TabIndex = 15;
			this->button14->Text = L"Determinant";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button25);
			this->groupBox3->Controls->Add(this->button26);
			this->groupBox3->Controls->Add(this->button18);
			this->groupBox3->Controls->Add(this->button17);
			this->groupBox3->Controls->Add(this->button28);
			this->groupBox3->Controls->Add(this->solve_buttom);
			this->groupBox3->Controls->Add(this->button29);
			this->groupBox3->Controls->Add(this->button15);
			this->groupBox3->Controls->Add(this->Power_buttom);
			this->groupBox3->Controls->Add(this->t_buttom);
			this->groupBox3->Controls->Add(this->Eginvalue);
			this->groupBox3->Controls->Add(this->Inverse_buttom);
			this->groupBox3->Controls->Add(this->adjoint_button);
			this->groupBox3->Controls->Add(this->button14);
			this->groupBox3->Controls->Add(this->button13);
			this->groupBox3->Controls->Add(this->rank_text);
			this->groupBox3->Controls->Add(this->Rank);
			this->groupBox3->Controls->Add(this->button20);
			this->groupBox3->Controls->Add(this->RowReduction);
			this->groupBox3->Controls->Add(this->solve_b);
			this->groupBox3->Controls->Add(this->Liner_y);
			this->groupBox3->Controls->Add(this->solve_a);
			this->groupBox3->Controls->Add(this->Liner_x);
			this->groupBox3->Controls->Add(this->Power_a);
			this->groupBox3->Controls->Add(this->transtbox);
			this->groupBox3->Controls->Add(this->martrix_input);
			this->groupBox3->Controls->Add(this->Mat_Label);
			this->groupBox3->Controls->Add(this->label22);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label23);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Location = System::Drawing::Point(814, 832);
			this->groupBox3->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->groupBox3->Size = System::Drawing::Size(1388, 592);
			this->groupBox3->TabIndex = 46;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"matrix";
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button25->ForeColor = System::Drawing::Color::Red;
			this->button25->Location = System::Drawing::Point(997, 228);
			this->button25->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(146, 45);
			this->button25->TabIndex = 59;
			this->button25->Text = L"scale";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button26->ForeColor = System::Drawing::Color::Red;
			this->button26->Location = System::Drawing::Point(997, 177);
			this->button26->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(71, 45);
			this->button26->TabIndex = 58;
			this->button26->Text = L"x";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Form1::button26_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button18->ForeColor = System::Drawing::Color::Red;
			this->button18->Location = System::Drawing::Point(509, 448);
			this->button18->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(117, 48);
			this->button18->TabIndex = 15;
			this->button18->Text = L"lower";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::lower_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button17->ForeColor = System::Drawing::Color::Red;
			this->button17->Location = System::Drawing::Point(369, 451);
			this->button17->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(130, 48);
			this->button17->TabIndex = 15;
			this->button17->Text = L"Upper";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::upper_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button28->ForeColor = System::Drawing::Color::Red;
			this->button28->Location = System::Drawing::Point(910, 177);
			this->button28->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(71, 45);
			this->button28->TabIndex = 56;
			this->button28->Text = L"-";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Form1::button28_Click);
			// 
			// solve_buttom
			// 
			this->solve_buttom->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->solve_buttom->ForeColor = System::Drawing::Color::Red;
			this->solve_buttom->Location = System::Drawing::Point(470, 378);
			this->solve_buttom->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->solve_buttom->Name = L"solve_buttom";
			this->solve_buttom->Size = System::Drawing::Size(156, 48);
			this->solve_buttom->TabIndex = 15;
			this->solve_buttom->Text = L"caculate";
			this->solve_buttom->UseVisualStyleBackColor = true;
			this->solve_buttom->Click += gcnew System::EventHandler(this, &Form1::Solve_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button29->ForeColor = System::Drawing::Color::Red;
			this->button29->Location = System::Drawing::Point(829, 176);
			this->button29->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(71, 45);
			this->button29->TabIndex = 55;
			this->button29->Text = L"+";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Form1::button29_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button15->ForeColor = System::Drawing::Color::Red;
			this->button15->Location = System::Drawing::Point(488, 312);
			this->button15->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(156, 48);
			this->button15->TabIndex = 15;
			this->button15->Text = L"caculate";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::Liner_Click);
			// 
			// Power_buttom
			// 
			this->Power_buttom->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->Power_buttom->ForeColor = System::Drawing::Color::Red;
			this->Power_buttom->Location = System::Drawing::Point(491, 250);
			this->Power_buttom->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->Power_buttom->Name = L"Power_buttom";
			this->Power_buttom->Size = System::Drawing::Size(156, 48);
			this->Power_buttom->TabIndex = 15;
			this->Power_buttom->Text = L"caculate";
			this->Power_buttom->UseVisualStyleBackColor = true;
			this->Power_buttom->Click += gcnew System::EventHandler(this, &Form1::Power_Click);
			// 
			// t_buttom
			// 
			this->t_buttom->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->t_buttom->ForeColor = System::Drawing::Color::Red;
			this->t_buttom->Location = System::Drawing::Point(488, 186);
			this->t_buttom->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->t_buttom->Name = L"t_buttom";
			this->t_buttom->Size = System::Drawing::Size(156, 48);
			this->t_buttom->TabIndex = 15;
			this->t_buttom->Text = L"caculate";
			this->t_buttom->UseVisualStyleBackColor = true;
			this->t_buttom->Click += gcnew System::EventHandler(this, &Form1::transposbuttom_Click);
			// 
			// Eginvalue
			// 
			this->Eginvalue->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->Eginvalue->ForeColor = System::Drawing::Color::DarkBlue;
			this->Eginvalue->Location = System::Drawing::Point(1162, 61);
			this->Eginvalue->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->Eginvalue->Name = L"Eginvalue";
			this->Eginvalue->Size = System::Drawing::Size(205, 45);
			this->Eginvalue->TabIndex = 15;
			this->Eginvalue->Text = L"Eigen Value";
			this->Eginvalue->UseVisualStyleBackColor = true;
			this->Eginvalue->Click += gcnew System::EventHandler(this, &Form1::Eigenvalue_Click);
			// 
			// Inverse_buttom
			// 
			this->Inverse_buttom->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->Inverse_buttom->ForeColor = System::Drawing::Color::DarkBlue;
			this->Inverse_buttom->Location = System::Drawing::Point(1009, 61);
			this->Inverse_buttom->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->Inverse_buttom->Name = L"Inverse_buttom";
			this->Inverse_buttom->Size = System::Drawing::Size(150, 45);
			this->Inverse_buttom->TabIndex = 15;
			this->Inverse_buttom->Text = L"Inverse";
			this->Inverse_buttom->UseVisualStyleBackColor = true;
			this->Inverse_buttom->Click += gcnew System::EventHandler(this, &Form1::Inverse_Click);
			// 
			// adjoint_button
			// 
			this->adjoint_button->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->adjoint_button->ForeColor = System::Drawing::Color::Blue;
			this->adjoint_button->Location = System::Drawing::Point(850, 61);
			this->adjoint_button->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->adjoint_button->Name = L"adjoint_button";
			this->adjoint_button->Size = System::Drawing::Size(150, 45);
			this->adjoint_button->TabIndex = 15;
			this->adjoint_button->Text = L"Adjoint";
			this->adjoint_button->UseVisualStyleBackColor = true;
			this->adjoint_button->Click += gcnew System::EventHandler(this, &Form1::adjoint_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button13->ForeColor = System::Drawing::Color::Red;
			this->button13->Location = System::Drawing::Point(460, 118);
			this->button13->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(156, 45);
			this->button13->TabIndex = 47;
			this->button13->Text = L"caculate";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// rank_text
			// 
			this->rank_text->Location = System::Drawing::Point(140, 126);
			this->rank_text->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->rank_text->Name = L"rank_text";
			this->rank_text->Size = System::Drawing::Size(288, 36);
			this->rank_text->TabIndex = 47;
			// 
			// Rank
			// 
			this->Rank->AutoSize = true;
			this->Rank->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->Rank->Location = System::Drawing::Point(24, 126);
			this->Rank->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Rank->Name = L"Rank";
			this->Rank->Size = System::Drawing::Size(99, 40);
			this->Rank->TabIndex = 47;
			this->Rank->Text = L"Rank";
			this->Rank->UseMnemonic = false;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button20->ForeColor = System::Drawing::Color::Red;
			this->button20->Location = System::Drawing::Point(460, 61);
			this->button20->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(156, 45);
			this->button20->TabIndex = 15;
			this->button20->Text = L"caculate";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// RowReduction
			// 
			this->RowReduction->Location = System::Drawing::Point(301, 461);
			this->RowReduction->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->RowReduction->Name = L"RowReduction";
			this->RowReduction->Size = System::Drawing::Size(56, 36);
			this->RowReduction->TabIndex = 14;
			// 
			// solve_b
			// 
			this->solve_b->Location = System::Drawing::Point(359, 390);
			this->solve_b->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->solve_b->Name = L"solve_b";
			this->solve_b->Size = System::Drawing::Size(56, 36);
			this->solve_b->TabIndex = 14;
			// 
			// Liner_y
			// 
			this->Liner_y->Location = System::Drawing::Point(385, 320);
			this->Liner_y->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->Liner_y->Name = L"Liner_y";
			this->Liner_y->Size = System::Drawing::Size(56, 36);
			this->Liner_y->TabIndex = 14;
			// 
			// solve_a
			// 
			this->solve_a->Location = System::Drawing::Point(263, 390);
			this->solve_a->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->solve_a->Name = L"solve_a";
			this->solve_a->Size = System::Drawing::Size(56, 36);
			this->solve_a->TabIndex = 14;
			// 
			// Liner_x
			// 
			this->Liner_x->Location = System::Drawing::Point(292, 320);
			this->Liner_x->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->Liner_x->Name = L"Liner_x";
			this->Liner_x->Size = System::Drawing::Size(56, 36);
			this->Liner_x->TabIndex = 14;
			// 
			// Power_a
			// 
			this->Power_a->Location = System::Drawing::Point(301, 259);
			this->Power_a->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->Power_a->Name = L"Power_a";
			this->Power_a->Size = System::Drawing::Size(157, 36);
			this->Power_a->TabIndex = 14;
			// 
			// transtbox
			// 
			this->transtbox->Location = System::Drawing::Point(229, 194);
			this->transtbox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->transtbox->Name = L"transtbox";
			this->transtbox->Size = System::Drawing::Size(246, 36);
			this->transtbox->TabIndex = 14;
			// 
			// martrix_input
			// 
			this->martrix_input->Location = System::Drawing::Point(34, 61);
			this->martrix_input->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->martrix_input->Name = L"martrix_input";
			this->martrix_input->Size = System::Drawing::Size(407, 36);
			this->martrix_input->TabIndex = 14;
			// 
			// Mat_Label
			// 
			this->Mat_Label->AutoSize = true;
			this->Mat_Label->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10.2F, System::Drawing::FontStyle::Bold));
			this->Mat_Label->Location = System::Drawing::Point(686, 136);
			this->Mat_Label->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Mat_Label->Name = L"Mat_Label";
			this->Mat_Label->Size = System::Drawing::Size(91, 28);
			this->Mat_Label->TabIndex = 11;
			this->Mat_Label->Text = L"Matrix";
			this->Mat_Label->UseMnemonic = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label22->Location = System::Drawing::Point(427, 386);
			this->label22->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(29, 40);
			this->label22->TabIndex = 39;
			this->label22->Text = L")";
			this->label22->UseMnemonic = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label16->Location = System::Drawing::Point(445, 320);
			this->label16->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(29, 40);
			this->label16->TabIndex = 39;
			this->label16->Text = L")";
			this->label16->UseMnemonic = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label21->Location = System::Drawing::Point(332, 390);
			this->label21->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(25, 40);
			this->label21->TabIndex = 39;
			this->label21->Text = L",";
			this->label21->UseMnemonic = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label15->Location = System::Drawing::Point(351, 318);
			this->label15->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(25, 40);
			this->label15->TabIndex = 39;
			this->label15->Text = L",";
			this->label15->UseMnemonic = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label20->Location = System::Drawing::Point(24, 390);
			this->label20->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(228, 40);
			this->label20->TabIndex = 39;
			this->label20->Text = L"Solve Liner (";
			this->label20->UseMnemonic = false;
			this->label20->Click += gcnew System::EventHandler(this, &Form1::label8_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label14->Location = System::Drawing::Point(24, 320);
			this->label14->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(263, 40);
			this->label14->TabIndex = 39;
			this->label14->Text = L"Least Square (";
			this->label14->UseMnemonic = false;
			this->label14->Click += gcnew System::EventHandler(this, &Form1::label8_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label12->Location = System::Drawing::Point(28, 258);
			this->label12->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(258, 40);
			this->label12->TabIndex = 39;
			this->label12->Text = L"Power Method";
			this->label12->UseMnemonic = false;
			this->label12->Click += gcnew System::EventHandler(this, &Form1::label8_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label23->Location = System::Drawing::Point(28, 456);
			this->label23->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(267, 40);
			this->label23->TabIndex = 39;
			this->label23->Text = L"Row Reduction";
			this->label23->UseMnemonic = false;
			this->label23->Click += gcnew System::EventHandler(this, &Form1::label8_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label11->Location = System::Drawing::Point(28, 194);
			this->label11->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(190, 40);
			this->label11->TabIndex = 39;
			this->label11->Text = L"Transpose";
			this->label11->UseMnemonic = false;
			this->label11->Click += gcnew System::EventHandler(this, &Form1::label8_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2858, 1522);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Matrix_listBox);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
		System::String^ std_to_System_string(string s)
		{
			String^ MyString = gcnew String((s).c_str());
			return MyString;
		}
		string SYS_str_to_std ( String ^ s ) {
			using namespace Runtime::InteropServices;
			const char* chars = 
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			string os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
			return os;
		}

		void ans_add(String ^s){
			s+="\n";
			answer->Items->Clear();
			String ^new_s="";
			for(int i=0;i<s->Length;i++)
			{
				if(s[i]!='\n')
					new_s+=s[i];
				else
				{
					answer->Items->Add(new_s);
					new_s="";
				}
			}




		}

		

#pragma endregion
	private: System::Void openVector_FileDialog_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
				 Matrix_listBox->Items->Clear();

				 temp.clear();
				 vec=new Vec();
				 //將FileDialog的字串讀進來，並轉換成std::string

				 std::string filename;
				 MarshalString( openVector_FileDialog->FileName, filename );

				 //std 函式庫讀檔的宣告 
				 std::fstream  o_file ; 
				 //打開filename string 所在位置的檔案
				 o_file.open( filename , std::ios::in ) ; 
				 //用char去讀第一個字元來判斷輸入是否為一個vector
				 int index=97;
				 if(o_file!=NULL)
				 {
					 int vecNUM=100;
					 int i=0;
				
					 char a ;
					 o_file >> a ;
					 vecc = new vector<double> [vecNUM];
				 while(o_file!=NULL)
				 {

					 
					 
					 // v的ASCII碼為86所以直接用 是否等於86，也可以用別的寫法
					 if(  a == 86 )  //ASCII number
					 {
						 //ListBox裡面寫字串的函式，MSDN查的到
						 Matrix_listBox->Items->Add("Vector :"+System::Convert::ToChar(index++)); 

						 int d;

						 //將Vector的維度讀取進來
						 o_file>>d ;
						 Matrix_listBox->Items->Add("Dimension="+d);

						 //開始讀取Vector的值
						 String ^s ;
						  vector<double> tmpvec;
						 for( int k=0 ; k<d ; k++)
						 {
							 double val ;//用int去讀取vector的值...之後或許會有小數點的值，請改用float
							 o_file>>val;
							 s+=val;   //System string 有幫我們實作operator，因此我們可以很快樂的在此用字串合併，以便輸出至之後的listBox
							 if(k!=d-1)
								 s+=",";   //加逗號
							 temp.push_back(val);//將txt 單一向量讀入temp
							 tmpvec.push_back(val);
						 }

						 Matrix_listBox->Items->Add("("+s+")");

						 //這是分隔線
						 Matrix_listBox->Items->Add("-------------------------------------");
						 s ="";
						 vec->push(temp);//將向量存入Vec
						  vecc[i++] = tmpvec;

						 temp.clear();

					 }
					 o_file >> a ;
				 }
				 }
				
			 }
private: System::Void OpenVector_button_Click(System::Object^  sender, System::EventArgs^  e) {
			    openVector_FileDialog->ShowDialog( );
		    }
private: System::Void openMatrix_FileDialog_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 mat=new Mat();
			 Matrix_listBox->Items->Clear();
			 std::string filename;
			 MarshalString( openMatrix_FileDialog->FileName, filename );
			 vector<vector<double>> r;  //row
			 vector<double> c;  //column
			 std::fstream  o_file ; 

			 o_file.open( filename , std::ios::in ) ; 
			 char index='a';
			 if(o_file!=NULL)
			 {
				 char a ;
				 o_file >> a ;
				 while(o_file!=NULL)
				 {
					
					 if(  a == 77 )  //ASCII number
					 {
						 Matrix_listBox->Items->Add("Matrix : "+System::Convert::ToChar(index++));
						 int d1,  d2;
						 o_file>>d1 ;
						 o_file>>d2 ;
						 Matrix_listBox->Items->Add( "Dimension="+ d1 + "x"+ d2 );

						 for( int k1=0 ; k1<d1; k1++)
						 {
							 String ^s ;
							 for( int k2=0 ; k2<d2; k2++)
							 {
								 double val ;
								 o_file>>val;
								 s+=val;
								 s+=" ";   
								 c.push_back(val);
							 }					 
							 Matrix_listBox->Items->Add( s )  ; 
							 s = s->Remove(0) ;
							 r.push_back(c);
							 c.clear();
						 }
						 mat->M.push_back(r);
						 Matrix_listBox->Items->Add("-------------------------------------");
						  r.clear();
					 }	
					  o_file >> a ;
					 
					  
				 }	
			 }
			 
		 }
private: System::Void OpenMatrix_button_Click(System::Object^  sender, System::EventArgs^  e) {
			   openMatrix_FileDialog->ShowDialog();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 std::string VExpression;
			 MarshalString( textBox1->Text, VExpression );
			 
			 //根據輸入的運算式轉成後序式運算
			 //參考資料如下
			 //中轉後http://openhome.cc/Gossip/AlgorithmGossip/InFixPostfix.htm
			 //後序式運算http://openhome.cc/Gossip/AlgorithmGossip/PostfixCal.htm
			 std::string PostVExpression;
			 PostVExpression = inToPostfix(addedfunc->clearallstupidinput(VExpression));

			 //利用後序式作向量運算
			 vector<double> OpVec = eval(PostVExpression);
			 String ^s = gcnew String("");
			 for(int i=0;i<OpVec.size();i++)
			 {
				 s+=OpVec[i];   
				 s+=" ";   
			 }
			 string sa=SYS_str_to_std(textBox1->Text); // 讀取Textbox的string
				temp.clear();
				temps.clear();
				 char sc[80]; //字元陣列
				 int c=0;  //第幾的字元
				 double x;  //係數k
				 bool minus=false; //負號  
				 strcpy(sc,sa.c_str()); //字串轉到字元陣列
				 strcpy(sc,(addedfunc->clearallstupidinput(sc)).c_str()); // right! that is clear all stupid input
				 char op='o';  //operation
				 bool dot=false;
				  bool cro=false;
				 bool error_detect=false;
				 
				 /*
				 char cnow;  //a+b 的a
				 /////////////http://1drv.ms/1n7J8BZ
				 bool zero=false;
				 do 
				 {
					 minus=false;
					 //////判斷負號
					 if (sc[c]=='-')
					 {
						 minus=true;
						 c++;
					 }
					 ///////////////////////讀係數
					 x=0;
					 zero=false;
					 while(sc[c]>='0' &&  sc[c]<='9')
					 {
						 if (sc[c]==0)
						 {
							 zero=true;
						 }
						 else
						 {

						 }
						 x=x*10+sc[c]-'0';
						 c++;
					 }
					 if(x==0)
						 x++;
					 //////////////////////////
					 //do 
					 //{
						 
					 //} while (!(sc[c]!='+' || sc[c]!='\0'));
					 cnow=sc[c++];  ///////存 英文代號 :5a+2b的a或b

					 //////////執行運算
						 switch(op)
						 {
							case 'o': //抓第一個vector
									temp=vec->pop(x,cnow); 
									temps.push_back(temp);
									break;
							case '+':  //add
									temp=vec->add(x,cnow,temp);
									break;
							case '-':  //decrease
									temp=vec->dec(x,cnow,temp);
									break;
							case '*': //dot
									dot=true;
									temp=vec->pop(x,cnow);
									if(temps[0].size()==temp.size())
										temps.push_back(temp);
									else
									{
										total->Text=std_to_System_string("Illegal operation!");
										return;
									}
									break;
							case 'x':// 記得要宣告 cro 變數喔  俊豪這裡是外積呼叫  加上去吧
								   cro = true;
								   temp = vec->cross(x,cnow,temp);
								   break;
							
						 }
					 ////////////

					 if(sc[c]!='\0') //紀錄下個運算式
						 op=sc[c++];


				 } while (!(sc[c]=='\0'));
				 
				 if(dot)
				 {
					 total->Text=""+vec->dot(temps);
					 return;
				 }
				 if(temp.empty())
				 {
					 no_normal=true;
					 total->Text=std_to_System_string("Illegal operation!");
				 }
				 else*/
				 {
					 
					 //total->Text=std_to_System_string(vec->print_out(temp));
					 temp.clear();
					 temp=OpVec;
					 //ans_add(std_to_System_string(addedfunc->clearallstupidinput(VExpression)));
					 //ans_add(std_to_System_string(PostVExpression));
					 ans_add(s);
					
				 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 //button1_Click(sender,e);
			////normalize
			 ans_add(std_to_System_string(vec->print_out((vec->normal(temp)))));
			 temp=vec->normal(temp);
			 

		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Matrix_listBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 button1_Click(sender,e);
			ans_add(std_to_System_string(vec->print_out((vec->magnitude(temp)))));
		 }
private: System::Void total_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {// projection a onto b

			 string sa=SYS_str_to_std(textBox2->Text); // 讀取Textbox的string
			 string sb=SYS_str_to_std(textBox3->Text);// 讀取Textbox的string
			 vector<double> tempa,tempb,ans;
			 double magb,compans;
			 char ca,cb;
			 if(sa=="")
			 {
				 cb=sb.at(0);// 讀取Textbox的char
				 tempb=vec->pop(1,cb); 
				 ans=vec->projection(temp,tempb,' ',cb);
			 }
			 else
			 {
				ca=sa.at(0);// 讀取Textbox的char
				cb=sb.at(0);// 讀取Textbox的char
			 
				
				 char sc[40]; //字元陣列
				
				tempa=vec->pop(1,ca); 
				temps.push_back(tempa);
				tempb=vec->pop(1,cb); 
				
				ans=vec->projection(tempa,tempb,ca,cb);
				
		   		
			 }
			 temp.clear();
			temps.clear();
			temp=ans;
			ans_add(std_to_System_string(vec->print_out(ans)));
				
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			
			  string sa=SYS_str_to_std(textBox5->Text); // 讀取Textbox的string
			 string sb=SYS_str_to_std(textBox4->Text);// 讀取Textbox的string
			 double magb,ans;
			 char ca;
			 char cb;
			 if(sa=="")
			 {
				  cb=sb.at(0);// 讀取Textbox的char
				vector<double> tempa,tempb;
				tempb=vec->pop(1,cb); 
				 ans=vec->component(temp,tempb,' ',cb);
			 }
			 else
			 {
			 ca=sa.at(0);// 讀取Textbox的char
			 cb=sb.at(0);// 讀取Textbox的char
			 vector<double> tempa,tempb;
				
				 char sc[40]; //字元陣列
				
				tempa=vec->pop(1,ca); 
				temps.push_back(tempa);
				tempb=vec->pop(1,cb); 
				
				ans=vec->component(tempa,tempb,ca,cb);
				
				
		   		//total->Text=""+ans;*/
			 }
			 temp.clear();
			 temps.clear();
			 temp.push_back(ans);
			 ans_add(""+ans);
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 char a =  SYS_str_to_std(para->Text)[0];
			 char b =   SYS_str_to_std(parb->Text)[0];
			 vector<double> tempa = vec->pop(1,a);
			 vector<double> tempb = vec->pop(1,b);
			 if(vec->parall(tempa,tempb))
				ans_add("Paraell");
			 else if(vec->orthogonal(tempa,tempb))
				ans_add("Orthogoal");
			 else
				ans_add("Banana");
			 
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 char a,b;
			 vector<double> tempa,tempb;
			 if(SYS_str_to_std(textBox6->Text)=="")
			 {
				  b =   SYS_str_to_std(textBox7->Text)[0];
				  tempb = vec->pop(1,b);
				  ans_add(""+(vec->area_of_parallelogram(temp,tempb,' ',b)));
				  temp.clear();
				  temp.push_back(vec->area_of_parallelogram(temp,tempb,' ',b));
			 }
			  else
			{
				a =  SYS_str_to_std(textBox6->Text)[0];
			 b =   SYS_str_to_std(textBox7->Text)[0];
			 tempa = vec->pop(1,a);
			 tempb = vec->pop(1,b);
			 ans_add(""+(vec->area_of_parallelogram(tempa,tempb,a,b)));
			 temp.clear();
				  temp.push_back(vec->area_of_parallelogram(tempa,tempb,a,b));
			 }
			

		 }
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 char a,b;
			 vector<double> tempa,tempb;
			 if(SYS_str_to_std(textBox6->Text)=="")
			 {
				 b =   SYS_str_to_std(textBox7->Text)[0];
				 tempb = vec->pop(1,b);
				 ans_add(""+(vec->area_of_triangle(temp,tempb,' ',b)));
				 temp.clear();
				 temp.push_back(vec->area_of_triangle(temp,tempb,' ',b));
			 }
			 else
			 {
			 a =  SYS_str_to_std(textBox6->Text)[0];
			 b =   SYS_str_to_std(textBox7->Text)[0];
				tempa = vec->pop(1,a);
			 tempb = vec->pop(1,b);
			ans_add(""+(vec->area_of_triangle(tempa,tempb,a,b)));
			temp.clear();
				temp.push_back(vec->area_of_triangle(tempa,tempb,a,b));
			 }
		 }
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 char a,b;
			 vector<double> tempa,tempb;
			 if(SYS_str_to_std(textBox8->Text)=="")
			 {
				  b =   SYS_str_to_std(textBox9->Text)[0];
				  tempb = vec->pop(1,b);
				  ans_add(""+(vec->angle(temp,tempb,' ',b)));
				  temp.clear();
				  temp.push_back(vec->angle(temp,tempb,' ',b));
			 }
			 else
			 {
			 a =  SYS_str_to_std(textBox8->Text)[0];
			 b =   SYS_str_to_std(textBox9->Text)[0];
			 tempa = vec->pop(1,a);
			 tempb = vec->pop(1,b);
			ans_add(""+(vec->angle(tempa,tempb,a,b)));
			temp.clear();
				  temp.push_back(vec->angle(tempa,tempb,a,b));
			 }
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			char a,b;
			 vector<double> tempa,tempb;
			 if(SYS_str_to_std(textBox8->Text)=="")
			 {
				  b =   SYS_str_to_std(textBox9->Text)[0];
				  tempb = vec->pop(1,b);
				  ans_add(""+(vec->angle(temp,tempb,' ',b))*180/PI);
				  temp.clear();
				  temp.push_back(vec->angle(temp,tempb,' ',b)*180/PI);
			 }
			 else
			 {
			 a =  SYS_str_to_std(textBox8->Text)[0];
			 b =   SYS_str_to_std(textBox9->Text)[0];
			 tempa = vec->pop(1,a);
			 tempb = vec->pop(1,b);
			ans_add(""+(vec->angle(tempa,tempb,a,b))*180/PI);
			temp.clear();
				  temp.push_back(vec->angle(tempa,tempb,a,b)*180/PI);
			 }
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			  string sa=SYS_str_to_std(martrix_input->Text); // 讀取Textbox的string
				temp.clear();
				temps.clear();
				tempss.clear();
				 char sc[40]; //字元陣列
				 int c=0;  //第幾的字元
				 double x;  //係數k
				 bool minus=false; //負號  
				 strcpy(sc,sa.c_str()); //字串轉到字元陣列
				 strcpy(sc,(addedfunc->clearallstupidinput(sc)).c_str()); // right! that is clear all stupid input
				 char op='o';  //operation
				
				 bool error_detect=false;
				 
				 char cnow;  //a+b 的a
				 /////////////http://1drv.ms/1n7J8BZ
				 bool zero=false;
				 do 
				 {
					 minus=false;
					 //////判斷負號
					 if (sc[c]=='-')
					 {
						 minus=true;
						 c++;
					 }
					 ///////////////////////讀係數
					 x=0;
					 zero=false;
					 while(sc[c]>='0' &&  sc[c]<='9')
					 {
						 if (sc[c]==0)
						 {
							 zero=true;
						 }
						
						 x=x*10+sc[c]-'0';
						 c++;
					 }
					 if(x==0)
						 x++;
					 //////////////////////////
					 /*do 
					 {
						 
					 } while (!(sc[c]!='+' || sc[c]!='\0'));*/
					 cnow=sc[c++];  ///////存 英文代號 :5a+2b的a或b

					 //////////執行運算
						 switch(op)
						 {
							case 'o': //抓第一個vector
									temps=mat->pop(x,cnow); 
									tempss.push_back(temps);
									break;
							case '+':  //add
									temps=mat->add(x,cnow,temps);
									break;
							case '-':  //decrease
									temps=mat->dec(x,cnow,temps);
									break;
							/*case '*': //	 Multiplication
									
									temp=vec->pop(x,cnow);
									if(temps[0].size()==temp.size())
										temps.push_back(temp);
									else
									{
										total->Text=std_to_System_string("Illegal operation!");
										return;
									}
									break;*/
							case 'x':// Matrix  Multiplication
							case 'X':
									
								   temps=mat->mul(x,cnow,temps);
								   break;
							
						 }
					 ////////////

					 if(sc[c]!='\0') //紀錄下個運算式
						 op=sc[c++];


				 } while (!(sc[c]=='\0'));

				/* if(dot)
				 {
					 total->Text=""+vec->dot(temps);
					 return;
				 }*/
				 if(temps.empty())
				 {
					 no_normal=true;
					 ans_add(std_to_System_string("Illegal operation!"));
				 }
				 else
				 {
					 sum = temp;
					 vector<vector<double>> tt=temps;

					 ans_add(std_to_System_string(mat->print_out(temps)));
				     //Mat_Label->Text=std_to_System_string(mat->print_out(mat->gaussian_elimination(temps)));

				 }

		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(SYS_str_to_std(textBox10->Text)=="")
			 {
				  double norm=vec->p_norm2(2,temp);
				 ans_add(""+norm);
				  temp.clear();
				temp.push_back(norm);
			 }
			 else
			 {
			 unsigned a =  SYS_str_to_std(textBox10->Text)[0];
			 

			 double norm=vec->p_norm(2,a);

			ans_add(""+norm);
			 temp.clear();
				temp.push_back(norm);
			 }
			 
			 

		 }

private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void transposbuttom_Click(System::Object^  sender, System::EventArgs^  e) {
			 vector<vector<double>> trans;
			 if(SYS_str_to_std(transtbox->Text)=="")
			 {
				 trans=mat->transpose(temps);
			 }
			 else
			 {
			 char b =   SYS_str_to_std(transtbox->Text)[0];
			 trans=mat->transpose(mat->pop(1,b));
			 }
			ans_add(std_to_System_string(mat->print_out(trans)));

			temps.clear();
			temps = trans;
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 //button20_Click(sender,e);
			 double det=mat->Determinant(temps);
			 if(det==-9999)
				ans_add("Must be NxN matrix.");
			 else
				ans_add("Determinant : "+det);
			 temp.clear();
			 temp.push_back(det);
			 temps.clear();
			 temps.push_back(temp);

		 }

private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 vector<vector<double>> matrix;
			 temp.clear();
			 
			  string sa=SYS_str_to_std(Inde_text->Text); // 讀取Textbox的string
			 int err=0;
			 char sc[40]; //字元陣列
			 int c=0;  //第幾的字元
			 double x;  //係數k
			 bool minus=false; //負號
			 int index=0;
			 int i=0;
			 
			 strcpy(sc,sa.c_str()); //字串轉到字元陣列
			 strcpy(sc,(addedfunc->clearallstupidinput(sc)).c_str());
			 while(sc[i]!='\0')
			 {
				 
				 if(index==0&&sc[i]>='a'&&sc[i]<='z')
				 {
					 temp=vec->pop(1,sc[i]);
					 matrix.push_back(temp);
					 
				 }
				 else if(sc[i]>='a'&&sc[i]<='z')
				 {
					 temp = vec->pop(1,sc[i]);
					 if(temp.size()==matrix[0].size())
					  {
						  matrix.push_back(temp);
						 
					  }
					 else
					 {
						total->Text=std_to_System_string("Illegal operation!");
						err=1;
						 break;
					 }
				 }
				 i++;
             }
			 /* if(matrix.size()>matrix[0].size())
			  {
				  total->Text=std_to_System_string("dependent");
				  err=1;
			  }
			  else
			  {*/
			 if(err==0&&vec->linear_indepen(mat->gaussian_elimination(matrix)))
			 total->Text=std_to_System_string("Independent");
			else if(err==0&&!vec->linear_indepen(mat->gaussian_elimination(matrix)))
			  total->Text=std_to_System_string("dependent");
			ans_add(std_to_System_string(mat->print_out(mat->gaussian_elimination(matrix))));
			 // }
		 }
		 private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
					 vector<vector<double>> matrix;
					 string sa=SYS_str_to_std(rank_text->Text); // 讀取Textbox的string
					 if(sa=="")
					 {
						 matrix=temps;
					 }
					 else
					 {
					  char sc[40];
					  int i=0;
					  strcpy(sc,sa.c_str()); //字串轉到字元陣列
					  strcpy(sc,(addedfunc->clearallstupidinput(sc)).c_str());
					  while(sc[i]!='\0')
					  {

						  if(sc[i]>='a'&&sc[i]<='z')
						  {
							 matrix=mat->pop(1,sc[i]);
							 break;

						  }
						  i++;
					  }
					 }
					  // Mat_Label->Text = std_to_System_string(mat->print_out(mat->gaussian_elimination(matrix)));
					  ans_add("Rank is " + mat->rank(matrix));

					  temp.clear();
					  temp.push_back( mat->rank(matrix));
					  temps.clear();
					  temps.push_back(temp);
					

				  }
private: System::Void adjoint_Click(System::Object^  sender, System::EventArgs^  e) {
			// button20_Click(sender,e);
			 vector<vector<double>> adjoint=mat->Adjoint(temps);
			 if(adjoint.empty())
				ans_add("Must be NxN matrix.");
			 else
				ans_add(std_to_System_string(mat->print_out(adjoint)));
			 temps.clear();
			 temps=adjoint;

		 }
private: System::Void Inverse_Click(System::Object^  sender, System::EventArgs^  e) {
			// button20_Click(sender,e);
			 vector<vector<double>> Inverse=mat->Inverse(temps);
			 if(Inverse.empty())
				ans_add("Can not be Inversed.");
			 else
				ans_add(std_to_System_string(mat->print_out(Inverse)));
			 
			 temps.clear();
			 temps=Inverse;
		 }
private: System::Void Power_Click(System::Object^  sender, System::EventArgs^  e) {
			  char a =   SYS_str_to_std(Power_a->Text)[0];
			  vector<vector<double>> po=mat->PowEigen(mat->pop(1,a));
			  double va=po[0][0];
			  po.erase(po.begin());
			  if(po.empty())
				 ans_add("Input error.");
			  else
				 ans_add("eigen value: "+va+"\neigen vector: "+std_to_System_string(mat->print_out(po)));
		 }
private: System::Void Eigenvalue_Click(System::Object^  sender, System::EventArgs^  e) {
			// button20_Click(sender,e);
			 vector<double> eigennvalue=mat->eigenvalue(temps);

			 vector<vector<double>> eigenvector = mat->eigenvector(eigennvalue,temps);
			 if(eigennvalue.empty())
				ans_add("Input error.");
			 else
				ans_add(std_to_System_string(vec->print_out(eigennvalue))+"\n"+std_to_System_string(mat->print_out(eigenvector)));
			 temps.clear();
			 temps=eigenvector;
		 }
private: System::Void Liner_Click(System::Object^  sender, System::EventArgs^  e) {
			 char x,y;
			 vector<vector<double>> Liner;
			 if(SYS_str_to_std(Liner_x->Text)=="")
			 {
				 y= SYS_str_to_std(Liner_y->Text)[0];
				  Liner=mat->LeastSquare(temps,mat->pop(1,y));
			 }
			 else
			 {
			 x =   SYS_str_to_std(Liner_x->Text)[0];
			 y= SYS_str_to_std(Liner_y->Text)[0];
			 Liner=mat->LeastSquare(mat->pop(1,x),mat->pop(1,y));
			 }
			 //if(Liner.empty())
				//ans_add("Input error.");
			 //else
				ans_add(std_to_System_string(mat->print_out(Liner)));
			 temps.clear();
			 temps=Liner;


		 }
private: System::Void Scale_Click(System::Object^  sender, System::EventArgs^  e) {
			 char a =   SYS_str_to_std(scaleBoxa->Text)[0];
			 char n=SYS_str_to_std(scaleBoxn->Text)[0];
			 vector<double> sca=vec->pop(vec->pop(1,n)[0],a);
			 if(sca.empty())
				ans_add("Input error.");
			 else
				ans_add(std_to_System_string(vec->print_out(sca)));
				
		 }
private: System::Void Solve_Click(System::Object^  sender, System::EventArgs^  e) {
			 char a,b;
			 vector<double> solve;
			 if(SYS_str_to_std(solve_a->Text)=="")
			 {
				 b=SYS_str_to_std(solve_b->Text)[0];
				 solve=mat->solveliner(temps,mat->pop(1,b));
			 }
			 else
			 {
			 a =   SYS_str_to_std(solve_a->Text)[0];
			 b=SYS_str_to_std(solve_b->Text)[0];
			 solve=mat->solveliner(mat->pop(1,a),mat->pop(1,b));
			 }
			 //if(solve.empty())
			//	ans_add("Input error.");
			// else
				ans_add(std_to_System_string(vec->print_out(solve)));
				temps.clear();
				temps.push_back(solve);

		 }
private: System::Void upper_Click(System::Object^  sender, System::EventArgs^  e) {
			 vector<vector<double>> upper;
			 if(SYS_str_to_std(RowReduction->Text)=="")
			 {
				 upper=mat->UpperTri(temps);
			 }
			 else
			 {
			  char a =   SYS_str_to_std(RowReduction->Text)[0];
			  upper=mat->UpperTri(mat->pop(1,a));
			 }
			  //if(upper.empty())
				// ans_add("Input error.");
			  //else
				ans_add(std_to_System_string(mat->print_out(upper)));
				temps.clear();
				temps=upper;
		 }
private: System::Void lower_Click(System::Object^  sender, System::EventArgs^  e) {
			 vector<vector<double>> upper;
			 if(SYS_str_to_std(RowReduction->Text)=="")
			 {
				 upper=mat->DownTri(temps);
			 }
			 else
			 {
			 char a =   SYS_str_to_std(RowReduction->Text)[0];
			 upper=mat->DownTri(mat->pop(1,a));
			 }
			// if(upper.empty())
				//ans_add("Input error.");
			 //else
				ans_add(std_to_System_string(mat->print_out(upper)));
				temps.clear();
				temps=upper;
		 }
private: System::Void orth_Click(System::Object^  sender, System::EventArgs^  e) {
			 vector<vector<double>> matrix;
			 string sa=SYS_str_to_std(orthbox->Text); // 讀取Textbox的string
			 char sc[40];
			 int i=0;
			 strcpy(sc,sa.c_str()); //字串轉到字元陣列
			 strcpy(sc,(addedfunc->clearallstupidinput(sc)).c_str());
			 while(sc[i]!='\0')
			 {

				 
				 
					 matrix.push_back(vec->pop(1,sc[i]));
					

				 
				 i++;
			 }

			 matrix=vec->OrthogonalBasis(matrix);
			 if(matrix.empty())
				 ans_add("Input error.");
			 else
				ans_add(std_to_System_string(mat->print_out(matrix)));
		 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			   string sa=SYS_str_to_std(textBox1->Text); // 讀取Textbox的string
			 double magb,ans;
			 char ca;

				  ca=sa.at(0);// 讀取Textbox的char

				vector<double> tempa,tempans;
				if(ca>='0'&&ca<='9')
				{
					bool foundchar=false;
					for(int i=0;i<sa.length();i++)
					{
						if(!(sa.at(i)>='0'&&sa.at(i)<='9'))
						{
							foundchar=true;
							break;
						}
					}
					if(!foundchar)
					{
					double value=atoi(sa.c_str());
					tempa.push_back(value);
					}
					else
					{
						double sca=0;
						char thechar;
						for(int i=0;i<sa.length();i++)
						{
							if(!(sa.at(i)>='0'&&sa.at(i)<='9'))
							{
								thechar=sa.at(i);
							}
							else
							{
								sca=sca*10+(int)sa.at(i)-(int)('0');
							}
						}
						tempa=vec->pop(sca,thechar); 
					}
				}
				else
				{
				tempa=vec->pop(1,ca); 
				 
				}
				tempans=cal('+',temp,tempa);
				 ans_add(std_to_System_string(vec->print_out(tempans)));
				 temp.clear();
				 temp=tempans;

		 }
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			string sa=SYS_str_to_std(textBox1->Text); // 讀取Textbox的string
			 double magb,ans;
			 char ca;

				  ca=sa.at(0);// 讀取Textbox的char
				vector<double> tempa,tempans;
				if(ca>='0'&&ca<='9')
				{
					bool foundchar=false;
					for(int i=0;i<sa.length();i++)
					{
						if(!(sa.at(i)>='0'&&sa.at(i)<='9'))
						{
							foundchar=true;
							break;
						}
					}
					if(!foundchar)
					{
					double value=atoi(sa.c_str());
					tempa.push_back(value);
					}
					else
					{
						double sca=0;
						char thechar;
						for(int i=0;i<sa.length();i++)
						{
							if(!(sa.at(i)>='0'&&sa.at(i)<='9'))
							{
								thechar=sa.at(i);
							}
							else
							{
								sca=sca*10+(int)sa.at(i)-(int)('0');
							}
						}
						tempa=vec->pop(sca,thechar); 
					}
				}
				else
				{
				tempa=vec->pop(1,ca); 
				 
				} 
				 tempans=cal('-',temp,tempa);
				 ans_add(std_to_System_string(vec->print_out(tempans)));
				 temp.clear();
				 temp=tempans;
		 }
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			 string sa=SYS_str_to_std(textBox1->Text); // 讀取Textbox的string
			 double magb,ans;
			 char ca;

				  ca=sa.at(0);// 讀取Textbox的char
				vector<double> tempa,tempans;
				if(ca>='0'&&ca<='9')
				{
					bool foundchar=false;
					for(int i=0;i<sa.length();i++)
					{
						if(!(sa.at(i)>='0'&&sa.at(i)<='9'))
						{
							foundchar=true;
							break;
						}
					}
					if(!foundchar)
					{
					double value=atoi(sa.c_str());
					tempa.push_back(value);
					}
					else
					{
						double sca=0;
						char thechar;
						for(int i=0;i<sa.length();i++)
						{
							if(!(sa.at(i)>='0'&&sa.at(i)<='9'))
							{
								thechar=sa.at(i);
							}
							else
							{
								sca=sca*10+(int)sa.at(i)-(int)('0');
							}
						}
						tempa=vec->pop(sca,thechar); 
					}
				}
				else
				{
				tempa=vec->pop(1,ca); 
				 
				}
				 tempans=cal('*',temp,tempa);
				 ans_add(std_to_System_string(vec->print_out(tempans)));
				 temp.clear();
				 temp=tempans;
		 }
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
			 string sa=SYS_str_to_std(textBox1->Text); // 讀取Textbox的string
			 double magb,ans;
			 char ca;

				  ca=sa.at(0);// 讀取Textbox的char
				vector<double> tempa,tempans;
				if(ca>='0'&&ca<='9')
				{
					bool foundchar=false;
					for(int i=0;i<sa.length();i++)
					{
						if(!(sa.at(i)>='0'&&sa.at(i)<='9'))
						{
							foundchar=true;
							break;
						}
					}
					if(!foundchar)
					{
					double value=atoi(sa.c_str());
					tempa.push_back(value);
					}
					else
					{
						double sca=0;
						char thechar;
						for(int i=0;i<sa.length();i++)
						{
							if(!(sa.at(i)>='0'&&sa.at(i)<='9'))
							{
								thechar=sa.at(i);
							}
							else
							{
								sca=sca*10+(int)sa.at(i)-(int)('0');
							}
						}
						tempa=vec->pop(sca,thechar); 
					}
				}
				else
				{
				tempa=vec->pop(1,ca); 
				 
				}
				 tempans=cal('x',temp,tempa);
				 ans_add(std_to_System_string(vec->print_out(tempans)));
				 temp.clear();
				 temp=tempans;
		 }
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
			 string sa=SYS_str_to_std(textBox1->Text); // 讀取Textbox的string
			 double magb,ans;
			 double value=atoi(sa.c_str());
			 vector<double> tempa,tempans;
			 tempans=dotproduct(value,temp);
			 ans_add(std_to_System_string(vec->print_out(tempans)));
			 temp.clear();
			 temp=tempans;
		 }
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
			 string sa=SYS_str_to_std(martrix_input->Text);
			double magb,ans;
			 char ca;

				  ca=sa.at(0);// 讀取Textbox的char

				vector<double> tempa,tempans;
				if(ca>='0'&&ca<='9')
				{
					bool foundchar=false;
					for(int i=0;i<sa.length();i++)
					{
						if(!(sa.at(i)>='0'&&sa.at(i)<='9'))
						{
							foundchar=true;
							break;
						}
					}
					if(!foundchar)
					{
						double value=atoi(sa.c_str());
						tempa.push_back(value);
					}
					else
					{
						double sca=0;
						char thechar;
						for(int i=0;i<sa.length();i++)
						{
							if(!(sa.at(i)>='0'&&sa.at(i)<='9'))
							{
								thechar=sa.at(i);
							}
							else
							{
								sca=sca*10+(int)sa.at(i)-(int)('0');
							}
						} 
						temps=mat->add(sca,thechar,temps);
					}
				}
				else
				{
				temps=mat->add(1,ca,temps);
				 
				}
				 ans_add(std_to_System_string(mat->print_out(temps)));
				 
		 }
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
			 string sa=SYS_str_to_std(martrix_input->Text);
			double magb,ans;
			 char ca;

				  ca=sa.at(0);// 讀取Textbox的char

				vector<double> tempa,tempans;
				if(ca>='0'&&ca<='9')
				{
					bool foundchar=false;
					for(int i=0;i<sa.length();i++)
					{
						if(!(sa.at(i)>='0'&&sa.at(i)<='9'))
						{
							foundchar=true;
							break;
						}
					}
					if(!foundchar)
					{
						double value=atoi(sa.c_str());
						tempa.push_back(value);
					}
					else
					{
						double sca=0;
						char thechar;
						for(int i=0;i<sa.length();i++)
						{
							if(!(sa.at(i)>='0'&&sa.at(i)<='9'))
							{
								thechar=sa.at(i);
							}
							else
							{
								sca=sca*10+(int)sa.at(i)-(int)('0');
							}
						} 
						temps=mat->dec(sca,thechar,temps);
					}
				}
				else
				{
				temps=mat->dec(1,ca,temps);
				 
				}
				 ans_add(std_to_System_string(mat->print_out(temps)));
		 }
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
			  string sa=SYS_str_to_std(martrix_input->Text);
			double magb,ans;
			 char ca;

				  ca=sa.at(0);// 讀取Textbox的char

				vector<double> tempa,tempans;
				if(ca>='0'&&ca<='9')
				{
					bool foundchar=false;
					for(int i=0;i<sa.length();i++)
					{
						if(!(sa.at(i)>='0'&&sa.at(i)<='9'))
						{
							foundchar=true;
							break;
						}
					}
					if(!foundchar)
					{
						double value=atoi(sa.c_str());
						tempa.push_back(value);
					}
					else
					{
						double sca=0;
						char thechar;
						for(int i=0;i<sa.length();i++)
						{
							if(!(sa.at(i)>='0'&&sa.at(i)<='9'))
							{
								thechar=sa.at(i);
							}
							else
							{
								sca=sca*10+(int)sa.at(i)-(int)('0');
							}
						} 
						temps=mat->mul(sca,thechar,temps);
					}
				}
				else
				{
				temps=mat->mul(1,ca,temps);
				 
				}
				 ans_add(std_to_System_string(mat->print_out(temps)));
		 }
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
			 string sa=SYS_str_to_std(martrix_input->Text); // 讀取Textbox的string
			 double magb,ans;
			 double value=atoi(sa.c_str());
			 vector<double> tempa,tempans;
			 temps=mat->scale(value,temps);
			 ans_add(std_to_System_string(mat->print_out(temps)));
		 }
};
}

