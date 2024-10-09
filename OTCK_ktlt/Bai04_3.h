#pragma once
#include<iostream>
using namespace std;
bool BanarySearch_Chuoi_Tang(char a[],  char x) {
	int l = 0, r = strlen(a) - 1;
	while (l<=r)
	{
		int m = (r + l) / 2;
		if (a[m] == x)
		{
			return m;
		}
		else if (a[m] < x)
		{
			l = m + 1;
		}
		else
		{
			r = m - 1;
		}
	}
	return false;
}
void banary_Chuoi(char a[], char gtri) {
	if (BanarySearch_Chuoi_Tang(a, gtri))
	{
		cout << " \n Gia tri " << gtri << " co trong chuoi a";
	}
	else
	{
		cout << " \n Gia tri " << gtri << " khong co trong chuoi a";
	}
}