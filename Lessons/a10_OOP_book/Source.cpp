#include "Book.h"
#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
	int currentPage;
	char choise;
	setlocale(LC_ALL, "ru");
	Book a;
	cout << "���� ����� �����: " << a.getMax_pages()<< " �������." << endl;
	cout << "������� ����� �������� �� ������ �������?" << endl;
	while (true)
	{
		cin >> currentPage;
		if (currentPage <= 265 && currentPage >= 1)
		{
			a.setPage(currentPage); break;
		}
		else cout << "Error! Incorrect pages number." << endl;
	}
	system("cls");
		cout << "�� ������ ��: " << a.getPage() << " �������" << endl << endl;
		cout << "������� f, ��� �� ������������ �������� ������, ��� b, ��� �� ��������� �����. " << endl <<
		"��� �� �� ������ �������� �������� ����� m, ������� � �������� ��� ������ g ,��� ������� � �������� �������� - s" << endl;
	while (true)
	{
		cin >> choise;
		if (choise == 'f')
		{
			if (a.getPage() < 265)
			{
				a.Forward(a.getPage());
				cout << "�� ������ ��: " << a.getPage() << " �������" << endl;
			}
			else cout << "Error, you are on the last page" << endl;
		}
		else if (choise == 'b')
		{
			if (a.getPage() > 1)
			{
				a.Back(a.getPage());
				cout << "�� ������ ��: " << a.getPage() << " �������" << endl;
			}
			else cout << "Error, you are on the first page" << endl;
		}
		else if (choise == 's')
		{
			cout << "������� ����� �������� �� ������ �������?" << endl;
			cin >> currentPage;
			if (currentPage <= 265 && currentPage >= 1)
			{
				a.setPage(currentPage);
			}
			else cout << "Error! Incorrect pages number." << endl;
			cout << "�� ������ ��: " << a.getPage() << " ��������" << endl << endl;
		}
		else if (choise == 'm')
		{
			a.SetBookmark(a.getPage());
			cout << "�������� �����������." << endl;
		}
		else if (choise == 'g')
		{
			char c;
			cout << "������� �������� ����� �� " << a.GetBookmark() << " ��������." << "�� ������ ������� �� ��� ��������? (y/n)" << endl;
			cin >> c;
			if (c == 'y')
			{
				currentPage = a.GetBookmark();
				a.setPage(currentPage);
				cout << "�� ������ ��: " << a.getPage() << " ��������" << endl << endl;
			}

		}
	}

	
	
}