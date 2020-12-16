#include <iostream>
#include <stdio.h>
#include <time.h>

int main()
{
	srand(time(0));
	const int SIZE = 4;
	char Arr[SIZE][SIZE];
	int tmp;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			Arr[i][j] = (char)(rand() % (122 - 97) + 97);
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf("%c\t", Arr[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < SIZE / 2; i++)
	{
		for (int j = i; j < SIZE - 1 - i; j++)
		{
			tmp = Arr[i][j];
			Arr[i][j] = Arr[SIZE - j - 1][i];
			Arr[SIZE - j - 1][i] = Arr[SIZE - i - 1][SIZE - j - 1];
			Arr[SIZE - i - 1][SIZE - j - 1] = Arr[j][SIZE - i - 1];
			Arr[j][SIZE - i - 1] = tmp;
		}
	}

	printf("\n");

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf("%c\t", Arr[i][j]);
		}
		printf("\n");
	}
}