#pragma once
#include<iostream>
using namespace std;
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
void InterchangeSort_Tang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}
void InterchangeSort_Giam(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i] < a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}
void SelectionSort_Tang(int a[], int n) {
	int i_min;
	for (int i = 0; i < n; i++)
	{
		i_min = i;
		for (int j = i+1; j < n; j++)
		{
			if (a[i_min] > a[j])
				i_min = j;
		}
		swap(a[i], a[i_min]);
	}
}
void SelectionSort_Giam(int a[], int n) {
	int i_max;
	for (int i = 0; i < n; i++)
	{
		i_max = i;
		for (int j = i+1; j < n; j++)
		{
			if (a[i_max] < a[j])
				i_max=j;
		}
		swap(a[i], a[i_max]);
	}
}
void BubbleSort_Tang(int a[], int n) {
	for (int i = n-1; i >= 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			if (a[j]<a[j-1])
			{
				swap(a[j], a[j-1]);
			}
		}
	}
}
void BubbleSort_Giam(int a[], int n) {
	for (int i = n-1; i >= 0; i--)
	{
		for (int j = 1; j < n; j++)
		{
			if (a[j]>a[j-1])
			{
				swap(a[j], a[j - 1]);
			}
		}
	}
}
int patition_Tang(int a[],int r, int n) {
	int pivot = a[n-1];
	int i = r-1;
	for (int j = r; j < n-1; j++)
	{
		if (a[j]<=pivot)
		{
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[n-1]);
	return i + 1;
}
void QuickSort_Tang(int a[], int r, int n){
	if (r < n) {
		int pi_min = patition_Tang(a, r, n);
		patition_Tang(a, r, pi_min);
		patition_Tang(a, pi_min+1, n);
	}
}
int patition_Giam(int a[], int r, int n) {
	int pivot = a[n - 1];
	int i = r - 1;
	for (int j = r; j < n-1; j++)
	{
		if (a[j]>pivot)
		{
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[n - 1]);
	return i + 1;
}
void QuickSort_Giam(int a[], int r, int n) {
	if (r<n)
	{
		int pi_Max = patition_Giam(a, r, n);
		QuickSort_Giam(a, r, pi_Max);
		QuickSort_Giam(a, pi_Max+1 , n);
	}	
}