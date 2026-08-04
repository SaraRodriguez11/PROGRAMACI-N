/*Escribir un programa que calcule el número de horas, minutos y segundos que hay en 3700 segundos.*/

#include <iostream>

using namespace std; 

int main(){
	
	float segundos, minutos, horas; 
	
	segundos = 3700; 
	minutos = 3700/60; 
	horas= minutos/60; 
	
	cout<<"Calcular tiempo"<<endl; 
	cout<<"los segundos que hay son:"<<segundos<<endl;
	cout<<"los minutos son:"<<minutos<<endl; 
	cout<<"las horas son:"<<horas<<endl; 
	
	system ("pause");
	return 0; 
}
