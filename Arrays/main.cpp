#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Shift.h"
#include"Statistics.h"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 7;
	int arr[n];
	//double arr[n];
	//char arr[n];
	int minRand, maxRand;

	cout << "������� ����������� � ������������ �������� ��������� �����: "; cin >> minRand >> maxRand;
	FillRand(arr, n, minRand, maxRand);
	Print(arr, n);
	cout << "����� ��������� ������� ����������: " << Sum(arr, n) << endl;
	cout << "������-�������������� �������� ��������� ������� ����������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
	cout << "���������� �������: " << endl;
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ������� �����: " << endl;
	shiftLeft(arr, n, 3);
	Print(arr, n);
	cout << "����� ������� ������: " << endl;
	shiftRight(arr, n, 3);
	Print(arr, n);
	cout << "����� ������ � ����������� ������� � �������� ���������:" << endl;
	UniqueRand(arr, n);
	cout << "��������� ������:" << endl;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "������-�������������� �������� ��������� ������� ����������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << " ����������: " << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}