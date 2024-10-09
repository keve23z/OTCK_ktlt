#pragma once
#include"Bai01_4.h"
//xoá phần tử phần nguyên là lẻ
bool XetLe(float n) {
	int temp = (float)n;
	if (temp == 0)
	{
		return false;
	}
	else if (temp % 2 != 1)
	{
		return true;
	}return false;
}
void XuatMangChan(float* a, int n) {
	cout << "\nMang Chan la: ";
	for (int i = 0; i < n; i++)
	{
		if (XetLe(a[i])==true)
		{
			cout << a[i] << "\t";
		}
	}
}
