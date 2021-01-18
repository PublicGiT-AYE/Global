#include<iostream>
#include<windows.h>
#include<fstream>

using namespace std;
template <typename T>
void DeleteArray(T* arr);
template <typename T>
void DeleteArray(T** arr, const int rows);
int* FindStr(char** arr, const int rows, const int colls);
void FillArrFromFile(char** const arr, const int rows, const int colls);
void PrintArray(char** arr, const int ROWS, const int COLLS);
bool* FindWomen(char** arr, const int rows, const int colls);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int rows = 10;
	int colls = 50;
	bool counter = 0;
	char** Arr = new char* [rows];
	for (int i = 0; i < rows; i++)
		Arr[i] = new char[colls] {};

	FillArrFromFile(Arr, rows, colls);

	PrintArray(Arr, rows, colls);

	int* S = FindStr(Arr, rows, colls);

	bool* W = FindWomen(Arr, rows, colls);
	/*for (int i = 0; i < rows; i++)
	{
		cout << W[i];
	}
		cout << endl;*/
	for (int i = 0; i < rows; i++)
	{
		if (S[i] > 0)
		{
			for (int j = 0; j < colls; j++)
			{
				cout << Arr[S[i] - 1][j];
			}
			cout << endl;
		}
	}

	//for (int i = 0; i < rows; i++)
	//{

	//	for (int j = 0; j < colls; j++)
	//	{
	//		if (*(W + i)) {
	//			cout << Arr[i][j];
	//		}
	//	}
	//	cout << endl;
	//}


	DeleteArray(Arr, rows);
	DeleteArray(W);
	DeleteArray(S);
	return 0;
}

bool* FindWomen(char** arr, const int rows, const int colls)
{
	cout << endl;
	bool* Buff = new bool[rows] {};

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colls; j++)
		{
			if (arr[i][j] == ';' && arr[i][j - 1] == 'W')
			{
				Buff[i] = 1;
			}
		}
	}
	return Buff;
}

void FillArrFromFile(char** arr, const int rows, const int colls)
{
	ifstream ifs("file.txt");
	arr[rows][colls];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colls; j++)
		{
			ifs >> arr[i][j];
			if (arr[i][j] == ';')
			{
				j = colls + 1;
			}
		}
	}
	ifs.close();
}

int* FindStr(char** arr, const int rows, const int colls)
{
	int str = 0;
	int l = 0;
	bool p = 0;

	char** Buff = new char* [rows];
	for (int i = 0; i < rows; i++)
		Buff[i] = new char[colls] {};

	for (int i = 0; i < rows; i++)
	{
		p = 0;
		for (int j = 0; j < colls; j++)
		{
			if (arr[i][j] == ',' && p == 0)
			{
				l = 1;
				while (arr[i][j + l] != ',')
				{
					l++;
				}
				for (int k = 1; k < l; k++)
				{
					Buff[i][k] = arr[i][j + k];
				}
				p++;
			}
		}
	}
	int* counter = new int [rows] {};
	int z = 0;
	for (int f = 0; f < rows; f++)
	{
		for (int i = 0; i < rows; i++)
		{
			str = 0;
			for (int j = 0; j < colls; j++)
			{
				if (i != f && Buff[i][j] == Buff[f][j])
				{
					str++;
				}
			}
			if (str == colls)
			{
				counter[z] = i + 1;
				z++;
			}
		}

	}

	DeleteArray(Buff);
	return counter;
}

template <typename T>
void DeleteArray(T** arr, const int rows) {
	for (int i = 0; i < rows; i++) delete[] arr[i];
	delete[] arr;
}

template <typename T>
void DeleteArray(T* arr) {
	delete[] arr;
}

void PrintArray(char** arr, const int ROWS, const int COLLS) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLLS; j++)
		{
			cout << arr[i][j];
		}
		printf("\n");
	}
	printf("\b");
}
