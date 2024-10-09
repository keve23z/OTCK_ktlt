#pragma once
#include <stdlib.h>
#include"Bai01_1(SN).h"
//xuất phần thập phân(sau dấu chấm)
void NhapMangSoThuc(float* a, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu thu " << i + 1 << " la:";
		cin >> a[i];
	}
}
//void NhapMangSoThucRandom(float* a, int n) {
//	srand(time(NULL));
//	for (int i = 0; i < n; i++)
//	{
//		int x = rand() % 100;
//		int temp = rand() % 10;
//		switch (temp)
//		{
//		case 0:
//			a[i] = 0.0;
//			break;
//		case 1:
//			a[i] = 0.1 * x;
//			break;
//		case 2:
//			a[i] = 0.2 * x;
//			break;
//		case 3:
//			a[i] = 0.3*x;
//			break;
//		case 4:
//			a[i] = 0.4 * x;
//			break;
//		case 5:
//			a[i] = 0.5 * x;
//			break;
//		case 6:
//			a[i] = 0.6 * x;
//			break;
//		case 7:
//			a[i] = 0.7 * x;
//			break;
//		case 8:
//			a[i] = 0.8 * x;
//			break;
//		case 9:
//			a[i] = 0.9 * x;
//			break;
//		}
//	}
//	cout << "Nhap Mang Thanh Cong!!!";
//}
#include <iostream>
#include <stdlib.h>
using namespace std;

void NhapMangSoThucRandom(float* a, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		a[i] = ((rand() % 101) * 0.01) * (rand() % 100);
	}
	cout << "Nhap Mang Thanh Cong!!!\n";
}
void XuatMangSoThuc(float* a, int n) {
	cout << "\nMang: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i]  << "\t";
	}
}
void XuatThapPhan(float* a, int n) {
	for (int i = 0; i < n; i++)
	{
		int x = a[i] * 10;
		int temp = x % 10;
			cout << "\nPhan Thap phan cua so " << a[i] << " la: " << temp;
	}
}
