// строки/конкатенация
#include <conio.h>
#include <iostream>
#include <string> 
#define PI 3.14//при помощи препроцессора задаем макрос (число пи)
#define foo(x,y) (x*y)
using namespace std;



	int main()
{
	string str1= "2154345";
	string str2 = "dfsgsh";
	string str333 = str1 + str2;
	cout << str333<<endl;
	cout << PI<< endl << foo(-5,6)<<endl;
	return 0; 
}
