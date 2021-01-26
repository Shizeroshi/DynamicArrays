#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 0A");

	srand(time(NULL));
	int n = rand() % 10 + 10;
	int* arr = new int[n];
	int* even = new int[n];
	int* odd = new int[n];

	cout << "Массив: ";
	for (int i = 0; i < n; i++)
	{
		int r = rand() % 9 + 1;
		arr[i] = r;
		cout << r << "\t";
		if (r & 1)
			odd[i] = r;
		else
			even[i] = r;
	}

	cout << endl << endl;

	cout << "Чётные: ";

	for (int i = 0; i < n; i++)
	{
		if (even[i] > 0)
			cout << even[i] << "\t";
	}

	cout << endl << endl;

	cout << "Нечётные: ";

	for (int i = 0; i < n; i++)
	{
		if (odd[i] > 0)
			cout << odd[i] << "\t";
	}

	cout << endl << endl;

	delete[] arr;
	delete[] even;
	delete[] odd;
}