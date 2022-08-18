#include <iostream>
#include <cmath>
#include <iomanip>
#include<stdlib.h>
using namespace std;

int main()
{
   float codx, cody;
   cin >> codx >> cody;
   if(codx==0 && cody==0){
	   cout<<"Origem"<<endl;
   } 
   else if(codx==0){
	   cout<<"Eixo Y"<<endl;
   }
   else if(cody==0){
	   cout<<"Eixo X"<<endl;
   }
   else if(codx>0 && cody>0){
	  cout<<"Q1"<<endl; 
   }
   else if(codx<0 && cody>0){
	  cout<<"Q2"<<endl; 
   }
   else if(codx<0 && cody<0){
	  cout<<"Q3"<<endl; 
   }
   else if(codx>0 && cody<0){
	  cout<<"Q4"<<endl; 
   }
	return 0;
}