// Materia: Programaci�n I, Paralelo 3
// Autor: Leonel Paz Gutierrez
// Fecha creaci�n: 14/08/2023
// Fecha modificaci�n: 15/08/2023
// N�mero de ejericio: 2
// Problema planteado: A�o de nacimiento
#include <iostream>
#include <ctime>

using namespace std;

// Funci�n para calcular la edad
int calcularEdad(int yearNacimiento, int mesNacimiento, int diaNacimiento) {
    time_t tiempoActual = time(nullptr);
    tm* fechaActual = localtime(&tiempoActual);

    int yearActual = fechaActual->tm_year + 1900;
    int mesActual = fechaActual->tm_mon + 1;
    int diaActual = fechaActual->tm_mday;

    int edad = yearActual - yearNacimiento;

    // Verificar si a�n no ha cumplido a�os este a�o
    if (mesActual < mesNacimiento || (mesActual == mesNacimiento && diaActual < diaNacimiento)) {
        edad--;
    }

    return edad;
}

int main() {
    int yearNacimiento, mesNacimiento, diaNacimiento;

    // Lee la fecha de nacimiento desde el teclado
    cout << "Introduce el a�o de nacimiento: ";
    cin >> yearNacimiento;
    cout << "Introduce el mes de nacimiento: ";
    cin >> mesNacimiento;
    cout << "Introduce el d�a de nacimiento: ";
    cin >> diaNacimiento;

    int edad = calcularEdad(yearNacimiento, mesNacimiento, diaNacimiento);

    cout << "La edad es: " << edad << " a�os." << endl;

    return 0;
}
