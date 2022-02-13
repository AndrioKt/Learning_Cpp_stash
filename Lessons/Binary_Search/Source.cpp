#include <iostream>
#include <string>
#include <vector>

//Ѕинарный поиск в отсортированном массиве:

int BinarySearch(std::vector<int> massive, int value)
{
	int size = massive.size();//определим размер массива
	int low = 0;
	int high = size - 1;

	while (low <= high)
	{
		int middle = (low + high) / 2;

		if (value == massive[middle])
		{
			std::cout << "The value " << value << " was found on index: " << middle << std::endl;
			return 0;
		}
		else if (value > massive[middle])
			low = middle + 1;
		else high = middle - 1;
		}
	return 1;
}

//Ќахождение корн€ перебором
void Square_bruteforce(double value)
{
	double eps = 0.01;//точность нахождени€ корн€
	int Iterations = 0;//»терации
	double res = 0.0;

	while (abs(pow(res, 2) - value) >= eps)
	{
		res += 0.000001;
		Iterations += 1;
	}
	if (abs(pow(res, 2) - value) >= eps)
		std::cout << "failed... " << Iterations << std::endl;
	else 
		std::cout << "The closest number is "<< res << ". Iterations: " << Iterations << std::endl;
}

//Ќахождение корн€ бинарным поиском (быстрее брутфорса)
void Square_Binary(double value)
{
	double  eps = 0.01;
	double low = 0.0;
	double high = value;
	int Iterations = 0;
	double Guess = (high + low) / 2.0;

	while (abs(pow(Guess, 2) - value) >= eps)
	{
		if (abs(pow(Guess, 2) <value))
			low = Guess;
		else
			high = Guess;
		Guess = (high + low) / 2.0;
		Iterations += 1;
	}
	std::cout << "The closest number is " << Guess << ". Iterations: " << Iterations << std::endl;
}



int main()
{
	std::vector<int>massive = { 1,2,3,4,5,6,7,8,9,10 };
	//BinarySearch(massive, 4);
	//Square_bruteforce(33.264573457354);
	Square_Binary(53.1231526730);
	return 0;
}