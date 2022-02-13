#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;

using std::cin;
using std::cout;
using std::endl;
using std::pow;
using std::ios_base;


int main()
{
	
	setlocale(LC_ALL, "Russian");
/*
	string str1;//задаем строковую переменную
	cout << "Enter string: "<< endl;
	getline(cin,str1);//вводим строку с клавиатуры
	reverse(str1.begin(), str1.end());//инверируем строку
	cout<< str1 <<endl;
	*/
	
	
	setlocale(LC_ALL, "Russian");
	string str1;//задаем строковую переменную
	char a;
	
	cout << "Enter string: " << endl;
	getline(cin, str1);//вводим строку с клавиатуры
	cout << "Введите искомый символ: " << endl;
	cin >> a;
	int n = size(str1);
	int ct = 0;
	for (int i(0); i < n; i++)
		if (str1[i] == a)
			ct++;
	cout << "В строке: "<< ct << " символов " << a << endl;

	(void)_getch();
	return 0;
}