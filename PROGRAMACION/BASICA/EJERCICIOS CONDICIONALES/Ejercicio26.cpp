/* Escribir un programa que determine si 
un número leído desde el teclado es par o impar*/

#include <iostream>
using namespace std; 

int main(){
	
	// declaramos la variable del numero 
	
	int n; 
	
	//le pedimos al usuario que ingrese el numero y lo lea
	
	cout<<"Ingrese el numero  que quiere consultar si es par o impar"<<endl;
	cin>>n; 
	
	//Hacemos el condicional para saber si el numero es par o no 
	//lo que  hacemos es mirar si el resuido al dividir en 2 es 0 es par si no el numero no seria impar
	
	if(n%2==0){ //% este operador modulo  lo que muestra es el resuido de la division
		cout<<"EL numero es par"<<endl; 
		
	}else{
		cout<<"EL numero es impar"<<endl; 
	}
	system ("Pause");
	return 0; 
	
}
