// Materia: Programación I, Paralelo 3
// Autor: Leonel Paz Gutierrez
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 2
// Problema planteado: Año de nacimiento
#include <iostream>
#include <ctime>

using namespace std;

// Función para calcular la edad
int calcularEdad(int yearNacimiento, int mesNacimiento, int diaNacimiento) {
    time_t tiempoActual = time(nullptr);
    tm* fechaActual = localtime(&tiempoActual);

    int yearActual = fechaActual->tm_year + 1900;
    int mesActual = fechaActual->tm_mon + 1;
    int diaActual = fechaActual->tm_mday;

    int edad = yearActual - yearNacimiento;

    // Verificar si aún no ha cumplido años este año
    if (mesActual < mesNacimiento || (mesActual == mesNacimiento && diaActual < diaNacimiento)) {
        edad--;
    }

    return edad;
}

int main() {
    int yearNacimiento, mesNacimiento, diaNacimiento;

    // Lee la fecha de nacimiento desde el teclado
    cout << "Introduce el año de nacimiento: ";
    cin >> yearNacimiento;
    cout << "Introduce el mes de nacimiento: ";
    cin >> mesNacimiento;
    cout << "Introduce el día de nacimiento: ";
    cin >> diaNacimiento;

    int edad = calcularEdad(yearNacimiento, mesNacimiento, diaNacimiento);

    cout << "La edad es: " << edad << " años." << endl;

    return 0;
}
