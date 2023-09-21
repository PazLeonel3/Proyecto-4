// Materia: Programaci�n I, Paralelo 3
// Autor: Leonel Paz Gutierrez
// Fecha creaci�n: 14/08/2023
// Fecha modificaci�n: 15/08/2023
// N�mero de ejericio: 1
// Problema planteado: A�o bisiesto
#include <iostream>

using namespace std;

// Funci�n para determinar si un a�o es bisiesto
bool Bisiesto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int ano;

    // Lee un a�o desde el teclado
    cout << "Por favor, introduce un a�o: ";
    cin >> ano;

    // Llama a la funci�n esBisiesto para determinar si es bisiesto o no
    if (Bisiesto(ano)) {
        cout << ano << " es un a�o bisiesto." << endl;
    } else {
        cout << ano << " no es un a�o bisiesto." << endl;
    }

    return 0;
}
