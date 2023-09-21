// Materia: Programación I, Paralelo 3
// Autor: Leonel Paz Gutierrez
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 1
// Problema planteado: Año bisiesto
#include <iostream>

using namespace std;

// Función para determinar si un año es bisiesto
bool Bisiesto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int ano;

    // Lee un año desde el teclado
    cout << "Por favor, introduce un año: ";
    cin >> ano;

    // Llama a la función esBisiesto para determinar si es bisiesto o no
    if (Bisiesto(ano)) {
        cout << ano << " es un año bisiesto." << endl;
    } else {
        cout << ano << " no es un año bisiesto." << endl;
    }

    return 0;
}
