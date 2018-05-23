#include <iostream>
using namespace std;
int main()
{
	int thang,nam;
	cout << "Nhap vao thang can kiem tra"<< endl;
	cin>> thang;
	if(thang==1 || thang==3 || thang==5 || thang == 7 || thang ==8 || thang ==10 || thang==12)
	{
		cout<<"thang"<<thang<<"co 31 ngay";
	}
	else if(thang==4 || thang==6 || thang==9 || thang ==11)
	{
		cout<<"thang"<<thang<<"thang co 30 ngay";
	}
	else if(thang==2)
	{
		cout<<"Nhap vao nam can kiem tra: "<<endl;
		cin>>nam;
		if((nam%4==0&&nam%100!=0) || nam%400==0)
	{
			cout << "Thang 2 co 29 ngay!";
		}
		else
		{
			cout << "Thang 2 co 28 ngay!";
		}
	}
	else
	{
		cout << "Ban nhap khong hop le!";
	}
}
