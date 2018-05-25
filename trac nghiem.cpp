#include <iostream>
using namespace std;
main()
{
	cout<<"Cau hoi: Cach nao khai bao mot bien va gan gia tri so nguyen la dung trong cac cau lenh C# sau ?"<<endl;
	cout<<"a. int 1x=10;"<<endl;
	cout<<"b. int x=10;"<<endl;
	cout<<"c. float x=10.0f;"<<endl;
	cout<<"d. string x='10';"<<endl;
	cout<<" Chon cau tra loi cua ban: ";
	char kitu;
	cin>>kitu;
	switch(kitu)
	{
		case 'a':
			cout<<"a. int 1x=10;"<<endl<<"Cau tra loi cua ban la sai!";
			break;
		case 'b':
			cout<<"b. int x=10;"<<endl<<"Cau tra loi cua ban la sai!";
			break;
		case 'c':
			cout<<"c. float x=10.0f;"<<endl<<"Cau tra loi cua ban la dung!";
			break;
		case 'd':
			cout<<"d. string x='10';"<<endl<<"Cau tra loi cua ban la sai!";
			break;
		default:
			cout<<"Ban nhap khong dung dap an!";
			break;
	}
}
