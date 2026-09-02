/*Escribir un programa que detecte si un número 
introducido desde el teclado es positivo o negativo.*/

#include <iostream>

using namespace std; 
int main (){
	int n; //Numero que vamos a detectar
	
	cout<<"Ingrese el Numero"<<endl;
	cin>>n; 
	
	if(n>0){
		
		cout<<"El nuemro:"<<n<<" es positivo "<<endl; 
		
	}
	else{
		cout<<"EL numero:"<<n<<"es negativo"<<endl; 
	}
	
	system ("PAUSE"); 
	return 0; 
}
