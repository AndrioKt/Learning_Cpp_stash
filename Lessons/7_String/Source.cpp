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
	char str[80] = "Hello";  // задаем массив из 80 символов ()можно записать 79 символо + нулевой байт /0)
	cout << "str: \"" << str << "\"\n";
	
	char str1[80], str2[80];
	cout << "Enter string: ";
	cin.getline(str1, 80);// вводим строку в str, состоящую вплоть до 80 (79 + нулевой байт) символов
	cout << "Enter string2: ";
	cin.getline(str2, 80);
	system("cls");//очистка экрана
	cout << "Str1: \"" << str1 << "\"\n";
	cout << "Str2: \"" << str2 << "\"\n";

	strcpy_s(str2, str1);//копирует первую строку во вторую с перезаписью
	cout << "Str2: \"" << str2 << "\"\n";

	if (!strcmp(str1, str2))//сравнение строк
		cout << "!!!!";
	else cout << "&&&&";

	strcat_s(str2, str1);//добавит в конец строки 2 строку 1
	cout << "Str2: \"" << str2 << "\"\n";
*/


	// *** Задача: нахождение СЛОВ в строке ****
	/*
	char str1[80];
	cout << "Enter string: ";
	cin.getline(str1, 80);


	int numwords = 0;
	bool inword = false;// самостоятеьно задаем курсор (будет выдавать false там, где нет букв, либо стоит пробел)

	for (int i(0); str1[i] != '\0'; i++)// проходит всю строку кроме нулевых символов
	{
		if (isalpha(str1[i]) && !(inword))// если аргумент буква и до этого мы были вне слова то будет увеличивать счетчик количества слов
		{
			numwords++;
			inword = true;
		}
		if (!isalpha(str1[i]))
			inword = false;
	}
	cout << numwords << endl;
	*/

	// Задача **** задать курсор, который можно перемещать по консоли****

	/*
	int a[10][3]; //двумерный массив из 30 элементов строка - столбец

	for( int i(0); i < 3; i++)
		for (int j; j < 2; j++)
		{
			cout << a[i][j];

		}
		*/
	char str[100] = "";
	char c = '|', c1;//переменная курсора
	int index = 0;//хранит местоположение курсора

	do
	{
	c1 = (char)_getch();// подхватывает значение с клавиатуры в консоли для считывания ввода A или D
	system("cls");//постоянное обновление экрана
		if (c1 == 'd' || c1 == 'D')// при вводе символа d или D
		{
			for (int i(0); i <= index; i++)// запускается цикл по 
			{
				if (i != index)//пока i не равно индексу, будет заполняться пробелами
					str[i] = ' ';//заполнение пробелами
				else str[i] = c;// иначе будет выводить курсор
			}
			str[index + 1] = '\0';// задается нулевой байт
			index++;
		}
		if (c1 == 'a' || c1 == 'A')
		{
			for (int i(0); i < index; i++)// запускается цикл по 
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