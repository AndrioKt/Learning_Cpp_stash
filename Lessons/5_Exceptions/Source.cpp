#include <conio.h>
#include <iostream>
#include <cmath>
using namespace std;

using std::cin;
using std::cout;
using std::endl;
using std::pow;
using std::ios_base;

int main()
{
	setlocale(LC_ALL, "Russian");
	int num1, num2;
	cout << "Enter num1 ";
	cin >> num1;
	cout << "Enter num2 ";
	cin >> num2;

	cout << "num1 + num2 = " << num1 + num2 << endl;
	cout << "num1 / num2 = " ;

	try// ����������� ������
	{
		if (num2 == 0)//���� ��� �������� �������� ����� 0, ��
			throw 123;//������ ����� ������ 123
		cout << num1 / num2 << endl;
	}
		catch (int i)//��� ������������� ������, �� ����������� ��� � ������� �� �����
		{
			cout << "Error � " << i << " - devide by 0!!!" << endl;
		}
	(void)_getch();
	return 0;
}