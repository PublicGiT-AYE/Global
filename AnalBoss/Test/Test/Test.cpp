#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int counter = 1, a1 = 10, a2 = 321, a3 = 123, a4 = 22;
	if (a1 >= a2 && a1 >= a3 && a1 >= a4) counter = 1;
	else if (a2 >= a1 && a2 >= a3 && a2 >= a4) counter = 2;
	else if (a3 >= a1 && a3 >= a2 && a3 >= a4) counter = 3;
	else if (a4 >= a1 && a4 >= a2 && a4 >= a3) counter = 4;

	cout << "Позиция наибольшего числа > " << counter << endl;

	return 0;
}