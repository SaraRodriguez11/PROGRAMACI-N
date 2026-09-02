/*Escribir un programa que detecte si un número leído desde 
el teclado es mayor o menor que 100.*/

#include <iostream>
using namespace std; 

int main(){
	
	//declarar la variable 
	int n; 
	
	//pedirle al usuario que  digite el numero y leerlo
	
	cout<<"Ingrese el numero"<<endl; 
	cin>>n; 
	
	if(n< 100){
		cout<<"El numero es menor que 100"<<endl; 
		
	}else{
		cout<<"EL numero es mayor que 100"<<endl; 
		
	}
	system ("Pause");
	return 0; 
}
