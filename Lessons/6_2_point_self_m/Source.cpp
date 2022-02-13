// �������� �����������
#include <conio.h>
#include <iostream>
#include <string> 

using namespace std;



int main()
{
	int N1, M1, N2, M2;
	cout << "Enter size N,M" << endl;// ������ ������ ������
	cin >> N1 >> M1>> N2 >> M2;
	if (N2!=M1)//������ �������� �� ����������� ��������� ������ � ��������� ���������
	{
		cout << "Error! wrong size" << endl;
		return 1;
	}
	else { // ������ ������������ ������ ��� ���� ���� ������
		int** a = new int* [N1];
		for (int i = 0; i < N1; i++)
			a[i] = new int[M1];
		int** b = new int* [N2];
		for (int i = 0; i < N2; i++)
			b[i] = new int[M2];
		int** c = new int* [N1];
		for (int i = 0; i < N1; i++)
			c[i] = new int[M2];

		for (int i = 0; i < N1; i++)//��������� 1 �������
		{
			for (int j = 0; j < M1; j++)
			{
				a[i][j] = rand() % 10;
				cout << a[i][j] << ' ';
			}
			cout << endl;
		}
		cout << "--------------------\n";
		for (int i = 0; i < N2; i++)//��������� 2 �������
		{
			for (int j = 0; j < M2; j++)
			{
				b[i][j] = rand() % 10;
				cout << b[i][j] << ' ';
			}
			cout << endl;
		}
		cout << "--------------------\n";
		for (int i = 0; i < N1; i++)// �������� 3 �������
		{
			for (int j = 0; j < M2; j++)
			{
				c[i][j] = 0;
			}
		}
		for (int i = 0; i < N1; i++)
		{
			for (int j = 0; j < M2; j++)
			{
				for (int m = 0; m < N2; m++)
				{
					c[i][j] += a[i][m] * b[m][j];// ���������� ������������ ������� (����� �������� �� ������)
				}
			}
		}

		for (int j = 0; j < N1; j++)
		{
			for (int m = 0; m < M2; m++)
			{
				cout << c[j][m] << ' ';// ������� ���������� �������
			}
			cout << endl;
		}
		for (int i = 0; i < N1; i++)// ������� ������������ ������������ ���� ������
			delete[] a[i];
		delete[] a;
		for (int i = 0; i < N2; i++)
			delete[] b[i];
		delete[] b;
		for (int i = 0; i < N1; i++)
			delete[] c[i];
		delete[] c;
		return 0;
	}
}
