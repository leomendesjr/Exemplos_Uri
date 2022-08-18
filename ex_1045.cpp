#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;
  //1045 comparação entre os lados de um triangulo/
  
int main() {
    
    double x,y,z,A,B,C;//declarando os lado A,B e C do triangulo
    cin>>A>>B>>C;
//descobrindo o maior lado entre os segmentos de reta
		
	if (A>=(B+C) || B>=(A+C) || C>=(B+A))
	cout<<"NAO FORMA TRIANGULO"<<endl;  //se um dos lados for maior que a soma dos outros 2, nao ha triangulo
		else
		{
			//atribuido valores, sera definido o maior lado
			
				if(B>A && B>C)  //verificando se B é o maior lado
			{
				y=A;
				x=B;
				z=C;
			}
				else if(C>B && C>A)  //verificando se C é o maior lado
			{
				y=A;
				z=B;
				x=C;
			}	
				else  //concluindo que A é o maior lado
			{
				x=A;
				y=B;
				z=C;
			}
			
			
         if (pow(x,2) == (pow(y,2) + pow(z,2))) //teorema de pitagoras
    	cout<<"TRIANGULO RETANGULO"<<endl;
//calculo de triangulo retangulo
        	else if (pow(x,2) > (pow(y,2) + pow(z,2)))//teorema de pitagoras adatpado
        	cout<<"TRIANGULO OBTUSANGULO"<<endl;
//calculo de triangulo obtusangulo
            	else if (pow(x,2) < (pow(y,2) + pow(z,2)))//teorema de pitagoras adaptado
            	cout<<"TRIANGULO ACUTANGULO"<<endl;
//calculo de triangulo acutangulo
                	if (x == y && x==z) //igualdade de lados
                	cout<<"TRIANGULO EQUILATERO"<<endl;
//semelhança de triangulo equilatero
                    	if( (x == y && x!=z)||(x == z && y!=z)||(y == z && x!=z))
                    	cout<<"TRIANGULO ISOSCELES"<<endl;   //acima, igualdade de um dos lados
//semelhança de triangulo isosceles
		}

	return 0;
}