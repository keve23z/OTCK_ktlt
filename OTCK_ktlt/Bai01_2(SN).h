#pragma once
#include"Bai01_1(SN).h"
//xuất phần tử có phân nguyên là số nguyên tố
bool KtraSoNT(int n) {
	if (n<2)
	{
		return false;
	}
	else if (n > 2) {
		for (int i = 3; i <= n/2; i++)
		{
			if (n % i == 0)
				return false;
		}
		return true;
	}
}
void NhapMangSNT(int* a, int n) {
	srand(time(NULL));
	for (int i = 0;	i < n; i++)
	{
		do
		{
			a[i] = rand();
		} while (KtraSoNT(a[i])==false);
	}
	cout << "Nhap mang thang cong!!!";
}