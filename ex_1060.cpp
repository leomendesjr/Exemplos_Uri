#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float n;
	int i;
	int N = 6;
	int qnt = 0;

	for(i=0; i<N; i++){
		cin >> n;
		if(n>0){
			qnt++;
		}
	}
	cout << qnt << " valores positivos" <<  endl;
	return 0;

}