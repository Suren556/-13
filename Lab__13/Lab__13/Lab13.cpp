#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(0, "RUS");
	int n = 0;
	cout << "¬ведите размерность массива N(NxN)" << endl;
	cin >> n;
	int** arr = new int* [n];
	int** a = new int* [n / 2];


	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];//rows
		a[i] = new int[n / 2];
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			for (int m = 1; m < j; m++)
			{
				if (arr[i][j] == arr[i][m]) a[i][j] == arr[i][j];
			}
		}
	}





	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
	system("PAUSE");
}