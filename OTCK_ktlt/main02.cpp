#include"Bai06.h"
void main() {
	int a[100][100], n=-1, luachon;
	do
	{
		menu();
		cout << "\n Lua chon chuc nang: ";
		cin >> luachon;
		switch (luachon)
		{
		case 1:
			do
			{
				cout << "\nNhap so luong mang:";
				cin >> n;
			} while (n < 2);
			TaoMang_Phim(a, n);
			break;
		case 2:
			do
			{
				cout << "\nNhap so luong mang:";
				cin >> n;
			} while (n < 2);
			TaoMang_Random(a, n);
			break;
		case 3:
			if (n<2)
			{
				cout << "\n Khong co ma tran vuong hoang chinh!!!";
			}
			else
			{
				XuatMang_2C(a, n);
			}
			break;
		case 4:
				if (n < 2)
				{
					cout << "\n Khong co ma tran vuong hoang chinh!!!";
				}
				else
				{
					Xuat_DuongCheo_Chinh(a, n);
				}
				break;
		case 5:
			if (n < 2)
			{
				cout << "\n Khong co ma tran vuong hoang chinh!!!";
			}
			else
			{
				tamgiac(a, n);
			}
			break;
		case 6:
			if (n < 2)
			{
				cout << "\n Khong co ma tran vuong hoang chinh!!!";
			}
			else
			{
				cout << "\n Tong duong cheo chinh la: " << Tong_DCC(a,n);
				cout << "\n Tong duong cheo phu la: " << Tong_DCP(a, n);
				cout << "\n Tong duong cheo tam giac tren la: " << Tong_TamGiac_Tren(a,n);
				cout << "\n Tong duong cheo tam giac duoi la: " << Tong_TamGiac_Duoi(a, n);
			}
			break;
		case 7:
			if (n < 2)
			{
				cout << "\n Khong co ma tran vuong hoang chinh!!!";
			}
			else
			{
				XuatDuongCheo_SongSong_DCC(a, n);
			}
			break;
		case 8:
			if (n < 2)
			{
				cout << "\n Khong co ma tran vuong hoang chinh!!!";
			}
			else
			{
				XuatDuongCheo_SongSong_DCP(a, n);
			}
			break;
		case 9:
			if (n < 2)
			{
				cout << "\n Khong co ma tran vuong hoang chinh!!!";
			}
			else
			{
				cout << "\n Tong bien cua ma tran la: " << tongBien(a, n);
			}
			break;
		case 10:
			if (n < 2)
			{
				cout << "\n Khong co ma tran vuong hoang chinh!!!";
			}
			else
			{
				yenNgua(a, n);
			}
			break;
		default:
			break;
		}
	} while (luachon!=0);
	

}