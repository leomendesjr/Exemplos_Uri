#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	int i;
	int N;
	int qnt = 0;


	cin >> N;
	for(i = 2; i <= N; i+=2)
		{
			n = pow(i,2);
			cout << i << "^2" << " = " << n << endl;

		}

	return 0;

}