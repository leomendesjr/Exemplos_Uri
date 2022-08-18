#include<iostream>

using namespace std;

int main()
	{ 
	int SENHA;
	
	do{
		cin>>SENHA;
		if (SENHA != 2002)
			cout<<"Senha Invalida"<<endl;
		else cout<<"Acesso Permitido"<<endl;
				
	}while(SENHA!=2002);
	
	return 0;
	}
