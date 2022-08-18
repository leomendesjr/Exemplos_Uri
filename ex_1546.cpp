#include <iostream>
using namespace std;
int main()
{
	int i, j, k, n, x;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> k;
		for (j = 0; j < k; j++)
		{
			cin >> x;
			if (x == 1)
				cout << "Rolien" << endl;
			else if (x == 2)
				cout << "Naej" << endl;
			else if (x == 3)
				cout << "Elehcim" << endl;
			else if (x == 4)
				cout << "Odranoel" << endl;
		}
	}
	return 0;
}
