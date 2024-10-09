#pragma once
#include<iostream>
using namespace std;
void xuat_Chuoi(char a[]) {
	cout << "\n";
	for (int i = 0; i < strlen(a); i++)
	{
		cout << a[i] << "\t";
	}
}
void swap_chuoi(char& a, char& b) {
	char temp = a;
	a = b;
	b = temp;
}
void InterchageSort_chuoi_Tang(char a[]) {
	for (int i = 0; i < strlen(a); i++)
	{
		for (int j = i+1; j < strlen(a); j++)
		{
			if (a[i]>a[j])
			{
				swap_chuoi(a[i], a[j]);
			}
		}
	}
}
void InterchageSort_chuoi_Giam(char a[]) {
	for (int i = 0; i < strlen(a); i++)
	{
		for (int j = i + 1; j < strlen(a); j++)
		{
			if (a[i] < a[j])
			{
				swap_chuoi(a[i], a[j]);
			}
		}
	}
}
void BubbleSort_chuoi_Tang(char a[]) {
	for (int i = strlen(a)-1; i >= 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			if (a[j]<a[j-1])
			{
				swap_chuoi(a[j], a[j - 1]);
			}
		}
	}
}
void BubbleSort_chuoi_Giam(char a[]) {
	for (int i = strlen(a) - 1; i >= 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			if (a[j] > a[j - 1])
			{
				swap_chuoi(a[j], a[j - 1]);
			}
		}
	}
}
void SelectionSort_chuoi_Tang(char a[]) {
	int i_min;
	for (int i = 0; i < strlen(a); i++)
	{
		i_min = i;
		for (int j = i+1; j < strlen(a); j++)
		{
			if (a[i_min]>a[j])
			{
				i_min = j;
			}
		}
		swap_chuoi(a[i], a[i_min]);
	}
}
void SelectionSort_chuoi_Giam(char a[]) {
	int i_max;
	for (int i = 0; i < strlen(a); i++)
	{
		i_max = i;
		for (int j = i + 1; j < strlen(a); j++)
		{
			if (a[i_max] < a[j])
			{
				i_max = j;
			}
		}
		swap_chuoi(a[i], a[i_max]);
	}
}
int patition_chuoi_Tang(char a[], int l, int r) {
	char pivot = a[r - 1];
	int i = l - 1;
	for (int j = l; j < r-1; j++)
	{
		if (a[j]<=pivot)
		{
			i++;
			swap_chuoi(a[i], a[j]);
		}
	}
	swap_chuoi(a[i + 1], a[r - 1]);
	return i + 1;
}
int patition_chuoi_giam(char a[], int l, int r) {
	char pivot = a[r - 1];
	int i = l - 1;
	for (int j = l; j < r - 1; j++)
	{
		if (a[j] > pivot)
		{
			i++;
			swap_chuoi(a[i], a[j]);
		}
	}
	swap_chuoi(a[i + 1], a[r - 1]);
	return i + 1;
}
void QuickSort_chuoi_Giam(char a[], int l, int r) {
	if (l < r)
	{
		int pi = patition_chuoi_giam(a, l, r);
		QuickSort_chuoi_Giam(a, l, pi);
		QuickSort_chuoi_Giam(a, pi + 1, r);
	}
}
void QuickSort_chuoi_Tang(char a[], int l, int r) {
	if (l<r)
	{
		int pi = patition_chuoi_Tang(a, l, r);
		QuickSort_chuoi_Tang(a, l, pi);
		QuickSort_chuoi_Tang(a, pi + 1, r);
	}
}