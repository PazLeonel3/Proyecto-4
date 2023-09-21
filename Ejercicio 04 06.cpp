// Materia: Programación I, Paralelo 3
// Autor: Leonel Paz Gutierrez
// Fecha creación: 21/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 6
// Problema planteado: Pago de estacionamiento
#include <iostream>
using namespace std;

// Función para calcular el costo del estacionamiento
float calcularCostoEstacionamiento(int horaEntrada, int minutoEntrada, int horaSalida, int minutoSalida) {
    // Calcular el tiempo total en minutos
    int tiempoTotal = (horaSalida - horaEntrada) * 60 + (minutoSalida - minutoEntrada);

    // Si el tiempo total es menor o igual a 60 minutos, cobramos por 1 hora
    if (tiempoTotal <= 60) {
        return 8.0;
    } else {
        // Si excede 60 minutos, calculamos el costo adicional
        int horasCompletas = tiempoTotal / 60;
        int minutosRestantes = tiempoTotal % 60;

        // Si hay minutos restantes, cobramos una hora adicional
        if (minutosRestantes > 0) {
            horasCompletas++;
        }

        // El costo base es 8 Bs. por la primera hora y 3 Bs. por cada hora adicional
        return 8.0 + (horasCompletas - 1) * 3.0;
    }
}

int main() {
    int horaEntrada, minutoEntrada, horaSalida, minutoSalida;

    // Caso 1
    horaEntrada = 9;
    minutoEntrada = 35;
    horaSalida = 10;
    minutoSalida = 15;
    float costo1 = calcularCostoEstacionamiento(horaEntrada, minutoEntrada, horaSalida, minutoSalida);
    cout << "Tiempo: 1 hora - Costo: " << costo1 << " Bs." << endl;

    // Caso 2
    horaEntrada = 11;
    minutoEntrada = 10;
    horaSalida = 12;
    minutoSalida = 20;
    float costo2 = calcularCostoEstacionamiento(horaEntrada, minutoEntrada, horaSalida, minutoSalida);
    cout << "Tiempo: 2 horas - Costo: " << costo2 << " Bs." << endl;

    // Caso 3
    horaEntrada = 17;
    minutoEntrada = 55;
    horaSalida = 21;
    minutoSalida = 30;
    float costo3 = calcularCostoEstacionamiento(horaEntrada, minutoEntrada, horaSalida, minutoSalida);
    cout << "Tiempo: 4 horas - Costo: " << costo3 << " Bs." << endl;

    return 0;
}
