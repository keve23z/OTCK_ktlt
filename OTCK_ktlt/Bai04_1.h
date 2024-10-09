#pragma once
#include<iostream>
using namespace std;
bool LinearSearch_Chuoi(char a[], char x) {
	int n = strlen(a);
	for (int i = 0; i < n; i++)
	{
		if (a[i]==x)
		{
			return true;
		}
	}
	return false;
}
void Timkiem_Chuoi(char a[], char gtri) {
	if (LinearSearch_Chuoi(a,gtri))
	{
		cout << " \n Gia tri " << gtri << " co trong chuoi a";
	}
	else
	{
		cout << " \n Gia tri " << gtri << " khong co trong chuoi a";
	}
}