#include "Stack.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	Stack st(5);//� ������� ����������� ������������ ��������
	for (int i = 0; !st.Is_full(); i++)//���� ���� �� �����, ����� ������ � ���� ��������
	{
		st.Push(i + 1);
	}
	for (int i = 0; !st.Is_empty(); i++)//���� ���� �� ������, ����� ����������� ��������
	{
		cout << st.pop() << endl;
	}
	return 0;
}