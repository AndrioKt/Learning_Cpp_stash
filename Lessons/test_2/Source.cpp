#include <iostream>
#include <iostream>
#include <ctime>
using namespace std;

long int fact(int N)
{
	if (N < 0) 
		return 0;
	if (N == 0) 
		return 1; 
	else 
		return N * fact(N - 1);
}

int main()
{
	srand(time(NULL));
	int mas[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mas[i][j] = rand() % 10;
		}
	}



	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
	int sum_row(0), sum_col(0);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << mas[i][j] << " ";
			sum_row = sum_row + mas[i][j];//סףללא סענמך
			sum_col = sum_col + mas[j][i];//סףללא סעמכבצמג

		}
		cout << endl << "Sum of the col " << j << " = " << sum_col << endl;
		cout << endl << "Sum of the row " << i << " = " << sum_row << endl;
	}
	return 0;
}