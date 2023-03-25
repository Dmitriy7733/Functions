#include"Statistics.h"

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

