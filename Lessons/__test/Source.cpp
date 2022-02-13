#include <iostream>
using namespace std;

int main()
{
	int n, result;
	cin >> n;
	result = ((n + 1) * (n + 2) * (pow(n, 2) + 3 * n + 4)) / 8;
	cout << result;
	return 0;
}


