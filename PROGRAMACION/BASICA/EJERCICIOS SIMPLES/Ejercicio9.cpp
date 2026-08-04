/*Escribir un programa que calcule la longitud y 
el área de una circunferencia, capturando el valor del radio.
longitud de la circunferencia = 2 * PI * radio
área de la circunferencia = PI * radio2*/

#define _USE_MATH_DEFINES // Habilita constantes como M_PI
#include <iostream>
#include <cmath>

using namespace std; 

int main (){
	
	int radio; 
	double pi = M_PI; 
	
	cout<<" AREA Y LONGITUD  DE LA CIRCUNFERENCIA" << endl; 
	
	cout<<"Ingrese el valor del radio"<<endl;
	cin>>radio; 
	
	cout<<"La longitud de la circunferencia es:"<< 2 * pi * radio <<endl; 
	cout<<"El area de la circunferencia es:" << pi * (radio* radio) <<endl; 
	
	system ("pause");
	
	
	
}
