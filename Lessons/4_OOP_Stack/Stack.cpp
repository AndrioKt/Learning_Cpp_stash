#include "Stack.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	Stack st(5);//в обьекте присваиваем максимальное значение
	for (int i = 0; !st.Is_full(); i++)//пока стек не полон, будет класть в него значения
	{
		st.Push(i + 1);
	}
	for (int i = 0; !st.Is_empty(); i++)//пока стек не пустой, будет выталкивать значения
	{
		cout << st.pop() << endl;
	}
	return 0;
}