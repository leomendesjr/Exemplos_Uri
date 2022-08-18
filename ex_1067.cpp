#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x,k;
	//int z=1;

	cin >> x;
	for(k = 1; k <= x ; k = k + 2)
	{
		if (k%2==1)
	    cout << k <<endl;
	}
	
	return 0 ;	
}