#include <conio.h>
#include <iostream>


using std::cin;
using std::cout;
using std::endl;
using std::ios_base;

int main()
{
	setlocale(LC_ALL, "Russian");

	/*
	int a, b;
	
	cout << "������� a,b:";
	cin >> a >> b;
	cout << "a <= b " << (a <= b) << endl;// ���������� "������ ��� �����"
	cout << "a >= b " << (a >= b) << endl;
	cout << "a == b " << (a == b) << endl; // ���������� ���������
	cout << "a != b " << (a != b) << endl; // ���������� �� ���������
	cout << "a < b " << (a < b) << endl;
	cout << "a > b " << (a > b) << endl;
	*/

	/*double BMI;

	cout << "Enter BMI";
	cin >> BMI;

	if (BMI < 10)
	{
		cout << "Good";
	} 
	else {cout << "Warning"; } */
/*
	bool a;
	bool b;
	cin >> a;
	cin >> b;

	cout.setf(ios_base::boolalpha);// ���������� ��� ������ �������� true false ������ 1 � 0
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "!a = " << (!a) << endl; // ���������� ���������
	cout << "a || b= " << (a || b) << endl;// ���������� ��������
	cout << "a && b= " << (a && b) << endl;// ���������� ���������
	*/

	int Ruble;

	cout << "������� ���������� ������: ";
	cin >> Ruble;

	cout << "� ��� " << Ruble << " ";

	if (Ruble < 0)// �������� �������� �������, ��� ���������� ������ ������ 0
	{
		cout << "���� �������� �������������";
		(void)_getch();
		return 1;
	}
	if ((Ruble % 100) >= 11 && (Ruble % 100) <= 19)// % - ������� � �������� �� 100 ���������� ��� ����������� ��������� ���� �����
	{
		cout << "������! \n";
	}
	else
	{ 
		switch (Ruble % 10) //������� ��������� ����� �����
		{
		case 1: cout << "�����!\n"; break;//������ ������ ����� ���� ����� ����� ����� 1
			//break ������� �� ������� ��������� switch
		case 2: cout << "�����!\n"; //� ���� ������ ����� ���������� �� ��������� ������, ���� �� �������� break
		case 3: cout << "�����!\n";
		case 4: cout << "�����!\n"; break;

		default: cout << "������!\n";
		}
	}




	(void)_getch();
	return 0;
}