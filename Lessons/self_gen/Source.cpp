#include <conio.h>
#include <iostream>
#include <cmath>
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

	string name;
	cout << " Enter your name";
	getline(cin, name);// ������ ���� ������ � �������, � �������� � ���������� name
	cout << "your name is"<< name;
	if (name.length() !=0)// ���� ������ ������ �� ����� 0 �� ������������ ������ �� ���� - ������ "������"
		cout << "your name is" << name;
	else cout << "Error";
	(void)_getch();
	return 0;
}
