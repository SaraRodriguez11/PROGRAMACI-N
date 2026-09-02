/*Escribir un programa que una vez 
leída una hora en formato (horas, minutos, segundos) 
indique cual será el tiempo dentro de un segundo.*/



#include <iostream>
#include <iomanip>// para mostrar la hora con dos digitos esta libreria sirve para manipular los formatos de entrada y salida 

using namespace std;

int main() {
	
    int horas, minutos, segundos;

    // Leer los datos de entrada
    cout << "Introduce las horas, minutos y segundos (separados por espacios): ";
    cin >> horas >> minutos >> segundos;

    // 1. Sumar el segundo
    segundos++;

    // 2. Controlar el desbordamiento de segundos
    if (segundos == 60) {
        segundos = 0;
        minutos++;
        
        // 3. Controlar el desbordamiento de minutos
        if (minutos == 60) {
            minutos = 0;
            horas++;
            
            // 4. Controlar el desbordamiento de horas
            if (horas == 24) {
                horas = 0;
            }
        }
    }

    // Mostrar el resultado con formato de dos dígitos (00:00:00)
    cout << "El tiempo dentro de un segundo sera: " 
         << setfill('0') << setw(2) << horas << ":" 
         << setfill('0') << setw(2) << minutos << ":" 
         << setfill('0') << setw(2) << segundos << endl;

    return 0;
}
