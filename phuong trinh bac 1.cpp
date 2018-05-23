#include <iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"Nhap a va b"<<endl;
	cin >> a>> b;
	if(a!=0&&b!=0)
	{
		cout<<"ket qua la:  "<<(float)-b/a;
	}
	else if(a==0&&b==0)
	{
		cout <<"phuong trinh co vo so nghiem";
	}
	else if(a==0&&b!=0)
	{
		cout<<"phuong trinh vo nghiem";	
	}
	else
	{
		cout<< "ket qua la: 0";
	}
}
