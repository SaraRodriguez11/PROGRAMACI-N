/* Escribir un programa que convierta un número de segundos en su equivalente en minutos y segundos.v 
*/

#include <iostream>

using namespace std; 

int main(){
	
	float seg, seg1, minutos; 
	
	cout<<"MINUTOS Y SEGUNDOS"<<endl; 
	cout<<"Digite la cantidad de segundos"<<endl; 
	cin>>seg; 
	minutos=seg/60; 
	seg1=minutos*60; 
	cout<<seg<<"segundos"<<""<<"""son equivalentes "<< seg1<<"segundos"<<endl; 
	cout<<seg<<"segundos"<<" "<<"son equivalentes "<< minutos<<"minutos"<<endl;
	
	
	system ("Pause"); 
	return 0; 
}

