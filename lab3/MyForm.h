#pragma once
#include <cstring>
#include <math.h>
#include <string>


struct VECTOR {
	double x;
	double y;
	double	length;
 };
struct POINT {
	double x;
	double y;
};
namespace lab3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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

	protected:

	protected:

	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ B1_Input;
	private: System::Windows::Forms::TextBox^ C1_Input;




	private: System::Windows::Forms::Button^ CountButton;
	private: System::Windows::Forms::RadioButton^ Cos;
	private: System::Windows::Forms::RadioButton^ Height;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ A_Label;
	private: System::Windows::Forms::Label^ B_Label;
	private: System::Windows::Forms::Label^ C_Label;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ Result;



	private: System::Windows::Forms::TextBox^ A1_Input;
	private: System::Windows::Forms::TextBox^ A2_Input;
	private: System::Windows::Forms::TextBox^ C2_Input;

	private: System::Windows::Forms::TextBox^ B2_Input;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::TextBox^ Y_textBox;
	private: System::Windows::Forms::TextBox^ X_textBox;
	private: System::Windows::Forms::TextBox^ X2_textBox;
	private: System::Windows::Forms::TextBox^ X1_textBox;
	private: System::Windows::Forms::TextBox^ X3_textBox;
	private: System::Windows::Forms::TextBox^ Y1_textBox;
	private: System::Windows::Forms::TextBox^ Y2_textBox;
	private: System::Windows::Forms::TextBox^ Y3_textBox;
	private: System::Windows::Forms::Label^ X_label;
	private: System::Windows::Forms::Label^ X1_table;
	private: System::Windows::Forms::Label^ X2_label;
	private: System::Windows::Forms::Label^ X3_label;
	private: System::Windows::Forms::Label^ Y_label;
	private: System::Windows::Forms::Label^ Y1_label;
	private: System::Windows::Forms::Label^ Y2_label;
	private: System::Windows::Forms::Label^ Y3_label;
	private: System::Windows::Forms::Button^ Find_Button;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ TabulateButton;
	private: System::Windows::Forms::TextBox^ Tabulate_Input;
	private: System::Windows::Forms::ListBox^ listBox1;











	private: System::ComponentModel::IContainer^ components;

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
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->B1_Input = (gcnew System::Windows::Forms::TextBox());
			this->C1_Input = (gcnew System::Windows::Forms::TextBox());
			this->CountButton = (gcnew System::Windows::Forms::Button());
			this->Cos = (gcnew System::Windows::Forms::RadioButton());
			this->Height = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->A_Label = (gcnew System::Windows::Forms::Label());
			this->B_Label = (gcnew System::Windows::Forms::Label());
			this->C_Label = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->A2_Input = (gcnew System::Windows::Forms::TextBox());
			this->C2_Input = (gcnew System::Windows::Forms::TextBox());
			this->B2_Input = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->A1_Input = (gcnew System::Windows::Forms::TextBox());
			this->Result = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->Find_Button = (gcnew System::Windows::Forms::Button());
			this->Y2_label = (gcnew System::Windows::Forms::Label());
			this->Y3_label = (gcnew System::Windows::Forms::Label());
			this->Y1_label = (gcnew System::Windows::Forms::Label());
			this->Y_label = (gcnew System::Windows::Forms::Label());
			this->X3_label = (gcnew System::Windows::Forms::Label());
			this->X2_label = (gcnew System::Windows::Forms::Label());
			this->X1_table = (gcnew System::Windows::Forms::Label());
			this->X_label = (gcnew System::Windows::Forms::Label());
			this->Y3_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Y2_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Y1_textBox = (gcnew System::Windows::Forms::TextBox());
			this->X3_textBox = (gcnew System::Windows::Forms::TextBox());
			this->X2_textBox = (gcnew System::Windows::Forms::TextBox());
			this->X1_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Y_textBox = (gcnew System::Windows::Forms::TextBox());
			this->X_textBox = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->Tabulate_Input = (gcnew System::Windows::Forms::TextBox());
			this->TabulateButton = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->panel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// B1_Input
			// 
			this->B1_Input->Location = System::Drawing::Point(6, 66);
			this->B1_Input->Name = L"B1_Input";
			this->B1_Input->Size = System::Drawing::Size(38, 20);
			this->B1_Input->TabIndex = 3;
			// 
			// C1_Input
			// 
			this->C1_Input->Location = System::Drawing::Point(6, 92);
			this->C1_Input->Name = L"C1_Input";
			this->C1_Input->Size = System::Drawing::Size(38, 20);
			this->C1_Input->TabIndex = 5;
			// 
			// CountButton
			// 
			this->CountButton->Location = System::Drawing::Point(6, 141);
			this->CountButton->Name = L"CountButton";
			this->CountButton->Size = System::Drawing::Size(75, 23);
			this->CountButton->TabIndex = 7;
			this->CountButton->Text = L"Count";
			this->CountButton->UseVisualStyleBackColor = true;
			this->CountButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Cos
			// 
			this->Cos->AutoSize = true;
			this->Cos->Checked = true;
			this->Cos->Location = System::Drawing::Point(4, 3);
			this->Cos->Name = L"Cos";
			this->Cos->Size = System::Drawing::Size(88, 17);
			this->Cos->TabIndex = 8;
			this->Cos->TabStop = true;
			this->Cos->Text = L"Косинус B/2";
			this->Cos->UseVisualStyleBackColor = true;
			this->Cos->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// Height
			// 
			this->Height->AutoSize = true;
			this->Height->Location = System::Drawing::Point(3, 26);
			this->Height->Name = L"Height";
			this->Height->Size = System::Drawing::Size(74, 17);
			this->Height->TabIndex = 9;
			this->Height->Text = L"висоту ha";
			this->Height->UseVisualStyleBackColor = true;
			this->Height->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Height_CheckedChanged);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->Cos);
			this->panel1->Controls->Add(this->Height);
			this->panel1->Location = System::Drawing::Point(6, 170);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(100, 54);
			this->panel1->TabIndex = 7;
			// 
			// A_Label
			// 
			this->A_Label->AutoSize = true;
			this->A_Label->Location = System::Drawing::Point(50, 43);
			this->A_Label->Name = L"A_Label";
			this->A_Label->Size = System::Drawing::Size(19, 13);
			this->A_Label->TabIndex = 8;
			this->A_Label->Text = L"Ax";
			// 
			// B_Label
			// 
			this->B_Label->AutoSize = true;
			this->B_Label->Location = System::Drawing::Point(50, 69);
			this->B_Label->Name = L"B_Label";
			this->B_Label->Size = System::Drawing::Size(19, 13);
			this->B_Label->TabIndex = 9;
			this->B_Label->Text = L"Bx";
			// 
			// C_Label
			// 
			this->C_Label->AutoSize = true;
			this->C_Label->Location = System::Drawing::Point(50, 95);
			this->C_Label->Name = L"C_Label";
			this->C_Label->Size = System::Drawing::Size(19, 13);
			this->C_Label->TabIndex = 10;
			this->C_Label->Text = L"Cx";
			// 
			// tabControl1
			// 
			this->tabControl1->AccessibleName = L"";
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(488, 287);
			this->tabControl1->TabIndex = 12;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->A2_Input);
			this->tabPage1->Controls->Add(this->C2_Input);
			this->tabPage1->Controls->Add(this->B2_Input);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->A1_Input);
			this->tabPage1->Controls->Add(this->Result);
			this->tabPage1->Controls->Add(this->C1_Input);
			this->tabPage1->Controls->Add(this->B1_Input);
			this->tabPage1->Controls->Add(this->C_Label);
			this->tabPage1->Controls->Add(this->CountButton);
			this->tabPage1->Controls->Add(this->B_Label);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->A_Label);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(480, 261);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// A2_Input
			// 
			this->A2_Input->Location = System::Drawing::Point(76, 40);
			this->A2_Input->Name = L"A2_Input";
			this->A2_Input->Size = System::Drawing::Size(38, 20);
			this->A2_Input->TabIndex = 2;
			// 
			// C2_Input
			// 
			this->C2_Input->Location = System::Drawing::Point(76, 92);
			this->C2_Input->Name = L"C2_Input";
			this->C2_Input->Size = System::Drawing::Size(38, 20);
			this->C2_Input->TabIndex = 6;
			// 
			// B2_Input
			// 
			this->B2_Input->Location = System::Drawing::Point(76, 66);
			this->B2_Input->Name = L"B2_Input";
			this->B2_Input->Size = System::Drawing::Size(38, 20);
			this->B2_Input->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(120, 95);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Cy";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(120, 69);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"By";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(120, 43);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Ay";
			// 
			// A1_Input
			// 
			this->A1_Input->Location = System::Drawing::Point(6, 40);
			this->A1_Input->Name = L"A1_Input";
			this->A1_Input->Size = System::Drawing::Size(38, 20);
			this->A1_Input->TabIndex = 1;
			// 
			// Result
			// 
			this->Result->AutoSize = true;
			this->Result->Location = System::Drawing::Point(219, 66);
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(37, 13);
			this->Result->TabIndex = 12;
			this->Result->Text = L"Result";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->Find_Button);
			this->tabPage2->Controls->Add(this->Y2_label);
			this->tabPage2->Controls->Add(this->Y3_label);
			this->tabPage2->Controls->Add(this->Y1_label);
			this->tabPage2->Controls->Add(this->Y_label);
			this->tabPage2->Controls->Add(this->X3_label);
			this->tabPage2->Controls->Add(this->X2_label);
			this->tabPage2->Controls->Add(this->X1_table);
			this->tabPage2->Controls->Add(this->X_label);
			this->tabPage2->Controls->Add(this->Y3_textBox);
			this->tabPage2->Controls->Add(this->Y2_textBox);
			this->tabPage2->Controls->Add(this->Y1_textBox);
			this->tabPage2->Controls->Add(this->X3_textBox);
			this->tabPage2->Controls->Add(this->X2_textBox);
			this->tabPage2->Controls->Add(this->X1_textBox);
			this->tabPage2->Controls->Add(this->Y_textBox);
			this->tabPage2->Controls->Add(this->X_textBox);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(480, 261);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// Find_Button
			// 
			this->Find_Button->Location = System::Drawing::Point(261, 98);
			this->Find_Button->Name = L"Find_Button";
			this->Find_Button->Size = System::Drawing::Size(75, 23);
			this->Find_Button->TabIndex = 16;
			this->Find_Button->Text = L"Find result";
			this->Find_Button->UseVisualStyleBackColor = true;
			this->Find_Button->Click += gcnew System::EventHandler(this, &MyForm::Find_Button_Click);
			// 
			// Y2_label
			// 
			this->Y2_label->AutoSize = true;
			this->Y2_label->Location = System::Drawing::Point(133, 108);
			this->Y2_label->Name = L"Y2_label";
			this->Y2_label->Size = System::Drawing::Size(20, 13);
			this->Y2_label->TabIndex = 15;
			this->Y2_label->Text = L"Y2";
			// 
			// Y3_label
			// 
			this->Y3_label->AutoSize = true;
			this->Y3_label->Location = System::Drawing::Point(202, 108);
			this->Y3_label->Name = L"Y3_label";
			this->Y3_label->Size = System::Drawing::Size(20, 13);
			this->Y3_label->TabIndex = 14;
			this->Y3_label->Text = L"Y3";
			// 
			// Y1_label
			// 
			this->Y1_label->AutoSize = true;
			this->Y1_label->Location = System::Drawing::Point(80, 108);
			this->Y1_label->Name = L"Y1_label";
			this->Y1_label->Size = System::Drawing::Size(20, 13);
			this->Y1_label->TabIndex = 13;
			this->Y1_label->Text = L"Y1";
			// 
			// Y_label
			// 
			this->Y_label->AutoSize = true;
			this->Y_label->Location = System::Drawing::Point(16, 108);
			this->Y_label->Name = L"Y_label";
			this->Y_label->Size = System::Drawing::Size(14, 13);
			this->Y_label->TabIndex = 12;
			this->Y_label->Text = L"Y";
			// 
			// X3_label
			// 
			this->X3_label->AutoSize = true;
			this->X3_label->BackColor = System::Drawing::Color::Transparent;
			this->X3_label->Location = System::Drawing::Point(202, 46);
			this->X3_label->Name = L"X3_label";
			this->X3_label->Size = System::Drawing::Size(20, 13);
			this->X3_label->TabIndex = 11;
			this->X3_label->Text = L"X3";
			// 
			// X2_label
			// 
			this->X2_label->AutoSize = true;
			this->X2_label->BackColor = System::Drawing::Color::Transparent;
			this->X2_label->Location = System::Drawing::Point(133, 46);
			this->X2_label->Name = L"X2_label";
			this->X2_label->Size = System::Drawing::Size(20, 13);
			this->X2_label->TabIndex = 10;
			this->X2_label->Text = L"X2";
			// 
			// X1_table
			// 
			this->X1_table->AutoSize = true;
			this->X1_table->BackColor = System::Drawing::Color::Transparent;
			this->X1_table->Location = System::Drawing::Point(80, 46);
			this->X1_table->Name = L"X1_table";
			this->X1_table->Size = System::Drawing::Size(20, 13);
			this->X1_table->TabIndex = 9;
			this->X1_table->Text = L"X1";
			// 
			// X_label
			// 
			this->X_label->AutoSize = true;
			this->X_label->Location = System::Drawing::Point(16, 46);
			this->X_label->Name = L"X_label";
			this->X_label->Size = System::Drawing::Size(14, 13);
			this->X_label->TabIndex = 8;
			this->X_label->Text = L"X";
			// 
			// Y3_textBox
			// 
			this->Y3_textBox->Location = System::Drawing::Point(194, 124);
			this->Y3_textBox->Name = L"Y3_textBox";
			this->Y3_textBox->Size = System::Drawing::Size(37, 20);
			this->Y3_textBox->TabIndex = 7;
			// 
			// Y2_textBox
			// 
			this->Y2_textBox->Location = System::Drawing::Point(127, 124);
			this->Y2_textBox->Name = L"Y2_textBox";
			this->Y2_textBox->Size = System::Drawing::Size(37, 20);
			this->Y2_textBox->TabIndex = 6;
			// 
			// Y1_textBox
			// 
			this->Y1_textBox->Location = System::Drawing::Point(63, 124);
			this->Y1_textBox->Name = L"Y1_textBox";
			this->Y1_textBox->Size = System::Drawing::Size(37, 20);
			this->Y1_textBox->TabIndex = 5;
			// 
			// X3_textBox
			// 
			this->X3_textBox->Location = System::Drawing::Point(194, 62);
			this->X3_textBox->Name = L"X3_textBox";
			this->X3_textBox->Size = System::Drawing::Size(37, 20);
			this->X3_textBox->TabIndex = 4;
			// 
			// X2_textBox
			// 
			this->X2_textBox->Location = System::Drawing::Point(127, 62);
			this->X2_textBox->Name = L"X2_textBox";
			this->X2_textBox->Size = System::Drawing::Size(37, 20);
			this->X2_textBox->TabIndex = 3;
			// 
			// X1_textBox
			// 
			this->X1_textBox->Location = System::Drawing::Point(63, 62);
			this->X1_textBox->Name = L"X1_textBox";
			this->X1_textBox->Size = System::Drawing::Size(37, 20);
			this->X1_textBox->TabIndex = 2;
			// 
			// Y_textBox
			// 
			this->Y_textBox->Location = System::Drawing::Point(6, 124);
			this->Y_textBox->Name = L"Y_textBox";
			this->Y_textBox->Size = System::Drawing::Size(37, 20);
			this->Y_textBox->TabIndex = 1;
			// 
			// X_textBox
			// 
			this->X_textBox->Location = System::Drawing::Point(6, 62);
			this->X_textBox->Name = L"X_textBox";
			this->X_textBox->Size = System::Drawing::Size(37, 20);
			this->X_textBox->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->listBox1);
			this->tabPage3->Controls->Add(this->Tabulate_Input);
			this->tabPage3->Controls->Add(this->TabulateButton);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(480, 261);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// Tabulate_Input
			// 
			this->Tabulate_Input->Location = System::Drawing::Point(23, 71);
			this->Tabulate_Input->Name = L"Tabulate_Input";
			this->Tabulate_Input->Size = System::Drawing::Size(100, 20);
			this->Tabulate_Input->TabIndex = 1;
			// 
			// TabulateButton
			// 
			this->TabulateButton->Location = System::Drawing::Point(23, 133);
			this->TabulateButton->Name = L"TabulateButton";
			this->TabulateButton->Size = System::Drawing::Size(75, 23);
			this->TabulateButton->TabIndex = 0;
			this->TabulateButton->Text = L"Tabulate";
			this->TabulateButton->UseVisualStyleBackColor = true;
			this->TabulateButton->Click += gcnew System::EventHandler(this, &MyForm::TabulateButton_Click);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(222, 71);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 95);
			this->listBox1->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(512, 311);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	// 0 - cos
	// 1 - height
	int whatChecked = 0;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			POINT A{}, B{}, C{};
			A.x = Convert::ToDouble(A1_Input->Text);
			A.y = Convert::ToDouble(A2_Input->Text);

			B.x = Convert::ToDouble(B1_Input->Text);
			B.y = Convert::ToDouble(B2_Input->Text);

			C.x = Convert::ToDouble(C1_Input->Text);
			C.y = Convert::ToDouble(C2_Input->Text);

			VECTOR BA{}, BC{}, CA{};
			BA.x = A.x - B.x;
			BA.y = A.y - B.y;
			BA.length = sqrt(pow(BA.x, 2) + pow(BA.y, 2));
			
			BC.x = C.x - B.x;
			BC.y = C.y - B.y;
			BC.length = sqrt(pow(BC.x, 2) + pow(BC.y, 2));
			
			CA.x = A.x - C.x;
			CA.y = A.y - C.y;
			CA.length = sqrt(pow(CA.x, 2) + pow(CA.y, 2));

			if (whatChecked)
			{
				double p = (BA.length + BC.length + CA.length) / 2;
				double h_a = (2 / BC.length) * sqrt(p*(p-BC.length)*(p-BA.length)*(p-CA.length));
				Result->Text = Convert::ToString(h_a);
			}
			else {
				double cos = (BC.x * BA.x + BC.y * BA.y) / (BC.length * BA.length);
				Result->Text = Convert::ToString(cos / 2);
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		
	}
	
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		whatChecked = 0;
	}
	private: System::Void Height_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		whatChecked = 1;
	}

private: System::Void Find_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		double X = Convert::ToDouble(X_textBox->Text);
		double X1 = Convert::ToDouble(X1_textBox->Text);
		double X2 = Convert::ToDouble(X2_textBox->Text);
		double X3 = Convert::ToDouble(X3_textBox->Text);
		double Y = Convert::ToDouble(Y_textBox->Text);
		double Y1 = Convert::ToDouble(Y1_textBox->Text);
		double Y2 = Convert::ToDouble(Y2_textBox->Text);
		double Y3 = Convert::ToDouble(Y3_textBox->Text);
		if (X==X3)
		{
			MessageBox::Show(Convert::ToString(Y3*0.5));
		}
		else if (X2<=X && X<=X3) {
			double result = (1.25 * Y2) * ((X - X1) / (X3 - X1)) * (Y2 - Y1);
			MessageBox::Show(Convert::ToString(result));
		}
		else if (X1<=X && X<=X2)
		{
			double result = (0.75 * Y1) * ((X +X1) / (X2 - X1)) * (Y2 - Y3);
			MessageBox::Show(Convert::ToString(result));
		}
		else {
			MessageBox::Show("NO");
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void TabulateButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int N = Convert::ToDouble(Tabulate_Input->Text);
		double a = -1.0, b = 2.0, x = a;
		listBox1->Items->Clear();
		while (x <= b) {
			x += (b - a) / N;
			listBox1->Items->Add(Convert::ToString((exp(2.0 * x) + exp(-x)) / 4.0));
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);

	}
	

}
};
}
