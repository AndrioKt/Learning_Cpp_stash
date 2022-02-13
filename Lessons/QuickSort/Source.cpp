#include <iostream>

using namespace std;

void qsortRecursive(int* mas, int size) {
	//������� ������ � ��������� ������� �������
	int i = 0;
	int j = size - 1;

	//������ ����������� ������� �������
	int mid = mas[size / 2];

	//����� ������
	do {
		//��������� ��������, ���� ��, ������� ����� ���������� � ������ �����
		//� ����� ����� ������� ���������� ��������, ������� ������ ������������
		while (mas[i] < mid) {
			i++;
		}
		//� ������ ����� ���������� ��������, ������� ������ ������������
		while (mas[j] > mid) {
			j--;
		}

		//������ �������� �������
		if (i <= j) {
			int tmp = mas[i];
			mas[i] = mas[j];
			mas[j] = tmp;

			i++;
			j--;
		}
	} while (i <= j);


	//����������� ������, ���� ��������, ��� �����������
	if (j > 0) {
		//"����� �����"
		qsortRecursive(mas, j + 1);
	}
	if (i < size) {
		//"����� �����"
		qsortRecursive(&mas[i], size - i);
	}

}

int main()
{
	int size = 10;
	int mas[]{ 4,2,3,1,6,8,7,9,5,0 };
	qsortRecursive(mas,size);
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << endl;
	}
	return 0;
}