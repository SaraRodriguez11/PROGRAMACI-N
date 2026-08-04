/*Escribir un programa que calcule las raíces de una ecuación de 2° grado.
(-b + raíz cuadrada(b2-4*a*c)/(2*a).
(-b - raíz cuadrada(b2-4*a*c)/(2*a).*/

#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std; 


int main(){
	
	float a, b, c,r1, r2; 
	
	cout<<"Ecuación de segundo grado"<<endl; 
	cout<<"Ingrese el valor de a"<<endl; 
	cin>>a; 
	cout<<"ingrese el valor de b"<<endl; 
	cin>>b; 
	cout<<"ingrese el valor de c"<<endl; 
	cin>>c; 
	
	if(pow(b,2)>4*a*c){
		r1= -b+(sqrt((pow(b,2))+2-a)/(2*a) ); 
		r2= -b-(sqrt((pow(b,2))+2-a)/(2*a) ); 
		
		cout<<"primera raiz"<<r1<<endl; 
		cout<<"segunda raiz"<<r2<<endl; 
		
		
	}
	else 
	
	cout<<"Numeros complejos"<<endl; 
	system ("Pause"); 
	return 0; 
	
	
	
}
