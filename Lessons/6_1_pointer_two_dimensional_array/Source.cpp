// условные компил€торы
#include <conio.h>
#include <iostream>
#include <string> 

using namespace std;



int main()
{
	int N, M;
	cout << "Enter size N,M" << endl;
	cin >> N >> M;

	int** p = new int* [N];// указатель на указатель (обь€вление двумерного массива при помощи указателей) с выделением динамической пам€ти
	for (int i = 0; i < N; i++)
		p[i] = new int[M]; // выделение пам€ти дл€ элементов второй матрицы (2 измерени€)

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
		delete[] p[i];//очищает сперва €чейки двумерного массива
	delete[] p;// затем очищает сам указатель на массив
	return 0;
}
