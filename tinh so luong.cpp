#include <iostream>
using namespace std;
main()
{
	cout<<"Nhap so gio lam: ";
	float sogio,luonggio,k;
	cin>>sogio;
	cout<<"Nhap so tien luong moi gio: ";
	cin>>luonggio;
	if(sogio>40)
	{
		k=sogio-40;
		cout<<"Tong so luong cua ban la: "<<(40*luonggio)+(k*luonggio*1.5);
	}
	else
		cout<<"Tong so luong cua ban la: "<<sogio*luonggio;
	
}
		
	
