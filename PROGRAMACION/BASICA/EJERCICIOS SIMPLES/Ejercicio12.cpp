/*Escribir un programa que evalúe la siguiente expresión:
(a+7*c)/(b+2-a)+2*b*/

#include <iostream>
#include <cmath>

using namespace std; 

int main(){
	
	float a, b, c, d;
	
	cout<<"Calcular la isguiente expresion: (a+7*c)/(b+2-a)+2*b "<<endl;
	
	cout<<"ingrese el valor de A"<<endl;
	cin>>a; 
	
	cout<<"Ingrese el valor de B"<<endl; 
	cin>>b;
	
	cout<<"Ingrese el valor de C"<<endl; 
	cin>>c; 
	
	d = a+7*c;
	
	cout<<"EL valor de la expresion es el siguiente:"<< (d/(b+2-a))+2*b <<endl; 
	
	system ("pause");
	return 0; 
	
	
}
