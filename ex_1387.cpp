#include <iostream>
using namespace std;
int main()
{
	int h, m;
	cin >> h >> m;
	while(h > 0 && m > 0)
	{
		cout << h + m << endl;
		cin >> h >> m;
	}
	return 0;
}
