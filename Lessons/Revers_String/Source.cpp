#include <iostream>
#include <string>

int main()
{
	char str[] = "This is string";
	int length = strlen(str);
	int temp, i, j;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	std::cout << str << std::endl;
	void _getch();
	return 0;
}