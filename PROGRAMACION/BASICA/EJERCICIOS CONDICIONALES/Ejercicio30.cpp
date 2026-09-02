/*Escribir un programa que lea dos números desde el teclado y si el primero
 es mayor que el segundo intercambie sus valores.*/
 
#include <iostream>

using namespace std; 
int main(){
	
	int n1, n2, a,b; 
	
	cout<<"numero mayor e intercambio"<<endl; 
	cout<<"Ingrese el primer numero "<<endl; 
	
	cin>>n1; 
	cout<<"ingrese el segundo numero"<<endl; 
	cin>>n2; 
	
	if(n1>n2){
		a=n2;
		b=n1;
		
		cout<<"EL numero mayor"<<a<<endl; 
		cout<<"el numero menor"<<b<<endl; 
	}else if(n2>n1){
		cout<<"El numero mayor"<<n2<<endl; 
		cout<<"EL numero menor "<<n1<<endl; 
	}
	system ("pause");
	return 0; 
}
