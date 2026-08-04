//Escribir un programa que calcule el área de un triángulo, capturando los valores de base yaltura.
//&área del triángulo = (base * altura)/2

#include <iostream>
using namespace std; 

int main(){
	
	int base; 
	int altura; 
	
	cout<<"Ingrese el numero de la base"<<endl;
	cin>>base; 
	cout<<"Ingrese el numero de la altura"<<endl; 
	cin>>altura; 
	
	cout<<" El area del triangulo es:"<<( base* altura)/2 <<endl; 
	
	system ("pause");
	return 0; 
}
