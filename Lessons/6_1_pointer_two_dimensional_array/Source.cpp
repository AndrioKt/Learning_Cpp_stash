// �������� �����������
#include <conio.h>
#include <iostream>
#include <string> 

using namespace std;



int main()
{
	int N, M;
	cout << "Enter size N,M" << endl;
	cin >> N >> M;

	int** p = new int* [N];// ��������� �� ��������� (���������� ���������� ������� ��� ������ ����������) � ���������� ������������ ������
	for (int i = 0; i < N; i++)
		p[i] = new int[M]; // ��������� ������ ��� ��������� ������ ������� (2 ���������)

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			p[i][j] = 0;
			cout << p[i][j] << ' ';
		}
		cout << endl;
	}
	for (int i = 0; i < N; i++)
		delete[] p[i];//������� ������ ������ ���������� �������
	delete[] p;// ����� ������� ��� ��������� �� ������
	return 0;
}
