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
	string str1;//������ ��������� ����������
	cout << "Enter string: "<< endl;
	getline(cin,str1);//������ ������ � ����������
	reverse(str1.begin(), str1.end());//���������� ������
	cout<< str1 <<endl;
	*/
	
	
	setlocale(LC_ALL, "Russian");
	string str1;//������ ��������� ����������
	char a;
	
	cout << "Enter string: " << endl;
	getline(cin, str1);//������ ������ � ����������
	cout << "������� ������� ������: " << endl;
	cin >> a;
	int n = size(str1);
	int ct = 0;
	for (int i(0); i < n; i++)
		if (str1[i] == a)
			ct++;
	cout << "� ������: "<< ct << " �������� " << a << endl;

	(void)_getch();
	return 0;
}