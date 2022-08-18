#include <iostream>
#include <stdlib.h>

using namespace std;
int compare (const void * x, const void * y)
{
	return (*(int*)x - *(int*)y);
}

int main()
{

	int i, num, k, pos, valor[10001], teste[10001], n;
	cin>>n;

	while(n !=0)
	{
			for (i = 0; i < n; i++)
			{
				cin>>valor[i];
				teste[i] = valor[i];
			}
			qsort(teste, n, sizeof(int), compare);
			num = teste[i-2];
			for (k = 0; k < n; k++)
			{
				if (num == valor[k])
				{
					pos = k+1;
					break;
				}
			}
			cout<<pos<<endl;
		cin>>n;
		}
		


	return 0;
}