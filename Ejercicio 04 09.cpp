// Materia: Programación I, Paralelo 3
// Autor: Leonel Paz Gutierrez
// Fecha creación: 21/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 9
// Problema planteado: Pago por hora
#include <iostream>

using namespace std;

// Función para calcular el salario total antes de impuestos
double calcularSalarioTotal(double tarifaPorHora, double horasTrabajadas) {
    if (horasTrabajadas > 40) {
        // Si se trabajaron más de 40 horas, se aplica un incremento del 50%
        return (40 * tarifaPorHora) + ((horasTrabajadas - 40) * tarifaPorHora * 1.5);
    } else {
        return horasTrabajadas * tarifaPorHora;
    }
}

// Función para calcular los impuestos
double calcularImpuestos(double salarioTotal) {
    const double impuestos = 0.10; // 10% de impuestos
    return salarioTotal * impuestos;
}

int main() {
    double tarifaPorHora, horasTrabajadas, anticipo;

    // Solicitar al usuario la tarifa por hora, las horas trabajadas y el anticipo
    cout << "Ingrese la tarifa por hora: ";
    cin >> tarifaPorHora;

    cout << "Ingrese las horas trabajadas en la semana: ";
    cin >> horasTrabajadas;

    cout << "Ingrese el anticipo (si no hay, ingrese 0): ";
    cin >> anticipo;

    // Calcular el salario total antes de impuestos
    double salarioTotal = calcularSalarioTotal(tarifaPorHora, horasTrabajadas);

    // Restar el anticipo al salario total
    salarioTotal -= anticipo;

    // Calcular los impuestos
    double totalImpuestos = calcularImpuestos(salarioTotal);

    // Calcular el salario neto
    double salarioNeto = salarioTotal - totalImpuestos;

    // Mostrar los resultados
    cout << "Total ganado: $" << salarioTotal << endl;
    cout << "Total descuentos (Impuestos): $" << totalImpuestos << endl;
    cout << "Pago neto: $" << salarioNeto << endl;

    return 0;
}
