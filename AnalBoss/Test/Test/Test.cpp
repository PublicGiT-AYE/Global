//конская залупа
//хуй
int main()
{
	Standart();
	int size = 500/*= InputSize()*/, max;
	double RadixTime[100] = {}, ShakerTime[100] = {}, RadixAvgTime[9] = {}, ShakerAvgTime[9] = {};

	int size_ofR = sizeof(RadixTime) / sizeof(RadixTime[0]);
	int size_ofS = sizeof(RadixTime) / sizeof(RadixTime[0]);

	cout << "Input max value in array > ";
	cin >> max;
	cout.setf(ios::fixed);
	cout.precision(8);
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	//подзалупный сыр
	cout << "Упорядоченный массив > \n";
	for (short n = 1; n < 8; n++)
	{
		int* Arr = new int[size];
		for (short i = 0; i < 100; i++)
		{
			FillArrayDirect(Arr, size);
			RadixTime[i] = RadixSort(Arr, size);
			FillArrayDirect(Arr, size);
			ShakerTime[i] = ShakerSort(Arr, size);
		}
		ShakerSort(RadixTime, size_ofR);
		ShakerSort(ShakerTime, size_ofS);
		RadixAvgTime[n - 1] = AverageInArray(RadixTime, size_ofR, 10, 90);
		ShakerAvgTime[n - 1] = AverageInArray(ShakerTime, size_ofS, 10, 90);

		cout << "RadixAvgTime  (" << size << ") > " << RadixAvgTime[n - 1] << "\n";
		cout << "ShakerAvgTime (" << size << ") > " << ShakerAvgTime[n - 1] << "\n\n";

		size += 500;
		DeleteArray(Arr);
	}

	size = 500;
	cout << "Массив, упорядоченный в обратном порядке > \n";
	for (short n = 1; n < 8; n++)
	{
		int* Arr = new int[size];
		for (short i = 0; i < 100; i++)
		{
			FillArrayReverse(Arr, size);
			RadixTime[i] = RadixSort(Arr, size);
			FillArrayReverse(Arr, size);
			ShakerTime[i] = ShakerSort(Arr, size);
		}
		ShakerSort(RadixTime, size_ofR);
		ShakerSort(ShakerTime, size_ofS);
		RadixAvgTime[n - 1] = AverageInArray(RadixTime, size_ofR, 10, 90);
		ShakerAvgTime[n - 1] = AverageInArray(ShakerTime, size_ofS, 10, 90);

		cout << "RadixAvgTime  (" << size << ") > " << RadixAvgTime[n - 1] << "\n";
		cout << "ShakerAvgTime (" << size << ") > " << ShakerAvgTime[n - 1] << "\n\n";

		size += 500;
		DeleteArray(Arr);
	}

	size = 500;
	cout << "Неупорядоченный массив > \n";
	for (short n = 1; n < 8; n++)
	{
		int* Arr = new int[size];
		for (short i = 0; i < 100; i++)
		{
			FillArray(Arr, size);
			RadixTime[i] = RadixSort(Arr, size);
			FillArray(Arr, size);
			ShakerTime[i] = ShakerSort(Arr, size);
		}
		ShakerSort(RadixTime, size_ofR);
		ShakerSort(ShakerTime, size_ofS);
		RadixAvgTime[n - 1] = AverageInArray(RadixTime, size_ofR, 10, 90);
		ShakerAvgTime[n - 1] = AverageInArray(ShakerTime, size_ofS, 10, 90);

		cout << "RadixAvgTime  (" << size << ") > " << RadixAvgTime[n - 1] << "\n";
		cout << "ShakerAvgTime (" << size << ") > " << ShakerAvgTime[n - 1] << "\n\n";

		size += 500;
		DeleteArray(Arr);
	}

	return 0;
}