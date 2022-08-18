#include<iostream>

using namespace std;

int main()
	{ 
	int COD, QUANTA, QUANTG, QUANTD;
		QUANTA=0;
		QUANTG=0;
		QUANTD=0;
	do{
	
		cin>>COD;
		if (COD == 1)
			QUANTA=QUANTA+1;
			else if (COD == 2)
					QUANTG=QUANTG+1;
					else if (COD == 3)
							QUANTD=QUANTD+1;
					
								
		
					
	}while(COD!=4);
			cout<<"MUITO OBRIGADO"<<endl;
			cout<<"Alcool: "<<QUANTA<<endl;
			cout<<"Gasolina: "<<QUANTG<<endl;
			cout<<"Diesel: "<<QUANTD<<endl;
	return 0;
	}

