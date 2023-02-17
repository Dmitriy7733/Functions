#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int Sum(int arr[], const int n);
int Avg(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);
void UniqueRand(int arr[], const int n, int start, int end);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 7;
	int arr[n];

	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива составляет: " << Sum(arr, n) << endl;
	cout << "Средне-арифметическое значение элементов массива составляет: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	cout << "Сдвиг массива влево: " << endl;
	shiftLeft(arr, n, 3);
	cout << "Сдвиг массива вправо: " << endl;
	shiftRight(arr, n, 3);
	cout << "Новый массив с уникальными числами в заданном диапазоне:" << endl;
	UniqueRand(arr, n, 3, 10);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int Sum(int arr[], const int n)
{
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		x += arr[i];
	}
	return x;

}
int Avg(int arr[], const int n)
{
	int avg = 0;
	avg = Sum(arr,n) / n;
	return avg;
}
int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}
int maxValueIn(int arr[], const int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}
void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	Print(arr, n);
}
void shiftRight(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);
}
void UniqueRand(int arr[], const int n, int start, int end)
{
	srand(time(NULL));
	
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (end - start) + start;
	}
	Print(arr, n);
}
