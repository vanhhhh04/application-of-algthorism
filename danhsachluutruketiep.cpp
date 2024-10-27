//danh sach luu tru ke tiep 
#include<iostream>
#include<string>
#include<iomanip>
using namespace std ;
const int MAX_STUDENTS = 100;
struct sinhvien {
	string masv ;
	string hodem ;
	string ten ;
	int namsinh ;
	float diemtk ;
};
struct List {
	int count ;
    sinhvien E[MAX_STUDENTS];
};

void initialize(List &L)
{
	L.count = -1 ;
};
int Full(List &L)
{
	return L.count == MAX_STUDENTS -1 ; 
};
int Empty(List &L)
{
	return L.count == -1 ; 
};
int Add(List &L, sinhvien X)
{
	if (Full(L))
	{
		return 0;
	}
	else {
		L.count += 1 ;
		L.E[L.count] = X ;
		return 1 ; 
	}
};
int nhapsv(sinhvien &X)
{
	cout<<"nhap vao ma sv  :";
	getline(cin,X.masv);
	if (X.masv == "****")
	{
		return 0 ; 
	}
	cout<<"nhap vao hodem ";
	getline(cin,X.hodem);
};
void nhapdanhsachsv(List &L)
{
	initialize(L);
	sinhvien X; 
	int i = 0 ;
	do {
		cout<<"nhap vao sinh vien thu :"<<i << endl ;
		nhapsv(X);
		if (X.masv == "****")
		{
		return ;
		}
		Add(L,X); 
		i +=1 ; 
	}while(1);
};
void hienthi_danhsach(List L)
{
	cout<<setw(5)<<"STT";
	cout<<setw(10)<<"MASV";
	cout<<setw(15)<<"hodem"<<endl; 
	cout << L.count;
	for(int i = 0 ; i <= L.count; i++)
	{
		cout<<setw(5)<<1+i;
		cout<<setw(10)<<L.E[i].masv;
		cout<<setw(15)<<L.E[i].hodem<<endl;
	}
};
void xoasinhviendau(List &L)
{
	if (Empty(L))
	return ;
	else 
	for (int i = 1 ; i <= L.count; i++)
	{
		L.E[i-1] = L.E[i];
	};
	L.count -=1 ;
};

int main()
{
	List L;
	nhapdanhsachsv(L);
	hienthi_danhsach(L);
	xoasinhviendau(L);
	hienthi_danhsach(L);

}








