//Modifique el ejercicio anterior para que los valores de los lados sean suministrados por el usuario

#include <iostream>

using namespace std; 

int main (){
	
	int lado1;
	int lado2;
	
	cout<<"Por favor ingrese los valores de los lados para saber el area de un rectangulo"<<endl;
	
	cout<<"Ingrese Lado1"<<endl; 
	cin>>lado1;
	
	cout<<"Ingrese Lado2"<<endl;
	cin>>lado2; 
	
	cout<<"El area del rectangulo es:"<< lado1*lado2 <<endl; 
	
	system ("pause");
	return 0; 
}
