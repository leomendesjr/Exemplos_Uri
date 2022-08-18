#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float n, ie;
	int i;
	int N = 6;
	int qnt = 0;
	float media;


	for(i = 0; i < N; i++)
	{
		cin >> n;
		if(n > 0)
		{
			media = media + n;
			qnt++;
		}

	}
	cout << qnt << " valores positivos" <<  endl;

	cout << fixed << setprecision(1);
	cout << media / qnt << endl;
	return 0;

}