#include <iostream>
using namespace std;
main()
{
	int thang,nam;
	cout<<"Nhap vao thang can kiem tra"<<endl;
	cin>> thang;
	switch(thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout<<"Thang"<<thang<<"co 31 ngay!";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout<<"Thang"<<thang<<"co 30 ngay!";
			break;
		case 2:
			cout<<"Nhap vao nam can kiem tra"<< endl;
			cin>>nam;
			if((nam%4==0&&nam%100!=0) || nam%400==0)
		{
				cout << "Thang 2 co 29 ngay!";
			}
			else
			{
				cout << "Thang 2 co 28 ngay!";
			}
		default:
			cout << "Ban nhap khong hop le!";
			break;
		}
	}
	
