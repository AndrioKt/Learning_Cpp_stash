#include "Vector.h"
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	Vector v1(30, 50);
		Vector v2(6.56, 1.34, Polar);
		cout << +v1 << endl;//получаем операцию нахождения модуля этого обьекта
		cout<< v1+v2 << endl;
		cout << 3 * v2 << endl;
	return 0;
}