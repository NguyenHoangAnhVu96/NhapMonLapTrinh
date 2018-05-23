#include <iostream>
using namespace std;
main()
{
	float a,b;
	char phep;
	cout<<"Nhap a,b"<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"Nhap phep tinh can thuc hien(+,-,*,/)"<<endl;
	cin>> phep;
	switch(phep)
	{
		case '+':
			cout<<"Ket qua cua phep tinh la:"<<a+b;
			break;
		case '-':
			cout<<"Ket qua cua phep tinh la:"<<a-b;
			break;
		case '*':
			cout<<"Ket qua cua phep tinh la:"<<a*b;
			break;
		case '/':
			cout<<"Ket qua cua phep tinh la:"<<a/b;
			break;
		default:
			cout<<"Ban nhap khong hop le!";
	}
}			
	
	
