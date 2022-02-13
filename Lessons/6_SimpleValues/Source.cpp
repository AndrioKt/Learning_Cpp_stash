#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

using std::cin;
using std::cout;
using std::endl;
using std::pow;
using std::ios_base;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	cout << "\t\t***Простые числа***\n";
	
	const int N = 1500;
	bool simpleNumber[N + 1];//N+1 т.к диапазон от 0 до 15
	for (int i = 2; i < N + 1; i++)// 1 не является ни простым не сложным числом, потому его не рассматривают
		simpleNumber[i] = true;

	for (int i = 2; i  <= N; i++)
	{
		if (simpleNumber[i])
		{
			for (int j = i * i; j <= N; j += i)// j+=i нужно что бы увеличивать значение j на значение i, что бы сразу исключить все числа кратные себе
				simpleNumber[j] = false;// каждое j найденое число - исключается
		}
	}
	for (int i = 2; i <= N; i++)//снова ищем все значения i, что бы вывести их на экран
		if (simpleNumber[i])
			cout << i << endl;
	(void)_getch();
	return 0;
}