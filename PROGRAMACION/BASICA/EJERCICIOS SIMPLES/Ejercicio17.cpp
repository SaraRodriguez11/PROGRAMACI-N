/*Escribir un programa que calcula el equivalente en grados Fahrenheit o Celsius de una temperatura t.
Celsius / 5 = (Fahrenheit – 32) 9*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	float t, cels, fare; 
	
	cout<<"TEMPERATURA"<<endl; 
	
	cout<<"Ingrese la temperatura"<<endl; 
	cin>>t; 
	
	cels = ( t- 32)* 5/9; 
	fare = (t+32)* 9/5;
	
	cout<<"La temperatura en grados fahrenheit es: "<<fare<<endl; 
	cout<<"La temperatura en grados celsius es:"<<cels<<endl; 
	
	system("Pause"); 
	return 0; 
	
}
