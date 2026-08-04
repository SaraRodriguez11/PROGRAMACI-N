/*Escribir un programa que calcule el capital producido por un capital de x de pesos, al cabo de un año depositado a un interés del y% mensual.*/

#include <iostream>
#include <stdlib.h>

using namespace std; 

int main(){
	
	double capital, intereses, valor , ganancia; 
	
	cout<<"INTERES"<<endl; 
	cout<<"Ingrese el valor inicial"<<endl; 
	cin>>capital; 
	cout<<"ingrese el porcentaje del interes"<<endl; 
	cin>>intereses; 
	
	valor = capital/100*intereses; 
	ganancia = valor*12; 
	cout<<"EL valor  total ganando es:"<<ganancia<<endl; 
	
	
	system("Pause"); 
	return 0; 
}
