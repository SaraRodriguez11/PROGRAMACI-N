/*Escribir un programa que calcule la velocidad de un proyectil que recorre x Km en t minutos. Expresar el resultado en metros/segundo.
Velocidad = espacio/tiempo*/

#include <iostream>
using namespace std; 

int main(){
	
	float espacio; 
	float tiempo;
	
	cout<<"CALCULAR LA VELOCIDAD DE UN PROYECTIL"<<endl; 
	
	cout<<"Ingrese la distancia del proyectil en KM"<<endl; 
	cin>>espacio;
	
	cout<<"Ingrese el tiempo en el que recorre la distancia el proyectil en Min"<<endl;
	cin>>tiempo; 
	
	cout<<"La velocidad del proyectil es:"<< espacio/tiempo << "Km/m"<<endl; 
	
	system ("pause");
	return 0; 
	
}
