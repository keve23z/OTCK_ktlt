#pragma once
#include<iostream>
using namespace std;
int BanarySearch(int a[], int n, int gtri) {
	int l = 0, r = n - 1;
	while (l<=r)
	{
		int m = (l + r) / 2;
		if (a[m]==gtri)
		{
			return m;
		}
		else if (a[m]<gtri)
		{
			l = m + 1;
		}
		else
		{
			r = m - 1;
		}
	}
	return -1;
}
void ViTri_Banany(int a[], int n, int gtri) {
	int temp = BanarySearch(a, n, gtri);
	if (temp!=-1)
	{
		cout << "\n Gia tri " << gtri << " o vi tri " << temp << " trong mang";
	}
	else
	{
		cout << "\n Gia tri " << gtri << " khong co trong mang";
	}
}