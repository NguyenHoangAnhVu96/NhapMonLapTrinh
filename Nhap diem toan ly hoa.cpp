#include <iostream>
using namespace std;
main()
{
	cout<<"Nhap diem"<<endl;
	float t,l,h,tong;
	cout<<"Diem toan:";
	cin>>t;
	cout<<"Diem ly:";
	cin>>l;
	cout<<"Diem hoa:";
	cin>>h;
	tong=t+l+h;
	cout<<"Tong diem cua ban la:"<<tong<<endl;
	if(tong>=15&&t>=4&&l>=4&&h>=4)
	{
		cout<<"Ban da dau ki thi";
		if(t>5&&l>5&&h>5)
		{
			cout<<"Hoc deu cac mon!";
		}
		else
		{
			cout<<"Hoc chua deu cac mon!";
		}
	}
	else
	{
		cout<<"Thi hong!";
	}
}	
	
