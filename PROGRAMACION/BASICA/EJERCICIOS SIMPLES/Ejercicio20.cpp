/*Escribir un programa que calcule el equivalente en pies de una longitud de x metros sabiendo que 1 metro equivale a 39.27 pulgadas y 12 pulgadas equivalen a 1 pie.*/

#include <iostream>
#include <stdlib.h>

using namespace std; 

// constantes

const double pu1 = 39.27;
const double pu2 = 12;
int main(){
	
	float mt, pies;
	
	cout<<"Convertidor de metros a pies"<<endl; 
	cout<<"Digite la cantidad de metros"<<endl; 
	cin>>mt; 
	
	pies= mt*(pu1/pu2); 
	
	cout<<mt<<"metros equivalen a:"<<pies<<"pies"<<endl; 
	
	
	
	system("pause"); 
	return 0; 
	
	
}
