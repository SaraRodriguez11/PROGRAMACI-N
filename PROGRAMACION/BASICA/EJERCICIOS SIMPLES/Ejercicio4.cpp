//Escribir un programa que sume, reste, multiplique y divida dos números: x = 10 y = 2.

#include <iostream>
using namespace std; 

int main(){
	
	int x = 10;
	
	int y = 2; 
	
	cout<<" La suma de los numeros" << x << " + "<<  y <<"  es: " << x+y <<endl; 
	cout<<" la resta de los numeros" << x << " - "<< y << " es: " << x-y <<endl; 
	cout<<"La multiplicacion de los numeros "<< x << " * "<< y <<" es:"<<x*y<<endl; 
	cout<<"La división de los numeros"<< x << " / " << y << " es:"<< x/y <<endl;
	
	system ("pause");
	return 0; 
}
