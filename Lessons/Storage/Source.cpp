#include<conio.h>
#include<iostream>

using std::cout; 
using std::cin;
using std::endl;


int main()
{
	setlocale(LC_ALL, "Russian");
	int apple, carrots, potaetoes; // задача переменных (именнованые участки памяти)
	/* Так же можно иниализировать (создать и сразу присвоить данные):
	int apple = 7 или 
	int apple(7) */
	apple = 7; //присвоение целочисленной переменной значения 7
	double Salary(12.5);//присвоение не целочисленной переменной значения 7
	char C = 'A'; // присвоение символьного значения
	bool T = true, F = false;// присвоение двоичного значения
	carrots = 12;
	potaetoes = 160;
	cout << "apple: " << apple <<endl;
	cout << "carrots: " << carrots << endl;
	cout << "potaetoes: " << carrots << endl;
	cout << "Salary: " << Salary << endl;
	cout << "C: " << C << endl;
	cout << "T,F: " << T << F << endl;
	cout << "Введите количество яблок: " << endl;
	cin >> C;// задается ввод значения переменной в консоль при помощи клавиатуры
	cout << "You have: " << C << " apples\n\n\n" << endl;
	const int Size = 1024;// задается НЕ ИЗМЕНЯЕМОЕ значение
	int Gigabytes;
	cout << "введите количество гигабайт";
	cin >> Gigabytes;
	int Megabytes = Gigabytes * Size;// задаем формулу расчета мегабайт
	int Kbytes = Megabytes * Size;
	long double bytes = (double)Kbytes * (double)Size;//long double- повышает разрядность для большего числа знаков + присвоение в виде дробного значения


	
	cout << "Gigabytes: " << Gigabytes << endl;
	cout << "Megabytes: " << Megabytes << endl;
	cout << "Kbytes: " << Kbytes << endl;
	cout << "bytes: " << bytes << endl;
	(void)_getch();// закрепление консоли
	return 0;
} 