// Materia: Programaci�n I, Paralelo 3
// Autor: Leonel Paz Gutierrez
// Fecha creaci�n: 21/09/2023
// Fecha modificaci�n: 21/09/2023
// N�mero de ejericio: 8
// Problema planteado: Pago de estacionamiento
#include <iostream>

using namespace std;

// Funci�n para calcular el precio total con descuento
double calcularPrecio(double p, int c) {
    double t = p * c;
    double d;

    if (c < 5) {
        d = 0.10; // 10% de descuento
    } else if (c < 10) {
        d = 0.20; // 20% de descuento
    } else {
        d = 0.40; // 40% de descuento
    }

    double v = t * d;
    double totalConDescuento = t - v;

    return totalConDescuento;
}

int main() {
    double p;
    int c;

    cout << "Ingrese el precio unitario: ";
    cin >> p;

    cout << "Ingrese la cantidad de computadoras: ";
    cin >> c;

    double totalConDescuento = calcularPrecio(p, c);

    cout << "Precio total con descuento: $" << totalConDescuento << endl;

    return 0;
}
