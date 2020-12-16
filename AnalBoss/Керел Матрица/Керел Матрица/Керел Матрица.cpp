#include <iostream>
#include <time.h>
using namespace std;

void FillArray(int* const arr[], const int ROWS, const int COLLS);
void PrintArray(const int* const arr[], const int ROWS, const int COLLS);
void ConvertMatrix(int* const Arr[], const int ROWS, const int COLLS);

int main()
{
	srand(time(0));
	int ROWS, COLLS;


	do {
		cout << "ROWS > ";
		cin >> ROWS;
		cout << "COLLS > ";
		cin >> COLLS;
		if (COLLS != ROWS)
		{
			system("cls");
			cout << "COLLS != ROWS\n";
		}
	} while (COLLS != ROWS);

	int** Arr = new int* [ROWS];
	for (int i = 0; i < COLLS; i++) Arr[i] = new int[COLLS];

	FillArray(Arr, ROWS, COLLS);
	PrintArray(Arr, ROWS, COLLS);
	ConvertMatrix(Arr, ROWS, COLLS);
	cout << endl;
	PrintArray(Arr, ROWS, COLLS);
	for (int i = 0; i < ROWS; i++) delete[] Arr[i];
	delete[]Arr;
	return 0;
}

void ConvertMatrix(int* const Arr[], const int ROWS, const int COLLS) {

	int* Brr = new int[ROWS];

	for (int i = 0; i < ROWS; i++)
	{
		Brr[i] = Arr[0][i] + Arr[ROWS - 1][i];
	}
	for (int i = 0; i < ROWS; i++)
	{
		Arr[i][0] = Brr[i];
	}

	delete[] Brr;
}

void FillArray(int* const arr[], const int ROWS, const int COLLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLLS; j++)
		{
			arr[i][j] = rand() % 200 - 100;
		}
	}
}

void PrintArray(const int* const arr[], const int ROWS, const int COLLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLLS; j++)
		{
			printf("%4.d ", arr[i][j]);
			if (arr[i][j] == 0)
			{
				printf("\b\b0 ");
			}
		}
		printf("\n");
	}
	printf("\b");
}