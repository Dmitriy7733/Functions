//FillRand.h
#pragma once
#include"Stdafh.h"
#include"constants.h"
void FillRand(int arr[], const int n, int minRand, int maxRand);
void FillRand(double arr[], const int n, int minRand, int maxRand);
void FillRand(char arr[], const int n, int minRand, int maxRand);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRandd = 0, int maxRandd = 100);

void UniqueRand(int arr[], const int n);
void UniqueRand(double arr[], const int n);
void UniqueRand(char arr[], const int n);