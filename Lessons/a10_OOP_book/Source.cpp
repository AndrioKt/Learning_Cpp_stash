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
	cout << "Ваша книга имеет: " << a.getMax_pages()<< " страниц." << endl;
	cout << "Введите какую страницу вы хотите открыть?" << endl;
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
		cout << "Вы сейчас на: " << a.getPage() << " странце" << endl << endl;
		cout << "Введите f, что бы перелистнуть страницу вперед, или b, что бы вернуться назад. " << endl <<
		"Так же вы можете оставить закладку введя m, перейти к закладке при помощи g ,или перейти к желаемой странице - s" << endl;
	while (true)
	{
		cin >> choise;
		if (choise == 'f')
		{
			if (a.getPage() < 265)
			{
				a.Forward(a.getPage());
				cout << "Вы сейчас на: " << a.getPage() << " странце" << endl;
			}
			else cout << "Error, you are on the last page" << endl;
		}
		else if (choise == 'b')
		{
			if (a.getPage() > 1)
			{
				a.Back(a.getPage());
				cout << "Вы сейчас на: " << a.getPage() << " странце" << endl;
			}
			else cout << "Error, you are on the first page" << endl;
		}
		else if (choise == 's')
		{
			cout << "Введите какую страницу вы хотите открыть?" << endl;
			cin >> currentPage;
			if (currentPage <= 265 && currentPage >= 1)
			{
				a.setPage(currentPage);
			}
			else cout << "Error! Incorrect pages number." << endl;
			cout << "Вы сейчас на: " << a.getPage() << " странице" << endl << endl;
		}
		else if (choise == 'm')
		{
			a.SetBookmark(a.getPage());
			cout << "Закладка установлена." << endl;
		}
		else if (choise == 'g')
		{
			char c;
			cout << "Текущая закладка лежит на " << a.GetBookmark() << " странице." << "Вы хотите перейти на эту страницу? (y/n)" << endl;
			cin >> c;
			if (c == 'y')
			{
				currentPage = a.GetBookmark();
				a.setPage(currentPage);
				cout << "Вы сейчас на: " << a.getPage() << " странице" << endl << endl;
			}

		}
	}

	
	
}