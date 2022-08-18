#include<iostream>
using namespace std;
int main()
{
	int x, y,pos=0,z=0;;
	for(x = 0; x < 100; x++)
	{
		cin>>y;
		if(y>z){
			z=y;
			pos=x;
		}
	}	
	cout<<z<<endl;
	cout<<pos+1<<endl;		
	return 0;
}
