#pragma once
#include<iostream>
using namespace std;
#include"CodeTong.h"
bool KtraSNT(int n) {
	if (n<2)
	{
		return false;
	}
	else if (n==2)
	{
		return true;
	}
	else
	{
		for (int i = 2; i <= n/2; i++)
		{
			if (n%i==0)
			{
				return false;
			}
		}
		return true;
	}
}
int Bai05_1(int a[], int n) {
	int vt, max;
	for (int i = 0; i < n; i++)
	{
		if (KtraSNT(a[i]))
		{
			vt = i;
			max = a[i];
			break;
		}
	}
	if (vt==n)
	{
		return vt;
	}
	else
	{
		for (int i = vt	; i < n; i++)
		{
			if (KtraSNT(a[i])==true&&a[i]>max)
			{
				vt = i;
				max = a[i];
			}
		}
		return vt;
	}
}
void Bai05_2(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (a[i]%2==0)
		{
			for (int j = i+1; j < n; j++)
			{
				if (a[j]%2==0&&a[j]<a[i])
				{
					swap(a[i], a[j]);
				}
			}
		}
	}
}
bool Bai05_5(int a[], int n) {
	int temp = a[1] - a[0];
	if (n==1)
	{
		return true;
	}
	else
	{
		for (int i = 2; i < n; i++)
		{
			if (a[i] - a[i - 1] != temp)
			{
				return false;
			}
		}
		return true;
	}	
}

void Bai05_8(int a[], int n) {
	// Xuất mảng con liên tiếp tăng dài nhất
	int l[100];
	for (int i = 0; i < n; i++)
	{
		l[i] = 1;
	}
	for (int i = n-1; i >0; i--)
	{
		if (a[i]>=a[i-1])
		{
			l[i - 1] = l[i] + 1;
		}
	}
	cout << "\n Mang a: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << "\n Mang l: ";
	for (int i = 0; i < n; i++)
	{
		cout << l[i] << "\t";
	}
	int max = l[0];
	for (int i = 1; i < n; i++)
	{
		if (l[i]>max)
		{
			max = l[i];
		}
	}
	cout << "\n" << max;
	for (int i = 0; i < n; i++)
	{
		if (l[i]==max)
		{
			cout << "\n Mang dai con tang dai nhat la: ";
			for (int j = i; j < max+i; j++)
			{
				cout << a[j] << "\t";
			}
		}
	}
}
void Bai05_DCTDN(int a[], int n) {
	int l[100];
	for (int i = 0; i < n; i++)
	{
		l[i] = 1;
	}
	cout << "\n Mang a: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << "\n Ma vtr: ";
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << "\n Mang l: ";
	for (int i = 0; i < n; i++)
	{
		cout << l[i] << "\t";
	}
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[j]>a[i]&&l[j]<l[i]+1)
			{
				l[j] = l[i] + 1;
				if (max < l[j]) max = l[j];
			}
		}
	}
	cout << "\n Mang l: ";
	for (int i = 0; i < n; i++)
	{
		cout << l[i] << "\t";
	}
	cout <<"\n"<< max;
	for (int i = 0; i < n; i++)
	{
		if (l[i] == max)
		{
			cout <<"\n"<< i;
		}
	}
}