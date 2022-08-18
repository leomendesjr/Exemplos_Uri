#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	int i;
	int N = 5;
	int qnt = 0;



	for(i = 0; i < N; i++)
	{
		cin >> n;
		if(n%2==0)
		{
			qnt++;
		}

	}
	cout << qnt << " valores pares" <<  endl;
	return 0;

}