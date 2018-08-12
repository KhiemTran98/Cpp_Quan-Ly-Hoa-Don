#include<iostream>
#include"CHoaDon.h"
using namespace std;
CHoaDon::~CHoaDon()
{
	delete NTN;
	for (int i = 0; i < SoCTHD; i++)
		delete DanhSachCTHD[i];
	delete[] DanhSachCTHD;
}
void CHoaDon::Nhap()
{
	cout << "Nhap ma hoa don: ";
	cin >> MaHD;
	cout << "Nhap NTN luc mua" << endl;
	NTN = new CDate();
	NTN->Nhap();
	cout << "Nhap so tien duoc giam: ";
	cin >> SoTienDuocGiam;
	cout << "Nhap so san pham mua: ";
	cin >> SoCTHD;
	DanhSachCTHD = new CCTHD*[SoCTHD];
	for (int i = 0; i < SoCTHD; i++)
	{
		cout << "\nNhap san pham thu " << i + 1 << endl;
		DanhSachCTHD[i] = new CCTHD();
		DanhSachCTHD[i]->Nhap();
	}
}
void CHoaDon::Xuat()
{
	cout << "Ma hoa don: " << MaHD << endl;
	cout << "NTN luc mua: ";
	NTN->Xuat();
	cout << "\nSo tien duoc giam: " << SoTienDuocGiam << endl;
	cout << "So san pham mua: " << SoCTHD << endl;
	for (int i = 0; i < SoCTHD; i++)
	{
		cout << "\nSan pham thu " << i + 1 << endl;
		DanhSachCTHD[i]->Xuat();
	}
}
int CHoaDon::DemSPDaMua()
{
	return SoCTHD;
}
double CHoaDon::TinhTongTien()
{
	double tong = 0;
	for (int i = 0; i < SoCTHD; i++)
		tong += DanhSachCTHD[i]->GetThanhTien();
	tong -= SoTienDuocGiam;
	return tong + (tong / 100 * 10);
}
CCTHD* CHoaDon::TimCTHDCoThanhTienCaoNhat()
{
	if (SoCTHD <= 0)
		return NULL;
	CCTHD* cthd = DanhSachCTHD[0];
	for (int i = 1; i < SoCTHD; i++)
		if (DanhSachCTHD[i]->GetThanhTien() > cthd->GetThanhTien())
			cthd = DanhSachCTHD[i];
	return cthd;
}
int CHoaDon::DemSoLuongCTHDCoSLSPBangX(int x)
{
	int d = 0;
	for (int i = 0; i < SoCTHD; i++)
		if (DanhSachCTHD[i]->GetSoLuongSP() == x)
			d++;
	return d;
}
CCTHD* CHoaDon::TimCTHDCoSLLonHonBang2VaThanhTienCaoNhat()
{
	if (SoCTHD <= 0)
		return NULL;
	CCTHD* cthd = NULL;
	int i = 0;
	for (; i < SoCTHD; i++)
		if (DanhSachCTHD[i]->GetSoLuongSP() >= 2)
		{
			cthd = DanhSachCTHD[i];
			break;
		}
	if (cthd == NULL)
		return NULL;
	for (i + 1; i < SoCTHD; i++)
		if (DanhSachCTHD[i]->GetSoLuongSP() >= 2)
			if (cthd->GetThanhTien() < DanhSachCTHD[i]->GetThanhTien())
				cthd = DanhSachCTHD[i];
	return cthd;
}