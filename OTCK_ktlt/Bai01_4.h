#pragma once
#include"Bai01_3(ST).h"
//đếm số phần tử có phần nguyên 2 chữ số
void DemPhanTu2CS(float* a, int n) {
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int temp= (float)a[i];
		if (temp>=10&&temp<=99)
		{
			dem++;
		}
	}
	cout << "\nSo luong phan tu co 2 chu so la:" << dem;
}
