#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){

	
	int num, cont=1;
	
	cin>>num;
	
	
	if (num%2==0)	
		{
			num++;
		}	
		
		while(cont<=6)
			{
				cout << num<<endl;
				num = num + 2;
				cont++;
			}

		return 0;

}
