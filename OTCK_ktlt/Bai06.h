#pragma once
#include<iostream>
using namespace std;
// Tạo mang tu phim vuong
void menu() {
	cout << "\n";
	cout << "\n-------MENU-------";
	cout << "\n1. Nhap mang tu phim";
	cout << "\n2. Nhap mang random";
	cout << "\n3. Xuat mang";
	cout << "\n4. Xuat duong cheo chinh, phu";
	cout << "\n5. Xuat tam giac tren, duoi";
	cout << "\n6. Xuat tong duong cheo chinh, phu, tam giac tren, duoi";
	cout << "\n7. Xuat duong cheo song song voi duong cheo chinh";
	cout << "\n8. Xuat duong cheo song song voi duong cheo phu";
	cout << "\n9. Xuat bien cua ma tran";
	cout << "\n10. Xuat gia tri yen ngua";
	cout << "\n0. Thoat";
	cout << "\n------------------";
	cout << "\n";
}
void TaoMang_Phim(int a[][100], int n) {
	cout << "\n Nhap mang tu phím:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "]" << "[" << j << "]= ";
			cin >> a[i][j];
		}
	}
	cout << "\n Nhap mang thanh cong!!!";
}
// Tao mang random vuong
void TaoMang_Random(int a[][100], int n) {
	cout << "\n Tao mang\n";
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 100;
		}
	}
	cout << "\n Tao mang thanh cong!!!";
}
void XuatMang_2C(int a[][100], int &n) {
	cout << "\n Mang:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "\t" << a[i][j];
		}
		cout << "\n";
	}
}
void Xuat_DuongCheo_Chinh(int a[][100], int n) {
	cout << "\n Duong cheo chinh cua ma tran la: ";
	for (int i = 0; i < n; i++)
	{
		cout << "\t" << a[i][i];
	}
	cout << "\n Duong cheo phu cua ma tran la: ";
	for (int i = 0; i < n; i++)
	{
		cout << "\t" << a[0+i][n-1-i];
	}
}
int Tong_DCC(int a[][100], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong = tong + a[i][i];
	}
	return tong;
}
int Tong_DCP(int a[][100], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong = tong + a[0 + i][n - 1 - i];
	}
	return tong;
}
void tamgiac(int a[][100], int n)
{
	cout << "\n Xuat tam giac tren:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i <= j )
				cout << "\t" << a[i][j];
			else
			{
				cout << "\t";
			}
		}
		cout << "\n";
	}
	cout << "\n Xuat tam giac duoi:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i >= j)
				cout << "\t" << a[i][j];
			else
			{
				cout << "\t";
			}
		}
		cout << "\n";
	}
}
int Tong_TamGiac_Tren(int a[][100], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i<=j)
			{
				tong = tong + a[i][j];
			}
		}
	}
	return tong;
}
int Tong_TamGiac_Duoi(int a[][100], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i >= j)
			{
				tong = tong + a[i][j];
			}
		}
	}
	return tong;
}
void XuatDuongCheo_SongSong_DCC(int a[][100], int n) {
	if (n == 2)
	{
		cout << "\nKhong co duong cheo song song!!!";
	}
	else
	{
		int soluong = n - 2;
		cout << "\n So luong duong cheo song song voi duong cheo chinh la: " << soluong * 2 << "\n";
		
		for (int k = 1; k < soluong + 1; k++)
		{
			for (int i = 0; i < n - k; i++)
			{
				cout << "\t" << a[i][i + k];
			}
			cout << "\n";
		}
		for (int k = 1; k < soluong + 1; k++)
		{
			for (int i = 0; i < n - k; i++)
			{
				cout << "\t" << a[i + k][i];
			}
			cout << "\n";
		}
		
	}
}
void XuatDuongCheo_SongSong_DCP(int a[][100], int n) {
	if (n == 2)
	{
		cout << "\nKhong co duong cheo song song!!!";
	}
	else
	{
		int soluong = n - 2;
		cout << "\n So luong duong cheo song song voi duong cheo phu la: " << soluong * 2 << "\n";
		for (int k = 1; k < soluong + 1; k++)
		{
			for (int i = 0; i < n - k; i++)
			{
				cout << "\t" << a[i][n-k-i-1];
			}
			cout << "\n";
		}
		for (int k = 1; k < soluong + 1; k++)
		{
			for (int i = 0; i < n -k; i++)
			{
				cout << "\t" << a[i+k][n - i - 1];
			}
			cout << "\n";
		}
	}
}
int tongBien(int a[][100], int n) {
	int	tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (i==0||i==n-1)
		{
			for (int j = 0; j < n; j++)
			{
				tong = tong + a[i][j];
			}
		}
		else
		{
			tong = tong + a[i][0] + a[i][n - 1];
		}
	}
	return tong;
}
// điểm yên ngựa số bé nhất trong hàng và số lớn nhất trong cột

void yenNgua(int a[][100], int n) {
	cout << "\n Cac gia tri yen ngua la: ";
	for (int i = 0; i < n; i++)
	{
		int temp = a[i][0], socot = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[i][j]>=temp)
			{
				temp = a[i][j];
				socot = j;
			}
		}
		int dem = 0;
		for (int k = 0; k < n; k++)
		{
			if (temp>a[k][socot])
			{
				dem++;
			}
		}
		if (dem==0)
		{
			cout << temp;
		}
	}
}

// cucdai: la phan tu lon hon phan tu xung quanh'
