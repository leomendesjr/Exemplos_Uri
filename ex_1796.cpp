#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
	int n, i, v, s;
	cin >> n;
	s = 0;
	for (i = 0; i < n; i++)
	{
		cin >> v;
		if (v == 0)
			s++;
	}
	if (s > n / 2)
		cout << "Y" << endl;
	else cout << "N" << endl;
	return 0;
}
