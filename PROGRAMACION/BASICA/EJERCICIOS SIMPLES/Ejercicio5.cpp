// Escribir un programa que sume, reste, multiplique y divida dos números leídos desde el teclado.

#include <iostream>
using namespace std; 

int main(){
	
	int x; 
	int y; 
	
	cout<<"Ingrese por favor el primer numero"<<endl; 
	cin>>x; 
	
	cout<<"ingrese por favor el segundo numero"<<endl; 
	cin>>y; 
	
	cout<<"La suma de los numeros es:"<< x+y <<endl;
	cout<<"La resta de los numeros es:" << x-y <<endl;
	cout<<"La multiplicacion de los numeros es: "<< x*y << endl; 
	cout<<"La division de los numeros es: " << x/y <<endl;
	
	system ("pause");
	return 0; 
}
