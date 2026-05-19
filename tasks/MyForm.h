#pragma once

namespace tasks {

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(599, 201);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Задание 2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 8;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(399, 80);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Создать файл";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(7, 79);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(385, 84);
			this->listBox1->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(446, 51);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Сброс";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(446, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(370, 22);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(70, 22);
			this->textBox4->TabIndex = 3;
			this->textBox4->Text = L"Востреб.";
			this->textBox4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox4_MouseClick);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(282, 21);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(82, 22);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"Стоимость";
			this->textBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox3_MouseClick);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(217, 22);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(59, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"Кол-во";
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox2_MouseClick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(7, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(204, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Название";
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox1_MouseClick);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->chart1);
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Location = System::Drawing::Point(13, 221);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(724, 322);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Задание 3";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(10, 294);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(201, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Открыть доп. сведения";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(418, 16);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(300, 300);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(10, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(402, 265);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellEndEdit);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(749, 555);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: ref struct msg {
		String^ name;
		String^ count;
		String^ price;
		String^ relevance;
	};

	private: array<msg^>^ data = gcnew array<msg^>(10);
	private: int size = 0;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (size < 10) {
			msg^ str = gcnew msg;
			str->name = textBox1->Text;
			str->count = textBox2->Text;
			str->price = textBox3->Text;
			str->relevance = textBox4->Text;

			data[size] = str;
			size++;
			listBox1->Items->Add(str->name + " " + str->count + " " + str->price + " " + str->relevance);
		}
		else {
			label1->Text = "Массив переполнен.";
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			auto word1 = gcnew Microsoft::Office::Interop::Word::Application();
			word1->Visible = true;
			auto t = Type::Missing;
			auto document1 = word1->Documents->Add(t, t, t, t);

			word1->Selection->TypeText("\t\t\t\tТаблица книг");
			System::Object^ t1 = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;
			System::Object^ t2 = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitContent;
			word1->ActiveDocument->Tables->Add(word1->Selection->Range, size + 1, 4, t1, t2);

			word1->ActiveDocument->Tables[1]->Cell(1, 1)->Range->InsertAfter("Название");
			word1->ActiveDocument->Tables[1]->Cell(1, 2)->Range->InsertAfter("Количество");
			word1->ActiveDocument->Tables[1]->Cell(1, 3)->Range->InsertAfter("Стоимость");
			word1->ActiveDocument->Tables[1]->Cell(1, 4)->Range->InsertAfter("Востребованность");

			for (int i = 1; i < size + 1; i++) {
				try {
					word1->ActiveDocument->Tables[1]->Cell(i + 1, 1)->Range->InsertAfter(data[i - 1]->name);
					word1->ActiveDocument->Tables[1]->Cell(i + 1, 2)->Range->InsertAfter(data[i - 1]->count);
					word1->ActiveDocument->Tables[1]->Cell(i + 1, 3)->Range->InsertAfter(data[i - 1]->price);
					word1->ActiveDocument->Tables[1]->Cell(i + 1, 4)->Range->InsertAfter(data[i - 1]->relevance);
				}
				catch (System::Runtime::InteropServices::COMException^ e) {
					label1->Text = i.ToString() + " " + e->Message;
					i--;
				}
			}

			Object^ filename = "C:\\Users\\psich\\OneDrive\\Рабочий стол\\lab25_COM_z2.docx";
			word1->ActiveDocument->SaveAs(filename, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);
		}
		catch (System::Exception^ e) {
			label1->Text = e->Message;
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "Название";
		textBox2->Text = "Кол-во";
		textBox3->Text = "Стоимость";
		textBox4->Text = "Востреб.";
	}

	private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = "";
	}
	private: System::Void textBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox2->Text = "";
	}
	private: System::Void textBox3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox3->Text = "";
	}
	private: System::Void textBox4_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox4->Text = "";
	}


	//Задание 3
	private: DataTable^ table;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		table = gcnew DataTable();
		table->Columns->Add("Название", String::typeid);
		table->Columns->Add("Июль", String::typeid);
		table->Columns->Add("Август", String::typeid);
		table->Columns->Add("Сентябрь", String::typeid);
		table->Columns->Add("Октябрь", String::typeid);
		table->Columns->Add("Ноябрь", String::typeid);
		table->Columns->Add("Декабрь", String::typeid);


		DataRow^ row;
		for (int i = 0; i < 5; i++) {
			row = table->NewRow();
			row["Название"] = "Изделие " + (i + 1);

			for (int j = 1; j < 7; j++) {
				row[j] = j;
			}
			table->Rows->Add(row);
		}
		dataGridView1->DataSource = table;

		chart1->Titles->Add("Выпуск товаров");
		chart1->Series["Series1"]->XValueMember = "Изделия";
		chart1->Series["Series1"]->YValueMembers = "Средний выпуск";
		chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
		chart1->Series["Series1"]->Color = Color::Aqua;
		chart1->Series["Series1"]->IsVisibleInLegend = false;

		System::Windows::Forms::DataGridViewCellEventArgs^ er;
		dataGridView1_CellEndEdit(sender, er);
	}

	private: array<double>^ avg = gcnew array<double>(5);
	private: System::Void dataGridView1_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		for (int i = 0; i < 5; i++) {
			avg[i] = 0;
		}
		chart1->Series["Series1"]->Points->Clear();

		try {
			for (int i = 0; i < 5; i++) {
				DataRow^ row = table->Rows[i];

				for (int j = 1; j < 7; j++) {
					int num = Convert::ToInt32(row[j]);
					avg[i] += num;
				}
				avg[i] /= 6;

				chart1->Series["Series1"]->Points->AddXY(row[0], avg[i]);
			}
		}
		catch (System::FormatException^ e) {
			chart1->Series["Series1"]->Points->Clear();
			MessageBox::Show("Введите вещественное число.", "Внимание");
		}
		catch (...) {
			chart1->Series["Series1"]->Points->Clear();
			MessageBox::Show("Непредвиденная ошибка.", "Внимание");
		}
	}

	private: void calcParam(int& sum_all, array<int>^& months_sum, array<int>^& products_sum, array<int>^& products_max) {
		try {
			for (int i = 0; i < 5; i++) {
				DataRow^ row = table->Rows[i];

				for (int j = 1; j < 7; j++) {
					int num = Convert::ToInt32(row[j]);

					if (j == 1) {
						products_max[i] = num;
					}
					if (num > products_max[i]) {
						products_max[i] = num;
					}

					months_sum[j - 1] += num;
					products_sum[i] += num;
					sum_all += num;
				}
			}
		}
		catch (System::FormatException^ e) {
			MessageBox::Show("Введите вещественное число.", "Внимание");
		}
		catch (...) {
			MessageBox::Show("Непредвиденная ошибка.", "Внимание");
		}
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int sum_all = 0;
			array<int>^ months_sum = gcnew array<int>(6);
			array<int>^ products_sum = gcnew array<int>(5);
			array<int>^ products_max = gcnew array<int>(5);

			calcParam(sum_all, months_sum, products_sum, products_max);


			auto word2 = gcnew Microsoft::Office::Interop::Word::Application();
			word2->Visible = true;
			auto t = Type::Missing;
			auto document1 = word2->Documents->Add(t, t, t, t);

			word2->Selection->TypeText("\t\t\t\tВыпуск товаров");
			System::Object^ t1 = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;
			System::Object^ t2 = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitContent;
			word2->ActiveDocument->Tables->Add(word2->Selection->Range, 7, 7, t1, t2);

			word2->ActiveDocument->Tables[1]->Cell(1, 1)->Range->InsertAfter("Название");
			word2->ActiveDocument->Tables[1]->Cell(1, 2)->Range->InsertAfter("Июль");
			word2->ActiveDocument->Tables[1]->Cell(1, 3)->Range->InsertAfter("Август");
			word2->ActiveDocument->Tables[1]->Cell(1, 4)->Range->InsertAfter("Сентябрь");
			word2->ActiveDocument->Tables[1]->Cell(1, 5)->Range->InsertAfter("Октябрь");
			word2->ActiveDocument->Tables[1]->Cell(1, 6)->Range->InsertAfter("Ноябрь");
			word2->ActiveDocument->Tables[1]->Cell(1, 7)->Range->InsertAfter("Декабрь");

			DataRow^ row;
			for (int i = 1; i < 6; i++) {
				try {
					row = table->Rows[i - 1];
					for (int j = 0; j < 7; j++) {
						word2->ActiveDocument->Tables[1]->Cell(i + 1, j + 1)->Range->InsertAfter(row[j]->ToString());
					}
				}
				catch (System::Runtime::InteropServices::COMException^ e) {
					MessageBox::Show("Ошибка COM", "Внимание");
				}
			}

			word2->ActiveDocument->Tables[1]->Cell(7, 1)->Range->InsertAfter("Проценты");
			for (int i = 1; i < 7; i++) {
				word2->ActiveDocument->Tables[1]->Cell(7, i + 1)->Range->InsertAfter(Math::Round(((double)months_sum[i - 1] / sum_all * 100), 2).ToString() + "%");
			}

			Object^ t3 = Microsoft::Office::Interop::Word::WdUnits::wdLine;
			Int32^ str7 = 7;
			word2->Selection->MoveDown(t3, str7, t);
			word2->Selection->TypeText("\n\t\t\t\tДоп. параметры");
			word2->ActiveDocument->Tables->Add(word2->Selection->Range, 6, 4, t1, t2);

			word2->ActiveDocument->Tables[2]->Cell(1, 1)->Range->InsertAfter("Название");
			word2->ActiveDocument->Tables[2]->Cell(1, 2)->Range->InsertAfter("Среднее");
			word2->ActiveDocument->Tables[2]->Cell(1, 3)->Range->InsertAfter("Максимальное");
			word2->ActiveDocument->Tables[2]->Cell(1, 4)->Range->InsertAfter("Сумма");

			for (int i = 1; i < 6; i++) {
				try {
					row = table->Rows[i - 1];
					word2->ActiveDocument->Tables[2]->Cell(i + 1, 1)->Range->InsertAfter(row[0]->ToString());
					word2->ActiveDocument->Tables[2]->Cell(i + 1, 2)->Range->InsertAfter(avg[i - 1].ToString());
					word2->ActiveDocument->Tables[2]->Cell(i + 1, 3)->Range->InsertAfter(products_max[i - 1].ToString());
					word2->ActiveDocument->Tables[2]->Cell(i + 1, 4)->Range->InsertAfter(products_sum[i - 1].ToString());
				}
				catch (System::Runtime::InteropServices::COMException^ e) {
					MessageBox::Show("Ошибка COM", "Внимание");
				}
			}

			Object^ filename = "C:\\Users\\psich\\OneDrive\\Рабочий стол\\lab25_COM_z3.docx";
			word2->ActiveDocument->SaveAs(filename, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);
		}
		catch (System::Exception^ e) {
			MessageBox::Show(e->Message, "Ошибка");
		}
	}
};
}
