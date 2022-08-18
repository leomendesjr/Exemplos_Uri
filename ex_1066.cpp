#include<iostream>
using namespace std;
int main()
{
	int x, y, p=0, n=0, i=0, pa=0;
	for(x = 1; x <= 5; x++)
	{
		cin >> y;
		if(y > 0)
			p=p+1;	
        else if(y<0)
		 n=n+1;	
		if(y %2==0)
		  pa=pa+1;
		else i=i+1;
	}	
	cout << pa << " valor(es) par(es)" << endl;
	cout << i << " valor(es) impar(es)" << endl;
	cout << p << " valor(es) positivo(s)" << endl;
	cout << n << " valor(es) negativo(s)" << endl;
	return 0;
}
