#pragma once

#include "class.h"
#include <stdlib.h>
#include <sstream>
#include <fstream>
namespace testinggame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	namespace
	{
		part q;
		int kelint;
	}
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

	protected: 



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button6;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Total shares";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(93, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(93, 73);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"My shares";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(93, 99);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Revenue";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(281, 47);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(201, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Value";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(186)));
			this->label5->Location = System::Drawing::Point(52, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 18);
			this->label5->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(281, 73);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(201, 76);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Share price";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(186)));
			this->button1->Location = System::Drawing::Point(653, 280);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 40);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Next turn";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(186)));
			this->label7->Location = System::Drawing::Point(586, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 25);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Me";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(516, 47);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(38, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Pinigai";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(560, 43);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 15;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(82, 174);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 36);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Buy shares";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(204, 216);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {100000, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(111, 20);
			this->numericUpDown1->TabIndex = 17;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(90, 218);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(89, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Amount of shares";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(118, 139);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 19;
			this->button3->Text = L"<----";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(244, 139);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 20;
			this->button4->Text = L"---->";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(208, 174);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(111, 36);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Sell shares";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(281, 99);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 23;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(201, 102);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 13);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Money";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(321, 207);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(86, 34);
			this->button6->TabIndex = 24;
			this->button6->Text = L"Buy all";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(776, 332);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_close);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void me(){
		String ^pinigai;
		std::string pinigai1;
		pinigai1 = static_cast<std::ostringstream*>( &(std::ostringstream() << q.pinigai) )->str();
		pinigai = gcnew String(pinigai1.c_str());
		textBox6->Text=pinigai;
		}
		void fill() {
			 String ^totalshares,^shares,^revenue,^value,^shareprice,^money;
			 std::string totalshares1,shares1,revenue1,value1,shareprice1,money1;
			 int sumshare=0;
			 for(int d=0;d<q.amountshares;d++)
			 {
				 if(q.A[kelint].name==q.share[d].company) sumshare=sumshare+q.share[d].amount;
			 }
			 totalshares1 = static_cast<std::ostringstream*>( &(std::ostringstream() << q.A[kelint].totalshares) )->str();
			 shares1 = static_cast<std::ostringstream*>( &(std::ostringstream() << sumshare) )->str();
			 revenue1 = static_cast<std::ostringstream*>( &(std::ostringstream() << q.A[kelint].revenue) )->str();
			 value1 = static_cast<std::ostringstream*>( &(std::ostringstream() << q.A[kelint].value) )->str();
			 shareprice1 = static_cast<std::ostringstream*>( &(std::ostringstream() << q.A[kelint].shareprice) )->str();
			 money1 = static_cast<std::ostringstream*>( &(std::ostringstream() << q.A[kelint].money) )->str();

			 totalshares = gcnew String(totalshares1.c_str());
			 shares = gcnew String(shares1.c_str());
			 revenue = gcnew String(revenue1.c_str());
			 value = gcnew String(value1.c_str());
			 shareprice = gcnew String(shareprice1.c_str());
			 money = gcnew String(money1.c_str());

			 String ^ name = gcnew String(q.A[kelint].name.c_str());
			 label5->Text=name;
			 textBox1->Text=totalshares;
			 textBox2->Text=shares;
			 textBox3->Text=revenue;
			 textBox4->Text=value;
			 textBox5->Text=shareprice;
			 textBox7->Text=money;
			}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 q.amountinterest=0;
			 q.amountshares=0;
			 q.amountsell=0;
			 kelint=0;
			 fill();
			 me();
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			int amount=0,shareviet=-1,sumshare=0;
			amount=(int)numericUpDown1->Value;
			for(int d=0;d<q.amountshares;d++)
			{
				if(q.A[kelint].name==q.share[d].company) sumshare=sumshare+q.share[d].amount;
			}
			if((sumshare+amount)>q.A[kelint].totalshares)amount=q.A[kelint].totalshares-sumshare;
			///////////////////////////////////////////////////////////////////////////////////////////
			if(q.pinigai>(q.A[kelint].shareprice*amount))
			{
				for(int d=0;d<q.amountshares;d++)
				{
					if((q.share[d].lastname=="player")&&(q.share[d].company==q.A[kelint].name)){shareviet=d; break;}
				}
				if(shareviet<0)
				{
					q.share[q.amountshares].lastname="player";
					q.share[q.amountshares].company=q.A[kelint].name;
					q.share[q.amountshares].amount=amount;
					q.amountshares++;
				}
				else
				{
					q.share[shareviet].amount=q.share[shareviet].amount+amount;
				}
					q.pinigai=q.pinigai-(q.A[kelint].shareprice*amount);
					q.A[kelint].shares=q.A[kelint].shares-amount;
				}
			else MessageBox::Show("Not enough money to buy all left shares","Error",MessageBoxButtons::OK);
			me();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			q.nextturn();
			q.write();
			fill();
			me();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			kelint++;
			if(kelint>=q.n)kelint=0;
			fill();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			kelint--;
			if(kelint<0)kelint=q.n-1;
			fill();
		 
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			int amount=0,shareviet=-1,sumshare=0;
			amount=(int)numericUpDown1->Value;
			for(int d=0;d<q.amountshares;d++)
			{
				if(q.A[kelint].name==q.share[d].company) sumshare=sumshare+q.share[d].amount;
			}
			if((sumshare+amount)>q.A[kelint].totalshares)amount=q.A[kelint].totalshares-sumshare;
			///////////////////////////////////////////////////////////////////////////////////////////
			if(q.pinigai>(q.A[kelint].shareprice*amount))
			{
				for(int d=0;d<q.amountshares;d++)
				{
					if((q.share[d].lastname=="player")&&(q.share[d].company==q.A[kelint].name)){shareviet=d; break;}
				}
				if(shareviet>0)
				{
					q.share[q.amountshares].lastname="player";
					q.share[q.amountshares].company=q.A[kelint].name;
					q.share[q.amountshares].amount=amount;
					q.amountshares++;
				}
				else
				{
					q.share[shareviet].amount=q.share[shareviet].amount+amount;
				}
					q.pinigai=q.pinigai+(q.A[kelint].shareprice*amount);
					q.A[kelint].shares=q.A[kelint].shares-amount;
				}
			else MessageBox::Show("Not enough money to buy all left shares","Error",MessageBoxButtons::OK);
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void MyForm_close(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 q.write();
		 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 int amount=q.A[kelint].totalshares;
			if((q.pinigai>=(q.A[kelint].shareprice*amount))&&(q.A[kelint].totalshares-q.A[kelint].shares>=amount))
			{
				q.pinigai=q.pinigai-(q.A[kelint].shareprice*amount);
				q.A[kelint].shares=q.A[kelint].shares+amount;
				q.A[kelint].money=q.A[kelint].money+(q.A[kelint].shareprice*amount);
			}
			else MessageBox::Show("Not enough money or too much shares","Error",MessageBoxButtons::OK);
			me();
		 }
};
}
