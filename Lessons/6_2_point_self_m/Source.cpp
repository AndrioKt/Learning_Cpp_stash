// условные компиляторы
#include <conio.h>
#include <iostream>
#include <string> 

using namespace std;



int main()
{
	int N1, M1, N2, M2;
	cout << "Enter size N,M" << endl;// вводим размер матриц
	cin >> N1 >> M1>> N2 >> M2;
	if (N2!=M1)//вводим проверку на возможность умножения матриц с заданными размерами
	{
		cout << "Error! wrong size" << endl;
		return 1;
	}
	else { // задаем динамическую память для всех трех матриц
		int** a = new int* [N1];
		for (int i = 0; i < N1; i++)
			a[i] = new int[M1];
		int** b = new int* [N2];
		for (int i = 0; i < N2; i++)
			b[i] = new int[M2];
		int** c = new int* [N1];
		for (int i = 0; i < N1; i++)
			c[i] = new int[M2];

		for (int i = 0; i < N1; i++)//заполняем 1 матрицу
		{
			for (int j = 0; j < M1; j++)
			{
				a[i][j] = rand() % 10;
				cout << a[i][j] << ' ';
			}
			cout << endl;
		}
		cout << "--------------------\n";
		for (int i = 0; i < N2; i++)//заполняем 2 матрицу
		{
			for (int j = 0; j < M2; j++)
			{
				b[i][j] = rand() % 10;
				cout << b[i][j] << ' ';
			}
			cout << endl;
		}
		cout << "--------------------\n";
		for (int i = 0; i < N1; i++)// обнуляем 3 матрицу
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
					c[i][j] += a[i][m] * b[m][j];// производим перемножение матрицу (сумма столбеца на строку)
				}
			}
		}

		for (int j = 0; j < N1; j++)
		{
			for (int m = 0; m < M2; m++)
			{
				cout << c[j][m] << ' ';// выводим полученную матрицу
			}
			cout << endl;
		}
		for (int i = 0; i < N1; i++)// очищаем динамическое пространство всех матриц
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
