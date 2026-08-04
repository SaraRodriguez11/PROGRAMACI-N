/*Escribir un programa que calcule el volumen de una esfera de radio = r volumen de la esfera
= 4/3 * PI * radio3*/

#define _USE_MATH_DEFINES // Habilita constantes como M_PI
#include <iostream>
#include <cmath>

using namespace std; 
int main (){
	
	double pi = M_PI;
	float radio; 
	
	cout<<"VOLUMEN DE LA ESFERA "<<endl; 
	
	cout<<"Ingrese el valor del radio"<<endl;
	cin>>radio; 
	
	cout << "El volumen de la esfera es: " << (4.0 / 3.0) * pi * pow(radio, 3) << endl; 
	
	system ("pause");
	return 0; 
}
