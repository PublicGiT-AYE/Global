#include <iostream>
#include <time.h>

using namespace std;

void PrintArray(double* const Arr, const int SIZE);
void FillArray(double* const Arr, const int SIZE);
void InputArray(double* const Arr, const int SIZE);
int AmountElem(double* const Arr, const int SIZE);

int main()
{
	srand(time(0));
	int size;
	cout << "size > ";
	cin >> size;
	double* Arr = new double[size];
	FillArray(Arr, size);
	PrintArray(Arr, size);

	delete[] Arr;
	return 0;
}
int AmountElem(double* const Arr, const int SIZE) {
	double max = -1, min = 100;
	int posmin = 0, posmax = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (Arr[i] < min)
		{
			posmin = i;
			min = Arr[i];
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (Arr[i] > max)
		{
			posmax = i;
			max = Arr[i];
		}
	}
	if (posmax > posmin)
	{
		return posmax - posmin;
	}
	else
		return posmin - posmax;
}

void FillArray(double* const Arr, const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		Arr[i] = rand() % 10;
	}
}

void InputArray(double* const Arr, const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Arr[" << i << "] > ";
		cin >> Arr[i];
	}
}

void PrintArray(int* const Arr, const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		cout << Arr[i] << "\t";
	}
}
