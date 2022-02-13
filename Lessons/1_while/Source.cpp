

#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstring>
#include <cctype>
#include <string>
#include <ctime>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int l,s(0), str;
	char t;
	string val;
	cout << "set line type - vertical(v)/horizontal(h): " << endl;
	cin >> t;
	cout << "set leght: " << endl;
	cin >> l;
	cout << "set string: " << endl;
	cin >> val;
	if (l > size(val))
	{
		cout << "Error string size lower than the entered lenght!" << endl << endl;
		return 1;
	}
	else if (l == char(l))
		{
			cout << "Error undefined lenght value!" << endl << endl;
			return 1;
		}
		else {
			if (t == 'v')
			{
				do {
					cout << val[s] << endl;
					s++;
				} while (s <= l - 1);
			}
			else if (t == 'h')
			{
				do {
					cout << val[s] << " ";
					s++;
				} while (s <= l - 1);
			}
			else cout << "Error type line!";
			}

	
}