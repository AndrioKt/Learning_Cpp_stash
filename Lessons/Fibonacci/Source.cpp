#include <iostream>
#include <string>
#include <vector>

// ******�������� ���������� ����� ��������
// ******** ����������




	//��������� ��������� � ����������� ������ ������ ����� ��������
	static long PrimitiveFib(int n)
	{
		if (n <= 1) return n;
		else return PrimitiveFib(n - 1) + PrimitiveFib(n - 2);
	}
	//��������� ������� ������ ���������� ����� �������� ���������
	static unsigned long long EffectiveFib(int n)
	{
		unsigned long long int* arr = new unsigned long long int[n + 1];
		arr[0] = 0;
		arr[1] = 1;
		for (int i = 2; i <= n; i++)
		{
			arr[i] = arr[i - 1] + arr[i - 2];
		}
		unsigned long long res = arr[n];
		delete[] arr;
		return res;
	}

	//��������� ���������� ������������(�������) ������ ���������� ��������
	//��� ���������� �� ����� ���������� �������� � �� ��������� ��
	static unsigned long long MemRecFib(int n, unsigned long long* mem)
	{

		if (mem[n] != -1)
			return mem[n];
		else if (n <= 1) return n;
		else
		{
			unsigned long long res = MemRecFib(n-1, mem) + MemRecFib(n - 2, mem);
			mem[n] = res;
			return res;
		}
	}


int main()
{

	std::cout << "Primitive calculation n=5 " << PrimitiveFib(5) << std::endl;
	std::cout << "Fast calculation n=10 " << EffectiveFib(10) << std::endl;
	std::cout << "Fast calculation n = 100 " << EffectiveFib(100) << std::endl;

	//����������. (��� ������ ������� � �����������, � �������� �� �� ��� ��������, �� �������� ����� ������������)
		int n = 100;
		unsigned long long* mem = new unsigned long long[n + 1];
		//�������� ������ -1, ����� �������� ��� ������ �� ����� ����������� � ����������������. � ��� �������� ���� ����� �� ����� -1, ������ ��� �����������
		for (int i = 0; i <= n; ++i)
		{
			mem[i] = -1;
		}
		std::cout << "Recursion memoization calculation n = 100 " << MemRecFib(n, mem) << std::endl;
		delete[] mem;
	return 0;
}