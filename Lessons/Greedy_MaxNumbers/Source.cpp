#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//******* ������ ��������: ���������� ������������� ����� �� ������� ��������������� �����**********

//���������� ��� ������ ���������� � ��������������
void SortInvert()
{
	const int SIZE = 6;// ��� ������� ������� �������� ���������� ������������ �����
	int temp[SIZE];
	int numbers[SIZE] = { 3,1,7,9,9,5 };
	sort(numbers, numbers + SIZE);//��������� ��������� ���������� �� ���������� STL ����� n*log(n) � ������������ �� ���� "������� ����������"
	for (int i = 0; i < SIZE; i++)
	{
		temp[i] = numbers[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		numbers[i] = temp[SIZE - 1 - i];
		cout << numbers[i];
	}
}

//���������� ������������� �� ������� (����������� ������ �������)
void MaxNumber()
{
	const int SIZE = 6;
	int temp[SIZE];
	unsigned int numbers[SIZE] = { 3,1,7,9,9,5 };

}
int main()
{
	SortInvert();
	return 0;
}