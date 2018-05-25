#include <iostream>
using namespace std;
main()
{
	cout<<"Tien thue bao dien ke: 1000d/thang"<<endl;
	int somoi,socu,k,h;
	cout<<"Nhap so dien cu"<<endl;
	cin>>socu;
	cout<<"Nhap so dien moi"<<endl;
	cin>>somoi;
	k=somoi-socu;
	h=k-50;
	if(k<50)
	{
		cout<<"Chi so dien cu: "<<socu<<endl<<"Chi so dien moi: "<<somoi<<endl<<"Tien tra dinh muc: "<<50*480<<endl<<"Tien tra vuot dinh muc: 0"<<endl<<"Tong tien phai tra: " <<(50*480)+1000;
	}
	else if(k==50)
	{
		cout<<"Chi so dien cu: "<<socu<<endl<<"Chi so dien moi: "<<somoi<<endl<<"Tien tra dinh muc: "<<50*320<<endl<<"Tien tra vuot dinh muc: 0"<<endl<<"Tong tien phai tra :"<< (50*320)+1000;
	}
	else if(50<k&&k<100)
	{	
		cout<<"Chi so dien cu: "<<socu<<endl<<"Chi so dien moi: "<<somoi<<endl<<"Tien tra dinh muc: "<<50*320<<endl<<"Tien tra vuot dinh muc: "<<(k-50)*700<<endl<<"Tong tien phai tra: "<< (50*320)+1000+((k-50)*700);
	}
	else
	{			
		cout<<"Chi so dien cu: "<<socu<<endl<<"Chi so dien moi: "<<somoi<<endl<<"Tien tra dinh muc: "<<50*320<<endl<<"Tien tra vuot dinh muc: "<<(k-50)*900<<"Tong tien phai tra: "<< (50*320)+1000+((k-50)*900);
	}
}
	
