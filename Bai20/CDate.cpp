#include<iostream>
#include"CDate.h"
using namespace std;
CDate::~CDate() {}
void CDate::Nhap()
{
	cout << " Nhap ngay: ";
	cin >> d;
	cout << " Nhap thang: ";
	cin >> m;
	cout << " Nhap nam: ";
	cin >> y;
}
void CDate::Xuat()
{
	cout << d << "/" << m << "/" << y;
}