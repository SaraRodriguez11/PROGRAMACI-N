/*Escribir un programa que lea desde teclado el importe bruto de una factura y determine el importe neto según los siguientes criterios.
Importe bruto menor de 20.000 -> sin descuento
Importe bruto mayor de 20.000 -> 15% de descuento*/

#include <iostream>
using namespace std; 



int main(){
	
	int stds=20000; 
	
	float impb, impnet, desc;
	float porcentaje = 0.15;
	
	cout<<"Importe neto de una factura"<<endl; 
	cin>>impb; 
	if(impb>stds){
		cout<<"descuento del 15%"<<endl;
		desc=impb*porcentaje;
	}else if(impb<stds){
		desc=0;
	}
	impnet = impb-desc;
	cout<<"El importe neto de la factura es:"<<impnet<<endl; 
	system("pause");
	return 0; 
	
}
