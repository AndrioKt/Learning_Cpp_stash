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
	
	cout << "Введите a,b:";
	cin >> a >> b;
	cout << "a <= b " << (a <= b) << endl;// логическое "меньше или равно"
	cout << "a >= b " << (a >= b) << endl;
	cout << "a == b " << (a == b) << endl; // логическое равенство
	cout << "a != b " << (a != b) << endl; // логическое не равенство
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

	cout.setf(ios_base::boolalpha);// необходимо для вывода значение true false вместе 1 и 0
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "!a = " << (!a) << endl; // логическое отрицание
	cout << "a || b= " << (a || b) << endl;// логическое сложение
	cout << "a && b= " << (a && b) << endl;// логическое умножение
	*/

	int Ruble;

	cout << "Введите количество рублей: ";
	cin >> Ruble;

	cout << "У вас " << Ruble << " ";

	if (Ruble < 0)// задается проверка условия, что количество рублей больше 0
	{
		cout << "Ваше значение отрицательное";
		(void)_getch();
		return 1;
	}
	if ((Ruble % 100) >= 11 && (Ruble % 100) <= 19)// % - деление с остатком на 100 необходимо для определения последний цифр числа
	{
		cout << "Рублей! \n";
	}
	else
	{ 
		switch (Ruble % 10) //находим последнюю цифру числа
		{
		case 1: cout << "Рубль!\n"; break;//задаем случай когда посл цифра рубля равна 1
			//break выводит за пределы оператора switch
		case 2: cout << "Рубля!\n"; //в этих слуаях будет переходить на следующий случай, пока не появится break
		case 3: cout << "Рубля!\n";
		case 4: cout << "Рубля!\n"; break;

		default: cout << "рублей!\n";
		}
	}




	(void)_getch();
	return 0;
}