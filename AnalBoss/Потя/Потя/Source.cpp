#include <stdio.h>
#include <math.h>
#include <iostream>
const double PI = atan(1.0) * 4;
int main()
{
	setlocale(LC_ALL, "ru");
	const short SIZE = 41;
	short i = 0;
	double y = 0, x = 0, h = PI / 10, temp = 0, Arr[SIZE] = {};

	for (x = -2 * PI; x <= 2 * PI; x += h)
	{
		Arr[i] = y = 2 * cos(x * PI / 180) + 3 * sin(2 * (x * PI / 180));
		i++;
		printf("%d. y = %.3lf при x = %.3lf\n", i, y, x);
	}
	printf("\n\n");
	//Сортировка массива
	for (int i = 0; i < SIZE - 1; i++) {
		for (int j = 0; j < SIZE - i - 1; j++) {
			if (Arr[j] > Arr[j + 1]) {
				temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = temp;
			}
		}
	}
	//

	for (int i = SIZE - 1; i >= 0; i--)
	{
		printf("Arr[%d] = %lf\n", i, *(Arr + i));
	}


	// *(Arr + i) ~ Arr[i]

	return 0;
}