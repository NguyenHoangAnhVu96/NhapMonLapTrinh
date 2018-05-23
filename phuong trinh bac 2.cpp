#include <iostream>
#include <math.h>
using namespace std;
main()
{
	float a,b,c,Q,K;
	cout<<"Nhap a, b, c"<<endl;
	cin>> a>>b>>c;
	Q=(b*b)-(4*a*c);
	K=sqrt(Q);
	if(a==0)
		if(b!=0&&c!=0)
	{
		cout<<"ket qua la:  "<<(float)-c/b;
	}
		else if(b==0&&c==0)
	{
		cout <<"phuong trinh co vo so nghiem";
	}
		else if(b==0&&c!=0)
	{
		cout<<"phuong trinh vo nghiem";	
	}
		else
	{
		cout<< "ket qua la: 0";
	}
	else
		if(Q<0)
	{
		cout<<"phuong trinh vo nghiem";
	}
		else if(Q==0)
	{
		cout<<"phuong trinh co nghiem kep: x1=x2="<<-b/(2*a);
	}
		else
	{
		cout<<"phuong trinh co 2 nghiem phan biet:"<<endl;
		cout<<"x1="<<(-b+K)/(2*a)<<endl;
		cout<<"x2="<<(-b-K)/(2*a);
	}
}
