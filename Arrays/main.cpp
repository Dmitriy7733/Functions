//#include"Stdafx.h"
//#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Print.cpp"

template<typename T>T Sum(T arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);
const char* Sum(char arr[], const int n);

template<typename T> double Avg(T arr[], const int n);
template<typename T> double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T minValueIn(T arr[], const int n);
template<typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T maxValueIn(T arr[], const int n);
template<typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Sort(T arr[], const int n);
template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(double arr[], const int n, int number_of_shifts);
void shiftLeft(char arr[], const int n, int number_of_shifts);

void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftRight(double arr[], const int n, int number_of_shifts);
void shiftRight(char arr[], const int n, int number_of_shifts);

void UniqueRand(int arr[], const int n);
void UniqueRand(double arr[], const int n);
void UniqueRand(char arr[], const int n);

void Search(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 12;
	int arr[n];
	//double arr[n];
	//char arr[n];
	int minRand, maxRand;

	cout << "Введите минимальное и максимальное значения случайных чисел: "; cin >> minRand >> maxRand;
	FillRand(arr, n, minRand, maxRand);
	Print(arr, n);
	cout << "Сумма элементов массива составляет: " << Sum(arr, n) << endl;
	cout << "Средне-арифметическое значение элементов массива составляет: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	cout << "Сортировка массива: " << endl;
	Sort(arr, n);
	Print(arr, n);
	cout << "Сдвиг массива влево: " << endl;
	shiftLeft(arr, n, 3);
	Print(arr, n);
	cout << "Сдвиг массива вправо: " << endl;
	shiftRight(arr, n, 3);
	Print(arr, n);
	cout << "Новый массив с уникальными числами в заданном диапазоне:" << endl;
	UniqueRand(arr, n);
	cout << "Двумерный массив:" << endl;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Средне-арифметическое значение элементов массива составляет: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << " Сортировка: " << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	cout << "Новый массив с проверкой на повторяемость и определением количества повторов" << endl;

	int brr[] = { -7, 1, 1, 2, 4, 3, 2, -7, 2, 2, 0, 0 };
	Search(brr, n);
}





template<typename T>
T Sum(T arr[], const int n)
{
	T x = 0;
	for (int i = 0; i < n; i++)
	{
		x += arr[i];
	}
	return x;
}
const char* Sum(char arr[], const int n)
{
	return "Буквы суммировать нельзя!";
}
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
template<typename T>
double Avg(T arr[], const int n)
{
	return Sum(arr, n) / n;
}
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return  Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

template<typename T>
T minValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}

template<typename T>
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}

template<typename T>
T maxValueIn(T arr[], const int n)
{
	T max = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}
template<typename T>
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}

template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
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
}
void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
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
}
void shiftRight(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void shiftRight(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}

void UniqueRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % n;
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
	Print(arr, n);
}
void UniqueRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % n;
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
	Print(arr, n);
}
void UniqueRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % n;
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
	Print(arr, n);
}

void Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		int x = 0; int c = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] == arr[i])
			{
				c += 1;
				x = i;
			}
		}

		for (int k = x - 1; k >= 0; k--)
		{
			if (arr[k] == arr[i])
			{
				c = 0;
			}
		}

		if (c > 0)
		{
			cout << arr[i] << "повторяется" << c << "раз" << endl;
		}

	}
}