/*Escribir un programa que dado un número del 1 a 7 escriba el
 correspondiente nombre del día de la semana.*/
 
 
#include <iostream>
#include<stdlib.h>

 using namespace std; 
 
 int main(){
 	
 	// le pedimos a el usuario que dijite un dia  y lo leemos
 	int dia; 
 	cout<<"Digite el numero de día"<<endl; 
 	cin>>dia; 
 	// vamos a usar el condicional  switch esto lo qy¿ue hace es que segun el caso que le damos nos lleva a un bloque de codigo
 	
 	switch(dia){
 		case 1:
 			cout<<"Lunes"<<endl;break;
 		
 		case 2:
 			cout<<"Martes"<<endl;break;
 		
 		case 3:
 			cout<<"Miercoles"<<endl;break; 
 			
 		case 4:
 			cout<<"Jueves"<<endl;break;
 		
 		case 5:
 			cout<<"Viernes"<<endl;break; 
 		
 		case 6:
 			cout<<"Sabado"<<endl;break;
 		case 7:
 			cout<<"Domingo"<<endl;break; 
 			
 		default:
 			cout<<"Los dias de la semana son 7"<<endl; 
	 }
	 
	 system ("PAUSE");
	 return 0; 
	 
	 

 }
