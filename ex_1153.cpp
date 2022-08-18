#include <iostream>
using namespace std;
int main()
{
	int N, a, m = 1;
	cin >> N;
	a = N;
	while(a >= 1)
	{
		m *= a;
		a--;
	}
	cout << m<<endl;
	return 0;
}
