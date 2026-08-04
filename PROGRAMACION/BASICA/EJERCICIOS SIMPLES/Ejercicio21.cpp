/*Escribir un programa que calcule el área de un rectángulo a partir de sus coordenadas x1, y1,x2, y2.*/

#include <iostream>

using namespace std; 
int main(){
	
	int x1, x2, y1, y2, area; 
	
	cout<<"area del rectanculo"<<endl; 
	cout<<"Digite x1"<<endl; 
	cin>>x1; 
	cout<<"Digite x2"<<endl; 
	cin>>x2; 
	cout<<"Digite y1"<<endl; 
	cin>>y1; 
	cout<<"Digite y2"<<endl; 
	cin>>y2; 
	
	area =(x2-x1)*(y2-y1); 
	
	cout<<"EL area del rectangulo es:"<<area<<endl; 
	
	system("pause"); 
	return 0; 	
}
