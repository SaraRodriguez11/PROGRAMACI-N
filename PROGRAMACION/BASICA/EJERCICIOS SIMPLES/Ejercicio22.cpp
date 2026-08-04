/*Escribir un programa que lea dos números enteros A y B, y obtenga los valores de la división entera de A dividido B y el residuo de esta.*/

#include <iostream>
#include <stdlib.h>

using namespace std; 

int main(){
	
	int a,b, mod; 
	
	float division; 
	
	cout<<"Division y resuido de dos numeros"<<endl; 
	cout<<"DIgite el primer numero"<<endl; 
	cin>>a;
	cout<<"Digite el segundo numero"<<endl; 
	cin>>b; 
	if(b==0){
		cout<<"Error division entre 0"<<endl; 
		
	}
	else{
		division =a/b;
		mod=a-(division*b); 
		cout<<"EL resultado de la division es:"<<division<<endl;
		cout<<"El resultado del resuido es:"<<mod<<endl;  
	}
	system ("pause");
	return 0; 
	
}
