#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstring>
#include <cctype>
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
	char str[80] = "Hello";  // ������ ������ �� 80 �������� ()����� �������� 79 ������� + ������� ���� /0)
	cout << "str: \"" << str << "\"\n";
	
	char str1[80], str2[80];
	cout << "Enter string: ";
	cin.getline(str1, 80);// ������ ������ � str, ��������� ������ �� 80 (79 + ������� ����) ��������
	cout << "Enter string2: ";
	cin.getline(str2, 80);
	system("cls");//������� ������
	cout << "Str1: \"" << str1 << "\"\n";
	cout << "Str2: \"" << str2 << "\"\n";

	strcpy_s(str2, str1);//�������� ������ ������ �� ������ � �����������
	cout << "Str2: \"" << str2 << "\"\n";

	if (!strcmp(str1, str2))//��������� �����
		cout << "!!!!";
	else cout << "&&&&";

	strcat_s(str2, str1);//������� � ����� ������ 2 ������ 1
	cout << "Str2: \"" << str2 << "\"\n";
*/


	// *** ������: ���������� ���� � ������ ****
	/*
	char str1[80];
	cout << "Enter string: ";
	cin.getline(str1, 80);


	int numwords = 0;
	bool inword = false;// ������������� ������ ������ (����� �������� false ���, ��� ��� ����, ���� ����� ������)

	for (int i(0); str1[i] != '\0'; i++)// �������� ��� ������ ����� ������� ��������
	{
		if (isalpha(str1[i]) && !(inword))// ���� �������� ����� � �� ����� �� ���� ��� ����� �� ����� ����������� ������� ���������� ����
		{
			numwords++;
			inword = true;
		}
		if (!isalpha(str1[i]))
			inword = false;
	}
	cout << numwords << endl;
	*/

	// ������ **** ������ ������, ������� ����� ���������� �� �������****

	/*
	int a[10][3]; //��������� ������ �� 30 ��������� ������ - �������

	for( int i(0); i < 3; i++)
		for (int j; j < 2; j++)
		{
			cout << a[i][j];

		}
		*/
	char str[100] = "";
	char c = '|', c1;//���������� �������
	int index = 0;//������ �������������� �������

	do
	{
	c1 = (char)_getch();// ������������ �������� � ���������� � ������� ��� ���������� ����� A ��� D
	system("cls");//���������� ���������� ������
		if (c1 == 'd' || c1 == 'D')// ��� ����� ������� d ��� D
		{
			for (int i(0); i <= index; i++)// ����������� ���� �� 
			{
				if (i != index)//���� i �� ����� �������, ����� ����������� ���������
					str[i] = ' ';//���������� ���������
				else str[i] = c;// ����� ����� �������� ������
			}
			str[index + 1] = '\0';// �������� ������� ����
			index++;
		}
		if (c1 == 'a' || c1 == 'A')
		{
			for (int i(0); i < index; i++)// ����������� ���� �� 
			{
				if (i != index-1)
					str[i] = ' ';
				else str[i] = c;
			}
			str[index] = '\0';
			index--;

		}

		cout << str;
	} while (c1 != 'q');
	
	(void)_getch();
	return 0;
}