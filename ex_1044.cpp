#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main (){

	int a,b,c,d;
	
	cin>>a;
	cin>>b;
	
	c=a%b;
	d=b%a;
	
	if (a>b && c==0)
	{
		cout<< "Sao Multiplos" << endl;
	}
	
	else if (b>a && d==0)
	{
		cout<< "Sao Multiplos" << endl;
	}
	
	else if (a>b && c!=0)
	{
		cout<< "Nao sao Multiplos" << endl;
	}
	
	else if (b>a && d!=0)
	{
		cout<< "Nao sao Multiplos" << endl;
	}
	
	return 0;
}
