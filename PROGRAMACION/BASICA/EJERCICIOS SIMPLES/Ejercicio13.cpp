/* Escribir un programa que evalúe la siguiente expresión:
(a+5) * 3 / 2 * b – b*/

#include <iostream>

using namespace std; 

int main() {
    float a, b, c;

    cout << "EVALUAR SIGUIENTE EXPRESION" << endl;
    cout << "Ingrese el valor de A" << endl;
    cin >> a;
    cout << "Ingrese el valor de B" << endl;
    cin >> b;

    if (b == 0) {
        cout << "Error division entre cero" << endl;
    } else {
        c = (a + 5) * 3 / 2 * b - b;
        cout << "La expresion es la siguiente: " << c << endl;
    }

    system("pause");
    return 0;
}
