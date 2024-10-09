#pragma once
#include"Bai01_1(SN).h"
#include"Bai01_3(ST).h"
//tìm a có bao nhiêu phân tử x
int SoPhamTuXint(int* a, int n,int x) {
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			dem++;
		}
	}return dem;
}
void XuatSoluongXint(int* a, int n,int x) {
	cout << "\n So Luong phan tu" << x << " trong mang la:" << SoPhamTuXint(a, n, x);
}
int SoPhanTuXfloat(float* a, int n, float x) {
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			dem++;
		}
	}return dem;
}
void XuatSoluongXfloat(float* a, int n, float x) {
	cout << "\n So Luong phan tu" << x << " trong mang la:" << SoPhanTuXfloat(a, n, x);
}