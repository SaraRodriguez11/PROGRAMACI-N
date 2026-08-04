/*Escribir un programa que evalúe la siguiente expresión:
(-b + raíz cuadrada(b2-4*a*c)/(2*a).*/

#include <iostream>
#include <cmath>

using namespace std; 

int main(){
	
	double a, b, c, r; 
	
	cout<<"Ingrese el valor de a:"<<endl; 
	cin>>a; 
	cout<<"Ingrese el valor  de b:"<<endl;
	cin>>b; 
	cout<<"Ingrese el valor  de c"<<endl;
	cin>>c; 
	
	r = -b+ (sqrt(pow(b,2))+2 -a )/(2*a); 
	cout<<"EL resultado de la expresion es:"<< r <<endl; 
	
	system("Pause");
	return 0; 
	
}
