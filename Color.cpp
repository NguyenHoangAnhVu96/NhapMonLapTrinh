#include <iostream>
using namespace std;
main()
{
	char color;
	cout<<"Chon mau ban muon!"<<endl;
	cin>>color;
	switch(color)
	{
		case 'r':
		case 'R':
			cout<<"RED";
			break;
		case 'g':
		case 'G':
			cout<<"GREEN";
			break;
		case 'b':
		case 'B':
			cout<<"BLUE";
			break;
		default:
			cout<<"BLACK";
	}	
}	

				
