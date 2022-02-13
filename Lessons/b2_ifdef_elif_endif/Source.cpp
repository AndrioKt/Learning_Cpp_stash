// условные компиляторы
#include <conio.h>
#include <iostream>
#include <string> 
#define DEBUG

using namespace std;



int main()
{
#ifdef DEBUG// будет определяться, будет ли выполняться участок кода внутри директивы
	cout << "DEBUG info!" << endl;
#else 
	cout << "NO DEBUG info!" << endl;
#endif
	for (int i = 0; i < 5; i++)
	{
		cout << i << endl;
	}
	return 0;
}
