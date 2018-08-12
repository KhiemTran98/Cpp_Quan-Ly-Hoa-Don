#include"CCTHD.h"
#include"CDate.h"
class CHoaDon
{
private:
	int MaHD;
	CDate* NTN;
	double SoTienDuocGiam;
	CCTHD* *DanhSachCTHD;
	int SoCTHD;
public:
	~CHoaDon();
	void Nhap();
	void Xuat();
	int DemSPDaMua();
	double TinhTongTien();
	CCTHD* TimCTHDCoThanhTienCaoNhat();
	int DemSoLuongCTHDCoSLSPBangX(int x);
	CCTHD* TimCTHDCoSLLonHonBang2VaThanhTienCaoNhat();
};