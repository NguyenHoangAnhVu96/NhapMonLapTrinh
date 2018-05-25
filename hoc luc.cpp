#include <iostream>
using namespace std;
main()
{
	cout<<"Nhap ten sinh vien: ";
	string name;
	getline(cin,name);
	float t,l,h,tb;
	cout<<"Nhap diem toan: ";
	cin>>t;
	cout<<"Nhap diem ly: ";
	cin>>l;
	cout<<"Nhap diem hoa: ";
	cin>>h;
	tb=(t+l+h)/3;
	cout<<"Ten sinh vien: "<<name<<endl;
	cout<<"Diem trung binh: "<<tb<<endl;
	if(tb>=8)
	{
		cout<<"Xep loai xuat sac!";
	}
	else if(7<=tb&&tb<8)
	{
		cout<<"Xep loai gioi!";
	}
	else if(6<=tb&&tb<7)
	{
		cout<<"Xep loai kha!";
	}
	else if(5<=tb&&tb<6)
	{
		cout<<"Xep loai Tb!";
	}
	else
	{
		cout<<"Xep loai yeu!";
	}
	
}	
	
	
