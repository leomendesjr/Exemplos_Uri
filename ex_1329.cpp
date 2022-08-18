#include <iostream>

using namespace std;
int main()
{
	int i, x, cm, cj,y;
	cin >> x;
	
	while(x > 0)
	{
		cm = 0;
		cj = 0;
		for (i = 0; i < x; i++)
		{
			cin >> y;
			if (y == 0) 
			cm++;
			else if (y == 1)
			 cj++;
		}
		cout << "Mary won " << cm << " times and John won " << cj << " times" << endl;
		cin >> x;
	}



	return 0;
}
