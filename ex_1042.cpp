#include <iostream>
#include <cmath>
#include <iomanip>
#include<stdlib.h>
using namespace std;

int main()
{
	int num1, num2, num3, troca, vez1, vez2, vez3;
	cin >> num1 >> num2 >> num3;
	vez1 = num1;
	vez2 = num2;
	vez3 = num3;
	if( num1 > num2 )
	{
		troca = num2;
		num2 = num1;
		num1 = troca;
	}
	if( num2 > num3 )
	{
		troca = num3;
		num3 = num2;
		num2 = troca;
	}
	if( num1 > num2)
	{
		troca = num2;
		num2 = num1;
		num1 = troca;
	}

	cout << num1 << endl << num2 << endl << num3 << endl << endl << vez1 << endl << vez2 << endl << vez3 << endl;


	return 0;
}