/* Escribir un programa que detecte si se han introducido en orden creciente tres números 
introducidos por el usuario.*/

#include <iostream>
using namespace std; 

int main(){
	
	int a,b, c; //números que vamos a  comparar
	
	
	//vamos a pedirle al usuario que ingrese los valores de a, b, c y los lea
	cout<<"Ingrese el valor de a"<<endl;
	cin>>a; 
	
	cout<<"ingrese el valor de b"<<endl; 
	cin>>b;  
	
	cout<<"ingrese el valor de C"<<endl; 
	cin>>c;
	
	// vamos hacer la condicion de los números 
	// lo que decimos en el id es que si a es menor que b y b menor que c el programa tiene los numeros creciente  si no es el else 
	if(a<b && b<c){
		cout<<"Los numeros son crecientes"<<endl;
		
	}else{
		cout<<"los numeros no son crecientes"<<endl; 
		
	}
	system ("Pause");
	
	
}
