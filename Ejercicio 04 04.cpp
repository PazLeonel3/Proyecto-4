// Materia: Programación I, Paralelo 3
// Autor: Leonel Paz Gutierrez
// Fecha creación: 21/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 4
// Problema planteado: Rango
#include <iostream>
using namespace std;

// Función para leer N calificaciones
void leerCalificaciones(int n, int calificaciones[]) {
    for (int i = 0; i < n; i++) {
        do {
            cout << "Ingrese la calificación " << i + 1 << " (entre 1 y 100): ";
            cin >> calificaciones[i];
        } while (calificaciones[i] < 1 || calificaciones[i] > 100);
    }
}

// Función para calcular la sumatoria de las calificaciones
int calcularSumatoria(int n, const int calificaciones[]) {
    int sumatoria = 0;
    for (int i = 0; i < n; i++) {
        sumatoria += calificaciones[i];
    }
    return sumatoria;
}

// Función para calcular el promedio de las calificaciones
float calcularPromedio(int n, const int calificaciones[]) {
    int sumatoria = calcularSumatoria(n, calificaciones);
    return static_cast<float>(sumatoria) / n;
}

int main() {
    int N;

    cout << "Ingrese la cantidad de calificaciones: ";
    cin >> N;

    // Validar que N sea mayor que 0
    if (N <= 0) {
        cout << "La cantidad de calificaciones debe ser mayor que 0." << endl;
        return 1; // Salir con código de error
    }

    int calificaciones[N];

    // Llamar a la función para leer las calificaciones
    leerCalificaciones(N, calificaciones);

    // Calcular la sumatoria y el promedio
    int sumatoria = calcularSumatoria(N, calificaciones);
    float promedio = calcularPromedio(N, calificaciones);

    cout << "La sumatoria de las calificaciones es: " << sumatoria << endl;
    cout << "El promedio de las calificaciones es: " << promedio << endl;

    return 0;
}
