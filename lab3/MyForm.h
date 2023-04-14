#pragma once
#include <cstring>
#include <math.h>


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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ Result;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ A1_Input;
	private: System::Windows::Forms::TextBox^ A2_Input;
	private: System::Windows::Forms::TextBox^ C2_Input;

	private: System::Windows::Forms::TextBox^ B2_Input;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->A2_Input = (gcnew System::Windows::Forms::TextBox());
			this->C2_Input = (gcnew System::Windows::Forms::TextBox());
			this->B2_Input = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->A1_Input = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Result = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->panel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
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
			this->B1_Input->TabIndex = 2;
			// 
			// C1_Input
			// 
			this->C1_Input->Location = System::Drawing::Point(6, 92);
			this->C1_Input->Name = L"C1_Input";
			this->C1_Input->Size = System::Drawing::Size(38, 20);
			this->C1_Input->TabIndex = 3;
			// 
			// CountButton
			// 
			this->CountButton->Location = System::Drawing::Point(6, 141);
			this->CountButton->Name = L"CountButton";
			this->CountButton->Size = System::Drawing::Size(75, 23);
			this->CountButton->TabIndex = 4;
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
			this->Cos->TabIndex = 5;
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
			this->Height->TabIndex = 6;
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
			this->A_Label->Size = System::Drawing::Size(20, 13);
			this->A_Label->TabIndex = 8;
			this->A_Label->Text = L"A1";
			// 
			// B_Label
			// 
			this->B_Label->AutoSize = true;
			this->B_Label->Location = System::Drawing::Point(50, 69);
			this->B_Label->Name = L"B_Label";
			this->B_Label->Size = System::Drawing::Size(20, 13);
			this->B_Label->TabIndex = 9;
			this->B_Label->Text = L"B1";
			// 
			// C_Label
			// 
			this->C_Label->AutoSize = true;
			this->C_Label->Location = System::Drawing::Point(50, 95);
			this->C_Label->Name = L"C_Label";
			this->C_Label->Size = System::Drawing::Size(20, 13);
			this->C_Label->TabIndex = 10;
			this->C_Label->Text = L"C1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Має бути 2 числа через кому";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
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
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->Result);
			this->tabPage1->Controls->Add(this->C1_Input);
			this->tabPage1->Controls->Add(this->label1);
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
			this->A2_Input->TabIndex = 22;
			// 
			// C2_Input
			// 
			this->C2_Input->Location = System::Drawing::Point(76, 92);
			this->C2_Input->Name = L"C2_Input";
			this->C2_Input->Size = System::Drawing::Size(38, 20);
			this->C2_Input->TabIndex = 18;
			// 
			// B2_Input
			// 
			this->B2_Input->Location = System::Drawing::Point(76, 66);
			this->B2_Input->Name = L"B2_Input";
			this->B2_Input->Size = System::Drawing::Size(38, 20);
			this->B2_Input->TabIndex = 17;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(120, 95);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"C2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(120, 69);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"B2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(120, 43);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"A2";
			// 
			// A1_Input
			// 
			this->A1_Input->Location = System::Drawing::Point(6, 40);
			this->A1_Input->Name = L"A1_Input";
			this->A1_Input->Size = System::Drawing::Size(38, 20);
			this->A1_Input->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(233, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"C";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(233, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"B";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(233, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"A";
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
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(480, 261);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
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
			this->ResumeLayout(false);

		}
#pragma endregion
	int whatChecked = 0;
	int A1 = 0, A2 = 0, B1= 0, B2=0,C1=0,C2=0;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			double a1 = Convert::ToDouble(A1_Input->Text);
			double a2 = Convert::ToDouble(A2_Input->Text);
			double b1 = Convert::ToDouble(B1_Input->Text);
			double b2 = Convert::ToDouble(B2_Input->Text);
			double c1 = Convert::ToDouble(C1_Input->Text);
			double c2 = Convert::ToDouble(C2_Input->Text);
			
			double a_b = sqrt(pow(b1 - a1,2) + pow(b2 - a2,2));
			double b_c = sqrt(pow(c1 - b1, 2) + pow(c2 - b2, 2));
			double c_a = sqrt(pow(a1 - c1, 2) + pow(a2 - c2, 2));
			double skalar1 = a1 * b1 + a2 * b2;
			double skalar2 = b1 * c1 + b2 * c2;
			double module1 = sqrt(pow(a1,2)+pow(a2,2));
			double module2 = sqrt(pow(b1, 2) + pow(b2, 2));

			double idk =skalar1*skalar2/fabs(sqrt(a1*a1+a2*a2))/ fabs(sqrt(b1 * b1 + b2 * b2));
			Result->Text = Convert::ToString(idk);
			if (whatChecked)
			{
				
			}
			else {

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
};
}
