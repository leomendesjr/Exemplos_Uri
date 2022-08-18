#include <iostream>
using namespace std;
int main()
{
	int i, n, n1, n2, c1, c2;
	cin >> n;

	while(n > 0)
	{
		c1 = 0;
		c2 = 0;
		for (i = 0; i < n; i++)
		{
			cin >> n1 >> n2;
			if (n1 > n2)
				c1++;
			else if (n2 > n1)
				c2++;
		}
		cout << c1 << " " << c2 << endl;
		cin >> n;
	}

	return 0;
}
