/*Escribir un programa que calcule la hipotenusa de un triángulo rectángulo*/

#include <iostream>
#include <stdlib.h>

using namespace std; 

int main (){
	
	float c1, c2, h; 
	
	cout<<"Hipotenusa de un triangulo rectangulo"<<endl; 
	cout<<"Ingrese cateto c1"<<endl; 
	cin>>c1; 
	cout<<"Ingrese cateto c2"<<endl; 
	cin>>c2; 
	h=((c1*c1)+(c2*c2)); 
	
	cout<<"La hipotenusa del triangulo es:"<<h<<endl; 
	
	system ("Pause"); 
	return 0; 
	
	
}
