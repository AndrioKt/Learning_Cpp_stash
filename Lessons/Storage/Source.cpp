#include<conio.h>
#include<iostream>

using std::cout; 
using std::cin;
using std::endl;


int main()
{
	setlocale(LC_ALL, "Russian");
	int apple, carrots, potaetoes; // ������ ���������� (����������� ������� ������)
	/* ��� �� ����� �������������� (������� � ����� ��������� ������):
	int apple = 7 ��� 
	int apple(7) */
	apple = 7; //���������� ������������� ���������� �������� 7
	double Salary(12.5);//���������� �� ������������� ���������� �������� 7
	char C = 'A'; // ���������� ����������� ��������
	bool T = true, F = false;// ���������� ��������� ��������
	carrots = 12;
	potaetoes = 160;
	cout << "apple: " << apple <<endl;
	cout << "carrots: " << carrots << endl;
	cout << "potaetoes: " << carrots << endl;
	cout << "Salary: " << Salary << endl;
	cout << "C: " << C << endl;
	cout << "T,F: " << T << F << endl;
	cout << "������� ���������� �����: " << endl;
	cin >> C;// �������� ���� �������� ���������� � ������� ��� ������ ����������
	cout << "You have: " << C << " apples\n\n\n" << endl;
	const int Size = 1024;// �������� �� ���������� ��������
	int Gigabytes;
	cout << "������� ���������� ��������";
	cin >> Gigabytes;
	int Megabytes = Gigabytes * Size;// ������ ������� ������� ��������
	int Kbytes = Megabytes * Size;
	long double bytes = (double)Kbytes * (double)Size;//long double- �������� ����������� ��� �������� ����� ������ + ���������� � ���� �������� ��������


	
	cout << "Gigabytes: " << Gigabytes << endl;
	cout << "Megabytes: " << Megabytes << endl;
	cout << "Kbytes: " << Kbytes << endl;
	cout << "bytes: " << bytes << endl;
	(void)_getch();// ����������� �������
	return 0;
} 