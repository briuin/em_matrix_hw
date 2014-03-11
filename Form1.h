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
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->martrix_input = (gcnew System::Windows::Forms::TextBox());
			this->Mat_Label = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// Matrix_listBox
			// 
			this->Matrix_listBox->FormattingEnabled = true;
			this->Matrix_listBox->ItemHeight = 15;
			this->Matrix_listBox->Location = System::Drawing::Point(14, 12);
			this->Matrix_listBox->Margin = System::Windows::Forms::Padding(4);
			this->Matrix_listBox->Name = L"Matrix_listBox";
			this->Matrix_listBox->Size = System::Drawing::Size(597, 499);
			this->Matrix_listBox->TabIndex = 0;
			this->Matrix_listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::Matrix_listBox_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->OpenVector_button);
			this->groupBox1->Controls->Add(this->OpenMatrix_button);
			this->groupBox1->Location = System::Drawing::Point(14, 520);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(598, 370);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"OpenFile";
			// 
			// OpenVector_button
			// 
			this->OpenVector_button->Dock = System::Windows::Forms::DockStyle::Top;
			this->OpenVector_button->Location = System::Drawing::Point(4, 73);
			this->OpenVector_button->Margin = System::Windows::Forms::Padding(4);
			this->OpenVector_button->Name = L"OpenVector_button";
			this->OpenVector_button->Size = System::Drawing::Size(590, 54);
			this->OpenVector_button->TabIndex = 8;
			this->OpenVector_button->Text = L"Open_VectorFile";
			this->OpenVector_button->UseVisualStyleBackColor = true;
			this->OpenVector_button->Click += gcnew System::EventHandler(this, &Form1::OpenVector_button_Click);
			// 
			// OpenMatrix_button
			// 
			this->OpenMatrix_button->Dock = System::Windows::Forms::DockStyle::Top;
			this->OpenMatrix_button->Location = System::Drawing::Point(4, 19);
			this->OpenMatrix_button->Margin = System::Windows::Forms::Padding(4);
			this->OpenMatrix_button->Name = L"OpenMatrix_button";
			this->OpenMatrix_button->Size = System::Drawing::Size(590, 54);
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
			this->button1->Location = System::Drawing::Point(283, 75);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 28);
			this->button1->TabIndex = 15;
			this->button1->Text = L"caculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(21, 75);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(252, 22);
			this->textBox1->TabIndex = 14;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// total
			// 
			this->total->AutoSize = true;
			this->total->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->total->Location = System::Drawing::Point(323, 9);
			this->total->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->total->Name = L"total";
			this->total->Size = System::Drawing::Size(58, 25);
			this->total->TabIndex = 11;
			this->total->Text = L"Sum";
			this->total->UseMnemonic = false;
			this->total->Click += gcnew System::EventHandler(this, &Form1::total_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(390, 75);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 28);
			this->button2->TabIndex = 16;
			this->button2->Text = L"normalize";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(513, 75);
			this->button3->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 28);
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
			this->label1->Location = System::Drawing::Point(21, 156);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 25);
			this->label1->TabIndex = 18;
			this->label1->Text = L"projection";
			this->label1->UseMnemonic = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(141, 158);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(43, 22);
			this->textBox2->TabIndex = 19;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label2->Location = System::Drawing::Point(191, 158);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 25);
			this->label2->TabIndex = 20;
			this->label2->Text = L"onto";
			this->label2->UseMnemonic = false;
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(253, 158);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(43, 22);
			this->textBox3->TabIndex = 21;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(311, 157);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(96, 28);
			this->button4->TabIndex = 22;
			this->button4->Text = L"caculate";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button5->ForeColor = System::Drawing::Color::Red;
			this->button5->Location = System::Drawing::Point(311, 117);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(96, 28);
			this->button5->TabIndex = 27;
			this->button5->Text = L"caculate";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(253, 119);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(43, 22);
			this->textBox4->TabIndex = 26;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label3->Location = System::Drawing::Point(191, 119);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 25);
			this->label3->TabIndex = 25;
			this->label3->Text = L"onto";
			this->label3->UseMnemonic = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(141, 119);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(43, 22);
			this->textBox5->TabIndex = 24;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label4->Location = System::Drawing::Point(17, 117);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 25);
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
			this->parallel->Location = System::Drawing::Point(21, 197);
			this->parallel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->parallel->Name = L"parallel";
			this->parallel->Size = System::Drawing::Size(93, 25);
			this->parallel->TabIndex = 28;
			this->parallel->Text = L"par/oth";
			this->parallel->UseMnemonic = false;
			// 
			// para
			// 
			this->para->Location = System::Drawing::Point(141, 199);
			this->para->Margin = System::Windows::Forms::Padding(2);
			this->para->Name = L"para";
			this->para->Size = System::Drawing::Size(43, 22);
			this->para->TabIndex = 29;
			// 
			// parb
			// 
			this->parb->Location = System::Drawing::Point(253, 199);
			this->parb->Margin = System::Windows::Forms::Padding(2);
			this->parb->Name = L"parb";
			this->parb->Size = System::Drawing::Size(43, 22);
			this->parb->TabIndex = 30;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button6->ForeColor = System::Drawing::Color::Red;
			this->button6->Location = System::Drawing::Point(311, 199);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(96, 28);
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
			this->label5->Location = System::Drawing::Point(21, 239);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 25);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Area of";
			this->label5->UseMnemonic = false;
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(141, 239);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(43, 22);
			this->textBox6->TabIndex = 33;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(253, 239);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(43, 22);
			this->textBox7->TabIndex = 34;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label6->Location = System::Drawing::Point(191, 199);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 25);
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
			this->label7->Location = System::Drawing::Point(191, 239);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 25);
			this->label7->TabIndex = 36;
			this->label7->Text = L"and";
			this->label7->UseMnemonic = false;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button7->ForeColor = System::Drawing::Color::Red;
			this->button7->Location = System::Drawing::Point(311, 239);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(137, 28);
			this->button7->TabIndex = 37;
			this->button7->Text = L"parallelogram";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button8->ForeColor = System::Drawing::Color::Red;
			this->button8->Location = System::Drawing::Point(453, 239);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(82, 28);
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
			this->label8->Location = System::Drawing::Point(21, 278);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 25);
			this->label8->TabIndex = 39;
			this->label8->Text = L"Angle btw";
			this->label8->UseMnemonic = false;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(141, 280);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(43, 22);
			this->textBox8->TabIndex = 40;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label9->Location = System::Drawing::Point(191, 280);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 25);
			this->label9->TabIndex = 41;
			this->label9->Text = L"and";
			this->label9->UseMnemonic = false;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(253, 283);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(43, 22);
			this->textBox9->TabIndex = 42;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_TextChanged);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button9->ForeColor = System::Drawing::Color::Red;
			this->button9->Location = System::Drawing::Point(311, 280);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(96, 28);
			this->button9->TabIndex = 43;
			this->button9->Text = L"radiance";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button10->ForeColor = System::Drawing::Color::Red;
			this->button10->Location = System::Drawing::Point(425, 283);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(96, 28);
			this->button10->TabIndex = 44;
			this->button10->Text = L"degree";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->parb);
			this->groupBox2->Controls->Add(this->para);
			this->groupBox2->Controls->Add(this->parallel);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->textBox5);
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
			this->groupBox2->Location = System::Drawing::Point(643, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1612, 352);
			this->groupBox2->TabIndex = 45;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Vector";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button20);
			this->groupBox3->Controls->Add(this->martrix_input);
			this->groupBox3->Controls->Add(this->Mat_Label);
			this->groupBox3->Location = System::Drawing::Point(643, 370);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1612, 943);
			this->groupBox3->TabIndex = 46;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"matrix";
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold));
			this->button20->ForeColor = System::Drawing::Color::Red;
			this->button20->Location = System::Drawing::Point(283, 37);
			this->button20->Margin = System::Windows::Forms::Padding(2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(96, 28);
			this->button20->TabIndex = 15;
			this->button20->Text = L"caculate";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// martrix_input
			// 
			this->martrix_input->Location = System::Drawing::Point(21, 37);
			this->martrix_input->Margin = System::Windows::Forms::Padding(2);
			this->martrix_input->Name = L"martrix_input";
			this->martrix_input->Size = System::Drawing::Size(252, 22);
			this->martrix_input->TabIndex = 14;
			// 
			// Mat_Label
			// 
			this->Mat_Label->AutoSize = true;
			this->Mat_Label->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Mat_Label->Location = System::Drawing::Point(421, 36);
			this->Mat_Label->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Mat_Label->Name = L"Mat_Label";
			this->Mat_Label->Size = System::Drawing::Size(59, 17);
			this->Mat_Label->TabIndex = 11;
			this->Mat_Label->Text = L"Matrix";
			this->Mat_Label->UseMnemonic = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1716, 886);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Matrix_listBox);
			this->Margin = System::Windows::Forms::Padding(4);
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
		

#pragma endregion
	private: System::Void openVector_FileDialog_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
				 Matrix_listBox->Items->Clear();
				 temp.clear();
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
					 char a ;
					 o_file >> a ;
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
						 for( int k=0 ; k<d ; k++)
						 {
							 double val ;//用int去讀取vector的值...之後或許會有小數點的值，請改用float
							 o_file>>val;
							 s+=val;   //System string 有幫我們實作operator，因此我們可以很快樂的在此用字串合併，以便輸出至之後的listBox
							 if(k!=d-1)
								 s+=",";   //加逗號
							 temp.push_back(val);//將txt 單一向量讀入temp

						 }

						 Matrix_listBox->Items->Add("("+s+")");

						 //這是分隔線
						 Matrix_listBox->Items->Add("-------------------------------------");
						 s ="";
						 vec->push(temp);//將向量存入Vec
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
			 string sa=SYS_str_to_std(textBox1->Text); // 讀取Textbox的string
				temp.clear();
				temps.clear();
				 char sc[40]; //字元陣列
				 int c=0;  //第幾的字元
				 double x;  //係數k
				 bool minus=false; //負號  
				 strcpy(sc,sa.c_str()); //字串轉到字元陣列
				 strcpy(sc,(addedfunc->clearallstupidinput(sc)).c_str()); // right! that is clear all stupid input
				 char op='o';  //operation
				 bool dot=false;
				  bool cro=false;
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
						 else
						 {

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
				 else
				 {
					 sum = temp;
					 total->Text=std_to_System_string(vec->print_out(temp));
				 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			////normalize
			 total->Text = std_to_System_string(vec->print_out((vec->normal(sum))));
			 

		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Matrix_listBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 total->Text = std_to_System_string(vec->print_out((vec->magnitude(sum))));
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
			 char ca=sa.at(0);// 讀取Textbox的char
			 char cb=sb.at(0);// 讀取Textbox的char
			 vector<double> tempa,tempb,ans;
				temp.clear();
				temps.clear();
				 char sc[40]; //字元陣列
				double magb,compans;
				tempa=vec->pop(1,ca); 
				temps.push_back(tempa);
				tempb=vec->pop(1,cb); 
				
				ans=vec->projection(tempa,tempb,ca,cb);
				
		   		total->Text=std_to_System_string(vec->print_out(ans));
				
				 
				
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
			 char ca=sa.at(0);// 讀取Textbox的char
			 char cb=sb.at(0);// 讀取Textbox的char
			 vector<double> tempa,tempb;
				temp.clear();
				temps.clear();
				 char sc[40]; //字元陣列
				double magb,ans;
				tempa=vec->pop(1,ca); 
				temps.push_back(tempa);
				tempb=vec->pop(1,cb); 
				
				ans=vec->component(tempa,tempb,ca,cb);
				
		   		total->Text=""+ans;
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 char a =  SYS_str_to_std(para->Text)[0];
			 char b =   SYS_str_to_std(parb->Text)[0];
			 vector<double> tempa = vec->pop(1,a);
			 vector<double> tempb = vec->pop(1,b);
			 if(vec->parall(tempa,tempb))
				 total->Text="Paraell";
			 else if(vec->orthogonal(tempa,tempb))
				total->Text="Orthogoal";
			 else
				total->Text="Banana";
			 
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			  char a =  SYS_str_to_std(textBox6->Text)[0];
			 char b =   SYS_str_to_std(textBox7->Text)[0];
			 vector<double> tempa = vec->pop(1,a);
			 vector<double> tempb = vec->pop(1,b);
			total->Text=""+(vec->area_of_parallelogram(tempa,tempb,a,b));

		 }
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			  char a =  SYS_str_to_std(textBox6->Text)[0];
			 char b =   SYS_str_to_std(textBox7->Text)[0];
			 vector<double> tempa = vec->pop(1,a);
			 vector<double> tempb = vec->pop(1,b);
			total->Text=""+(vec->area_of_triangle(tempa,tempb,a,b));
		 }
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			  char a =  SYS_str_to_std(textBox8->Text)[0];
			 char b =   SYS_str_to_std(textBox9->Text)[0];
			 vector<double> tempa = vec->pop(1,a);
			 vector<double> tempb = vec->pop(1,b);
			total->Text=""+(vec->angle(tempa,tempb,a,b));
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 char a =  SYS_str_to_std(textBox8->Text)[0];
			 char b =   SYS_str_to_std(textBox9->Text)[0];
			 vector<double> tempa = vec->pop(1,a);
			 vector<double> tempb = vec->pop(1,b);
			total->Text=""+((vec->angle(tempa,tempb,a,b))*180/PI);
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
							/*case '*': //dot
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
								   break;*/
							
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
					 Mat_Label->Text=std_to_System_string("Illegal operation!");
				 }
				 else
				 {
					 sum = temp;
					 vector<vector<double>> tt=temps;
					 Mat_Label->Text=std_to_System_string(mat->print_out(temps));
				 }

		 }
};
}

