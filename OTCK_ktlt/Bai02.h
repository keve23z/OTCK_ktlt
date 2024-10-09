#pragma once
#include<iostream>
using namespace std;
void Menu_BangDien() {
	cout << "\n Gia ban le dien sinh hoat:";
	cout << "\n Bac 01: Cho KWH tu 0-50:   \t\t 1.678 (dong/kWh)";
	cout << "\n Bac 02: Cho KWH tu 50-100: \t\t 1.734 (dong/kWh)";
	cout << "\n Bac 03: Cho KWH tu 101-200:\t\t 2.014 (dong/kWh)";
	cout << "\n Bac 04: Cho KWH tu 201-300:\t\t 2.536 (dong/kWh)";
	cout << "\n Bac 05: Cho KWH tu 301-400:\t\t 2.834 (dong/kWh)";
	cout << "\n Bac 06: Cho KWh tu 401 tro len:\t 2.927 (dong/kWh)";
}
int TienDien_PhaiTra(int SoDien) {
	int Bac1 = 1678, Bac2 = 1734, Bac3 = 2014, Bac4 = 2536, Bac5 = 2834, Bac6 = 2927;
	int TienDien;
	if (SoDien<0)
	{
		TienDien= 0;
	}
	else if (SoDien<51)
	{
		TienDien = SoDien * Bac1;
	}
	else if (SoDien<101)
	{
		TienDien = 50 * Bac1 + (SoDien - 50) * Bac2;
	}
	else if (SoDien < 201)
	{
		TienDien = 50 * Bac1 + 50*Bac2+ (SoDien - 100) * Bac3;
	}
	else if (SoDien < 301)
	{
		TienDien = 50 * Bac1 + 50 * Bac2 + 100 * Bac3 + (SoDien - 200) * Bac4;
	}
	else if (SoDien < 401)
	{
		TienDien = 50 * Bac1 + 50 * Bac2 + 100 * Bac3 + 100 * Bac4 + (SoDien - 300) * Bac5;
	}
	else 
	{
		TienDien = 50 * Bac1 + 50 * Bac2 + 100 * Bac3 + 100 * Bac4 + 100 * Bac5 + (SoDien - 400) * Bac6;
	}
	return TienDien;
}