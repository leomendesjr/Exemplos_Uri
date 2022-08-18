#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
using namespace std;
int main()
{
	int i, n, aux, tam;
	char comandos[1000];
	cin>>n;
	while(n != 0)
	{
		
			aux = 1;
			cin>>comandos;
			tam = strlen(comandos);
			for (i=0;i<tam;i++)
			{
				if (comandos[i] == 'D')
				{
					if (aux == 4) aux = 1;
					else aux++;
				}
				else if (comandos[i] == 'E')
				{
					if (aux == 1) aux = 4;
					else aux--;
				}
			}
			if (aux == 1) 
				cout<<"N"<<endl;
			else if (aux == 2) 
				cout<<"L"<<endl;
			else if (aux == 3) 
				cout<<"S"<<endl;
			else if (aux == 4) 
				cout<<"O"<<endl;
			cin>>n;
		}
	

	return 0;
}