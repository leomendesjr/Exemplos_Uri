#include <iostream>

using namespace std;

int main()
{
	int n,x;
	cin >> x;
	for(int i = 1; i <= x; i++)
	{
		cin>>n;
		if(n == 0)
			cout << "NULL" << endl;
		else
		{
			if(n % 2 == 0)
				cout << "EVEN";
			else cout << "ODD";
			if(n > 0)
				cout << " POSITIVE"<<endl;
			else cout << " NEGATIVE"<<endl;
		}
	}
	return 0;
}
