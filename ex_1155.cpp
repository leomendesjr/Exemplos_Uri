#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i;
	float resul =0;
	for(i=1;i<=100;i++){
		resul = resul + 1/(i*1.0);
	}
	cout<<fixed<<setprecision(2);
	cout<<resul<<endl;
    return 0;
}