#include<iostream>
#include"CCTHD.h"
using namespace std;
CCTHD::~CCTHD() {}
void CCTHD::Nhap()
{
	cout << " Nhap ma san pham: ";
	cin >> MaSP;
	cout << " Nhap so luong san pham: ";
	cin >> SoLuongSP;
	cout << " Nhap don gia: ";
	cin >> DonGia;
	ThanhTien = SoLuongSP * DonGia;
}
void CCTHD::Xuat()
{
	cout << " Ma san pham: " << MaSP << endl;
	cout << " So luong san pham: " << SoLuongSP << endl;
	cout << " Don gia: " << DonGia << endl;
	cout << " Thanh tien: " << ThanhTien << endl;
}
double CCTHD::GetThanhTien()
{
	return ThanhTien;
}
int CCTHD::GetSoLuongSP()
{
	return SoLuongSP;
}