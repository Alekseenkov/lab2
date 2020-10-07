#pragma once

#include <ctime>
#include <cstdlib> 
void Bublesort(int* arr, int size)
{
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
}


namespace LAB2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
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
	private: System::Windows::Forms::Label^ n0;
	private: System::Windows::Forms::Label^ n1;
	private: System::Windows::Forms::Label^ step;
	private: System::Windows::Forms::TextBox^ _n0;
	private: System::Windows::Forms::TextBox^ _n1;
	private: System::Windows::Forms::TextBox^ _step;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox1;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->n0 = (gcnew System::Windows::Forms::Label());
			this->n1 = (gcnew System::Windows::Forms::Label());
			this->step = (gcnew System::Windows::Forms::Label());
			this->_n0 = (gcnew System::Windows::Forms::TextBox());
			this->_n1 = (gcnew System::Windows::Forms::TextBox());
			this->_step = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(924, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"выполнить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"¬ведите значени€ ";
			// 
			// n0
			// 
			this->n0->AutoSize = true;
			this->n0->Location = System::Drawing::Point(25, 45);
			this->n0->Name = L"n0";
			this->n0->Size = System::Drawing::Size(28, 17);
			this->n0->TabIndex = 2;
			this->n0->Text = L"n0:";
			// 
			// n1
			// 
			this->n1->AutoSize = true;
			this->n1->Location = System::Drawing::Point(25, 84);
			this->n1->Name = L"n1";
			this->n1->Size = System::Drawing::Size(28, 17);
			this->n1->TabIndex = 3;
			this->n1->Text = L"n1:";
			// 
			// step
			// 
			this->step->AutoSize = true;
			this->step->Location = System::Drawing::Point(25, 119);
			this->step->Name = L"step";
			this->step->Size = System::Drawing::Size(36, 17);
			this->step->TabIndex = 4;
			this->step->Text = L"шаг:";
			// 
			// _n0
			// 
			this->_n0->Location = System::Drawing::Point(78, 45);
			this->_n0->Name = L"_n0";
			this->_n0->Size = System::Drawing::Size(100, 22);
			this->_n0->TabIndex = 5;
			// 
			// _n1
			// 
			this->_n1->Location = System::Drawing::Point(78, 84);
			this->_n1->Name = L"_n1";
			this->_n1->Size = System::Drawing::Size(100, 22);
			this->_n1->TabIndex = 6;
			// 
			// _step
			// 
			this->_step->Location = System::Drawing::Point(78, 119);
			this->_step->Name = L"_step";
			this->_step->Size = System::Drawing::Size(100, 22);
			this->_step->TabIndex = 7;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(712, 55);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(424, 512);
			this->dataGridView1->TabIndex = 8;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(78, 200);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(526, 351);
			this->chart1->TabIndex = 9;
			this->chart1->Text = L"chart1";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(244, 40);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(38, 21);
			this->checkBox1->TabIndex = 10;
			this->checkBox1->Text = L"1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(288, 13);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(304, 149);
			this->textBox1->TabIndex = 11;
			this->textBox1->Text = L"for (int i = 0; i < size - 1; i++) {\r\nfor (int j = 0; j < size - i - 1; j++) {\r\ni"
				L"f (arr[j] > arr[j + 1]) {\r\ntemp = arr[j];\r\narr[j] = arr[j + 1];\r\narr[j + 1] = te"
				L"mp;}\r\n}\r\n}";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1148, 579);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->_step);
			this->Controls->Add(this->_n1);
			this->Controls->Add(this->_n0);
			this->Controls->Add(this->step);
			this->Controls->Add(this->n1);
			this->Controls->Add(this->n0);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		///кнопка выполнить 
		
		int _N0 = Convert::ToInt32(_n0->Text);
		int _N1 = Convert::ToInt32(_n1->Text);
		int Step = Convert::ToInt32(_step->Text);

		

		int count =0;
		for (int i = _N0; i <= _N1; )
		{
			count++;
			i += Step;
		}
		

		unsigned int *start_time = new unsigned int[count+1];
		unsigned int* search_time = new unsigned int[count+1];
		int* _sise_ = new int[count];
		

		int size= _N0;

		for (int i =1; i < count+1 ; i++)
		{
			_sise_[i] = size;
			int* arr = new int[size];
			for (int  i = 0; i < size; i++)
				arr[i] = rand();  
			start_time[i] = clock();

			Bublesort(arr, size);
			
			search_time[i] = start_time[i] - start_time[(i == 1) ? 1 : i-1 ]; 
			size += Step;
				delete[] arr;
		}
		
		dataGridView1->RowCount = count+3;
		dataGridView1->ColumnCount = 3;
		dataGridView1->Rows[0]->Cells[0]->Value = "N";
		dataGridView1->Rows[0]->Cells[1]->Value = "T[N]";
		dataGridView1->Rows[0]->Cells[2]->Value = "nacalo";

		for (int i = 1; i < count; i++)
		{
			dataGridView1->Rows[i]->Cells[0]->Value =  _sise_[i].ToString();
			dataGridView1->Rows[i]->Cells[1]->Value = search_time[i].ToString();
			dataGridView1->Rows[i]->Cells[2]->Value = start_time[i].ToString();

		}

		
		for (int i = 1; i < count - 1; i++)
			chart1->Series[0]->Points->AddXY(_sise_[i], search_time[i]);
	
			
		delete[] start_time;
		delete[] search_time;
	}
};
}
