#pragma once
#include "Function.h" //Подключение заголовков файлов Fuction.h и Fuction.cpp из DLL библиотеки
#include "Function.cpp"
namespace Project3
{
	//Подключение пространста имён System
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Threading;


	//Создание управляющего класса MyForm
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	//Создание 10 потоков от 0 до 9
	private: Thread^ thr0;
	private: Thread^ thr1;
	private: Thread^ thr2;
	private: Thread^ thr3;
	private: Thread^ thr4;
	private: Thread^ thr5;
	private: Thread^ thr6;
	private: Thread^ thr7;
	private: Thread^ thr8;
	private: Thread^ thr9;
	//Создание 10 потоков от 0 до 9

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button6;
	private: System::ComponentModel::IContainer^ components;

	public:
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(22, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Текущая дата и время:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(145, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 1;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(8, 108);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(436, 165);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Сортировка файла ";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->richTextBox1->Location = System::Drawing::Point(9, 32);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(277, 116);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->button2->Location = System::Drawing::Point(292, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 55);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Очистить список";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->button1->Location = System::Drawing::Point(292, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 55);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Отобразить содержимое файла";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(283, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Заготовленное содержимое файла .txt до сортировки:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(358, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Сделал данную программу Борисов Даниил Алексеевич,  группа 590\r\n";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->richTextBox2);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Location = System::Drawing::Point(8, 279);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(436, 162);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Содержимое файла .txt после сортировки в файле .csv:";
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->richTextBox2->Location = System::Drawing::Point(9, 19);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(277, 105);
			this->richTextBox2->TabIndex = 3;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox2_TextChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->button4->Location = System::Drawing::Point(292, 20);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 104);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Очистить список";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->button3->Location = System::Drawing::Point(6, 130);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(422, 23);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Выполнить сортировку и загрузить в файл .csv";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->button5->Location = System::Drawing::Point(14, 47);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(429, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Заранее создать файлы расширения .txt и .csv";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->button6->Location = System::Drawing::Point(14, 77);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(430, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Удалить файлы .txt и .csv";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(451, 453);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"Программа v1.3";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		//Инициализация различных кнопок, располеженных на форме
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) { timer1->Start(); }
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		//Данный Label отвечает за вывод текущего времени
		DateTime dtTmp = DateTime::Now; //Инициализация формата времени
		label2->Text = dtTmp.ToString("g");//Вывод в Label
	}

	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {}
	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
	    //Данная кнопка отвечает за прочтение файла FNACH.txt - файл в котором находятся заготовленные буквы
		try 
		{
			ifstream File;
			File.open("FNACH.txt");
			String^ FILE = "FNACH.txt";
			StreamReader^ filERead = File::OpenText(FILE);
			richTextBox1->Text = filERead->ReadToEnd();
		}
		catch (Exception^ ex) { MessageBox::Show("Сначала создайте файлы .txt и .csv. Для этого нажмите кнопку: создать файлы заранее!"); }
	}

	//Две кнопки, расположенные ниже отвечают за очистку компонента richTextBox 1 и 2 от символов 
	public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { richTextBox1->Text = ""; }
	public: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { richTextBox2->Text = ""; }

	//В данной кнопке происходит следующее:
	public: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//Сначала создаются новые потоки которые отвечают за обработку векторов vector* от 0 до 9 
			thr0 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vector0));
			thr1 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vector1));
			thr2 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vector2));
			thr3 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vector3));
			thr4 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vector4));
			thr5 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vector5));
			thr6 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vector6));
			thr7 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vector7));
			thr8 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vector8));
			thr9 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vector9));
			//Далее запускаются потоки на выполнение 
			thr0->Start();
			thr1->Start();
			thr2->Start();
			thr3->Start();
			thr4->Start();
			thr5->Start();
			thr6->Start();
			thr7->Start();
			thr8->Start();
			thr9->Start();
			//В данном блоке кода в вектор VectorKONECNIY заносятся символы и происходит их сортировка
			char ArrayOfDataFile;
			vector<char> VectorKONECHIY;
			ifstream FILE, FileRead;
			FILE.open("FNACH.txt");
			for (int i = 0; i < 100; i++)
			{
				FILE >> ArrayOfDataFile;;
				VectorKONECHIY.push_back(ArrayOfDataFile);
			}
			sort(VectorKONECHIY.begin(), VectorKONECHIY.end());// непосредственно сортировка
			ZapisVVectorFKOCH("", VectorKONECHIY);
			FILE.close();
			//Вывод отсортированных символов на экран программы и в файл .csv
			FileRead.open("FKOCH.csv");
			String^ File1 = "FKOCH.csv";
			StreamReader^ filERead = File::OpenText(File1);
			richTextBox2->Text = filERead->ReadToEnd();
			SetFileAttributesA("FKOCH.csv", FILE_ATTRIBUTE_READONLY);
			FileRead.close();
			thr0->Sleep(2);
			thr1->Sleep(1);
			thr2->Sleep(1);
			thr3->Sleep(1);
			thr4->Sleep(1);
			thr5->Sleep(1);
			thr6->Sleep(1);
			thr7->Sleep(1);
			thr8->Sleep(1);
			thr9->Sleep(2);
	}
		  //Данная кнопка отвечает за выполнение параллельного процесса, это вызов косольного приложения, которое заранее создаёт файлы .txt и .csv с заготовленными символами
		  /*КОД ПРОГРАММЫ CreateFiles.exe НИЖЕ->
		  #include <fstream>
          int main()
          {
          std::ofstream FNACH("FNACH.txt"), FKON("FKOCH.csv");
          FNACH << "ASewnfnjwkwjfGGGHGHWeggwevghvgfvghevvfwghvfvwehgvhfgvwhfvFVWEVWBNFwewqpuEQwoienVHFFJDEWYWfmewwnlkNF" << std::endl;
          }
		  */
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		STARTUPINFO si;
		PROCESS_INFORMATION pi;
		GetStartupInfo(&si);
		CreateProcess(L"CreateFiles.exe", NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
	}
	//Данная кнопка удаляет ранее созданные файлы
		   /*КОД ПРОГРАММЫ RemoveFiles.exe НИЖЕ ->
		   #include <iostream>
           #include <fstream>
           #include <windows.h>
           int main()
           {
           SetFileAttributesA("FKOCH.csv", FILE_ATTRIBUTE_NORMAL);
           remove("FKOCH.csv"); remove("FNACH.txt");
           }
		   */
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		STARTUPINFO si;
		PROCESS_INFORMATION pi;
		GetStartupInfo(&si);
		CreateProcess(L"RemoveFiles.exe", NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	
	//В данной части кода инициализируются непосредственно вектора от vector0 до vector9 
	//В данные вектора заносятся символы из файла начального -> FNACH.txt и сортируются 
		   public: void vector0() 
		   {
				   char ArrayOfDataFile; //создаётся массив для хранения данных -> символов
				   ifstream File; //Инициализируется элемент File для изменения или прочтения файла
				   vector<char> Vector0; //Создаётся новый вектор 
				   File.open("FNACH.txt"); //Открывается указанный файл 
				   for (int i = 0; i < 10; i++) //Здесь Данные заносятся из файла в массив и из массива в вектор
				   {
					   File >> ArrayOfDataFile;
					   Vector0.push_back(ArrayOfDataFile);
				   }
				   sort(Vector0.begin(), Vector0.end()); //Происходит сортировка символов
				   ZapisVVector(Vector0);
				   File.close();
		   }
				 //И так далее до 9 вектора
			 public:  void vector1() 
			 {
				   char ArrayOfDataFile;
				   ifstream File;
				   vector<char> Vector1;
				   File.open("FNACH.txt");
				   for (int i = 0; i < 10; i++)
				   {
					   File >> ArrayOfDataFile;
					   Vector1.push_back(ArrayOfDataFile);
				   }
				   sort(Vector1.begin(), Vector1.end());
				   ZapisVVector(Vector1);
				   File.close();
			 }

			  public: void vector2() 
			  {
				   char ArrayOfDataFile;
				   ifstream File;
				   vector<char> Vector2;
				   File.open("FNACH.txt");
				   for (int i = 0; i < 10; i++)
				   {
					   File >> ArrayOfDataFile;
					   Vector2.push_back(ArrayOfDataFile);
				   }
				   sort(Vector2.begin(), Vector2.end());
				   ZapisVVector(Vector2);
				   File.close();
			  }

			public:   void vector3() 
			{
				   char ArrayOfDataFile;
				   ifstream File;
				   vector<char> Vector3;
				   File.open("FNACH.txt");
				   for (int i = 0; i < 10; i++)
				   {
					   File >> ArrayOfDataFile;
					   Vector3.push_back(ArrayOfDataFile);
				   }
				   sort(Vector3.begin(), Vector3.end());
				   ZapisVVector(Vector3);
				   File.close();
			}

			  public: void vector4() 
			  {
				   char ArrayOfDataFile;
				   ifstream File;
				   vector<char> Vector4;
				   File.open("FNACH.txt");
				   for (int i = 0; i < 10; i++)
				   {
					   File >> ArrayOfDataFile;
					   Vector4.push_back(ArrayOfDataFile);
				   }
				   sort(Vector4.begin(), Vector4.end());
				   ZapisVVector(Vector4);
				   File.close();
			  }

			 public:  void vector5() 
			 {
				   char ArrayOfDataFile;
				   ifstream File;
				   vector<char> Vector5;
				   File.open("FNACH.txt");
				   for (int i = 0; i < 10; i++)
				   {
					   File >> ArrayOfDataFile;
					   Vector5.push_back(ArrayOfDataFile);
				   }
				   sort(Vector5.begin(), Vector5.end());
				   ZapisVVector(Vector5);
				   File.close();
			 }

			 public:  void vector6() 
			 {
				   char ArrayOfDataFile;
				   ifstream File;
				   vector<char> Vector6;
				   File.open("FNACH.txt");
				   for (int i = 0; i < 10; i++)
				   {
					   File >> ArrayOfDataFile;
					   Vector6.push_back(ArrayOfDataFile);
				   }
				   sort(Vector6.begin(), Vector6.end());
				   ZapisVVector(Vector6);
				   File.close();
			 }

			  public: void vector7() 
			  {
				   char ArrayOfDataFile;
				   ifstream File;
				   vector<char> Vector7;
				   File.open("FNACH.txt");
				   for (int i = 0; i < 10; i++)
				   {
					   File >> ArrayOfDataFile;
					   Vector7.push_back(ArrayOfDataFile);
				   }
				   sort(Vector7.begin(), Vector7.end());
				   ZapisVVector(Vector7);
				   File.close();
			  }

			  public: void vector8() 
			  {
				   char ArrayOfDataFile;
				   ifstream File;
				   vector<char> Vector8;
				   File.open("FNACH.txt");
				   for (int i = 0; i < 10; i++)
				   {
					   File >> ArrayOfDataFile;
					   Vector8.push_back(ArrayOfDataFile);
				   }
				   sort(Vector8.begin(), Vector8.end());
				   ZapisVVector(Vector8);
				   File.close();
			  }

			  public: void vector9()
			  {
				   char ArrayOfDataFile;
				   ifstream File;
				   vector<char> Vector9;
				   File.open("FNACH.txt");
				   for (int i = 0; i < 10; i++)
				   {
					   File >> ArrayOfDataFile;
					   Vector9.push_back(ArrayOfDataFile);
				   }
				   sort(Vector9.begin(), Vector9.end());
				   ZapisVVector(Vector9);
				   File.close();
			  }
	//В данной части кода инициализируются непосредственно вектора от vector0 до vector9 
    //Данная кнопка удаляет созданные файлы
};
}
