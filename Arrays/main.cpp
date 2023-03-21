#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Shift.h"
#include"Statistics.h"

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