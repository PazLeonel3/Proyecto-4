// Materia: Programaci�n I, Paralelo 3
// Autor: Leonel Paz Gutierrez
// Fecha creaci�n: 21/09/2023
// Fecha modificaci�n: 21/09/2023
// N�mero de ejericio: 11
// Problema planteado: Euclides
#include <iostream>

using namespace std;

// Funci�n para calcular el m�ximo com�n divisor usando el algoritmo de Euclides
int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer n�mero: ";
    cin >> num1;

    cout << "Ingrese el segundo n�mero: ";
    cin >> num2;

    int mcd = calcularMCD(num1, num2);

    cout << "El m�ximo com�n divisor (MCD) de " << num1 << " y " << num2 << " es: " << mcd << endl;

    return 0;
}
