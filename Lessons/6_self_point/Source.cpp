// ��: �������� �������� � � � �������

#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstring>
#include <cctype>
#include <string>
#include <ctime>
using namespace std;

void foo(int* pa, int* pb, int* pc)
{
	(*pc) = *pa;
	(*pa) = *pb;
	(*pb)= *pc;


}
int main()
{
	setlocale(LC_ALL, "Russian");
	int a(5), b = 6, c = 0; // ��������� ���������� "�" ����� ��� �� �������� � ������� ��� �������� � �����������
	foo(&a, &b, &c);
	cout << "a= " << a << "b= " << b << endl;
	return 0;
}
