#include <iostream>
#include <cmath>
using namespace std;
main()
{
	int a,b,c;
	float p;
	cout<<"Nhap vao 3 canh cua tam giac!"<<endl;
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	if(a>0&&b>0&&c>0)
	{
		if((a+b)>c&&(a+c)>b&&(b+c)>a)
		{
			cout<<"Dien tich cua tam giac la: "<< sqrt(p*(p-a)*(p-b)*(p-c));
		}
		else
		{
			cout<<"3 canh ban nhap khong phai la canh cua tam giac!";
		}
	}	
	else
	{
		cout<<"Ban da nhap sai!";
	}
}
		
