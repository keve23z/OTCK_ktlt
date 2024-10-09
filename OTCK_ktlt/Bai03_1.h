#pragma once
#include<iostream>
using namespace std;
int LinearSearch(int a[], int n, int gtri) {
	for (int i = 0; i < n; i++)
	{
		if (a[i] == gtri)
		{
			return i;
		}
	}return -1;
}
void VitriTimThay(int a[], int n, int gtricantim) {
	if (LinearSearch(a,n,gtricantim)!=-1)
	{
		cout << "\n Gia tri " << gtricantim << " tim thay o vi tri: " << LinearSearch(a, n, gtricantim);
	}
	else
	{
		cout << "\n Gia tri " << gtricantim << " khong tim thay trong mang";
	}
}