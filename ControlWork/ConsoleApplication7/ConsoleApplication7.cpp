#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
using std::cout; 
using std::cin;

int main(void)
{
	char ch;
	FILE* File;
	char filename[40];
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << " Введите имя файла: ";
	cin.getline(filename, 39);//считываем имя файла
	File = fopen(filename, "r");//открываем файл для записи
	cout << " Данные в файле: ";
	while ((ch = fgetwc(File)) != EOF) //посимвольное чтение
	{
		SetConsoleCP(CP_UTF8);//кодировка 
		SetConsoleOutputCP(CP_UTF8);//в UTF8
		printf("%c ", ch);
	}
	cout << "\n";
	fclose(File);//закрываем файл
	system("pause");
}
