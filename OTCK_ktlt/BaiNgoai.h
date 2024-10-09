#pragma once
#include"Bai01_3(ST).h"
#include"Bai01_1(SN).h"
//Them phan tu so nguyen
void ThemPhanTuInt(int* a, int& n, int gt, int vt) {
	if (vt<0)
	{
		vt = 0;
	}
	else if (vt>n) {
		vt = n;
	}
	for (int i = n; i < n; i--)
	{
		a[i] = a[i - 1];
	}
	a[vt] = gt;
}
//Them phan tu so thuc
void ThemPhanTuFloat(float* a, int& n, float gt, int vt) {
	if (vt < 0)
	{
		vt = 0;
	}
	else if (vt > n) {
		vt = n;
	}
	for (int i = n; i < n; i--)
	{
		a[i] = a[i - 1];
	}
	a[vt] = gt;
}
//Xoa phan tu so nguyen cho truoc vitri
void XoaPhanTuInt(int* a, int& n, int vt) {
	if (vt < 0)
	{
		vt = 0;
	}
	else if (vt > n) {
		vt = n-1;
	}
	for (int i = vt; i < n-1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
//Xoa phan tu so thuc cho truoc vitri
void XoaPhanTuFloat(float* a, int& n, int vt) {
	if (vt < 0)
	{
		vt = 0;
	}
	else if (vt > n) {
		vt = n - 1;
	}
	for (int i = vt; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
// xoa phan tu san
void XoaPhanTuSanInt(int* a, int& n, int gt) {
	for (int i = 0; i < n; i++)
	{
		if (gt==a[i])
		{

		}
	}

}