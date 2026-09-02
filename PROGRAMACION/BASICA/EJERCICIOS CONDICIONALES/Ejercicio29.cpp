/*Escribir un programa que lea un caracter e indique si es o no una vocal.*/

#include <iostream>
using namespace std; 

int main(){
	
	char c; 
	
	cout<<"Ingrese el caracter"<<endl; 
	cin>>c; 
	
	switch(c){
		
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':	
		
		cout<<"El caracter es una vocal"<<endl;
		break; 
		default:
		cout<<"El caracter no es una vocal"<<endl; 
		break; 
			
	}
	system ("pause");
	return 0; 
	
	
}

