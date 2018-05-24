#include <iostream>
using namespace std;
main()
{
	char nguoichoi1,nguoichoi2;
	cout<<"Nguoi choi 1 (K,B,G):";
	cin>>nguoichoi1;
	cout<<"Nguoi choi 2 (K,B,G):";
	cin>>nguoichoi2;
	switch(nguoichoi1)
	{
		case 'K':
			switch(nguoichoi2)
			{
				case 'K':
					cout<<"Ket qua: hai ben hoa nhau!";
					break;
				case 'B':
					cout<<"Ket qua: nguoi choi 2 thang!";
					break;
				case 'G':
					cout<<"Ket qua: nguoi choi 1 thang!";
				default:
					cout<<"Ban nhap khong hop le!";
					break;
			}
		break;
			
		case 'B':	
			
			switch(nguoichoi2)
			{
				case 'B':
					cout<<"Ket qua: hai ben hoa nhau!";
					break;
				case 'G':
					cout<<"Ket qua: nguoi choi 2 thang!";
					break;
				case 'K':
					cout<<"Ket qua: nguoi choi 1 thang!";
				default:
					cout<<"Ban nhap khong hop le!";
					break;
			}
		break;				
		case 'G':
			switch(nguoichoi2)
			{
				case 'G':
					cout<<"Ket qua: hai ben hoa nhau!";
					break;
				case 'K':
					cout<<"Ket qua: nguoi choi 2 thang!";
					break;
				case 'B':
					cout<<"Ket qua: nguoi choi 1 thang!";
				default:
					cout<<"Ban nhap khong hop le!";
					break;
			}		
		break;				
		default:
			cout<<"Ban nhap khong hop le!";
		break;
			
	}
}	
						
