#include<iostream>
#include<conio.h>
#include"CHoaDon.h"
using namespace std;
void main()
{
	CHoaDon* x = new CHoaDon();

	cout << "Nhap hoa don" << endl;
	x->Nhap();
	cout << "\nThong tin hoa don" << endl;
	x->Xuat();

	cout << "\nTong so mon da mua: " << x->DemSPDaMua();

	cout << "\nTong tien: " << x->TinhTongTien();

	CCTHD* cthdCaoNhat = x->TimCTHDCoThanhTienCaoNhat();
	if (cthdCaoNhat == NULL)
		cout << "Khong co CTHD";
	else
	{
		cout << "\nCTHD co thanh tien cao nhat" << endl;;
		cthdCaoNhat->Xuat();
	}

	int sp;
	cout << "Nhap so luong san pham can tim: ";
	cin >> sp;
	cout << "So luong CTHD co " << sp << " san pham: " << x->DemSoLuongCTHDCoSLSPBangX(sp);

	CCTHD* cthd = x->TimCTHDCoSLLonHonBang2VaThanhTienCaoNhat();
	if (cthd == NULL)
		cout << "\nKhong co CTHD co so luong SP >= 2";
	else
	{
		cout << "\nCTHD co so luong SP >= 2 va co thanh tien cao nhat" << endl;
		cthd->Xuat();
	}

	delete x;

	_getch();
}