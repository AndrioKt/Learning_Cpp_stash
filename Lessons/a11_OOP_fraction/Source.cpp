#include "Fractions.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <istream>
#include <fstream>
using namespace std;

int main()
{
Fractions d1(1, 3);
Fractions d2(1, 7);

cout << "1: " << d1 << endl;
cout << "2: " << d2 << endl << endl;
cout << "d1+d2 = " << d1 + d2 << endl;
cout << "d1-d2 = " << d1 - d2 << endl;
cout << "d1*d2 = " << d1 * d2 << endl;
cout << "d1/d2 = " << d1 / d2 << endl;

return 0;
}