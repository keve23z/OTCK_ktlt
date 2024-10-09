#pragma once
#include<iostream>
#include<time.h>
using namespace std;
//Nhập/Tạo ngẫu nhiên gtri xuất mảng a
void NhapMang(int* a, int n) {
	for (int i = 0; i< n; i++)
	{
		cout << "Phan tu thu " << i + 1 << " la:";
		cin >> a[i];
	}
}
void XuatMangSoNguyen(int* a, int n) {
	cout << "\nMang:";
	for (int i = 0; i < n; i++)
	{
		cout << a[i]<<"\t";
	}
}
void NhapMangRandom(int* a, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand();
	}
	cout << "Nhap mang thanh cong!!!";
}