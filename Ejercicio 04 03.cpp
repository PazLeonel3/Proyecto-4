// Materia: Programación I, Paralelo 3
// Autor: Leonel Paz Gutierrez
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 3
// Problema planteado: Tamaño y peso
#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura Persona
struct Persona {
    string nombre;
    int edad;
    float estatura;
    float peso;
};

int main() {
    // Declarar un arreglo de estructuras para almacenar los datos de las personas
    Persona personas[12];

    // Leer los datos de las doce personas
    for (int i = 0; i < 12; i++) {
        cout << "Persona " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin.ignore(); // Para evitar problemas con getline después de cin
        getline(cin, personas[i].nombre);
        cout << "Edad: ";
        cin >> personas[i].edad;
        cout << "Estatura (en metros): ";
        cin >> personas[i].estatura;
        cout << "Peso (en kilogramos): ";
        cin >> personas[i].peso;
    }

    // Encontrar la persona de menor edad
    int edadMinima = personas[0].edad;
    string nombrePersonaMasJoven = personas[0].nombre;
    for (int i = 1; i < 12; i++) {
        if (personas[i].edad < edadMinima) {
            edadMinima = personas[i].edad;
            nombrePersonaMasJoven = personas[i].nombre;
        }
    }

    // Calcular el promedio de estaturas
    float sumaEstaturas = 0;
    for (int i = 0; i < 12; i++) {
        sumaEstaturas += personas[i].estatura;
    }
    float promedioEstaturas = sumaEstaturas / 12;

    // Calcular el promedio de pesos
    float sumaPesos = 0;
    for (int i = 0; i < 12; i++) {
        sumaPesos += personas[i].peso;
    }
    float promedioPesos = sumaPesos / 12;

    // Mostrar los resultados
    cout << "La persona de menor edad es: " << nombrePersonaMasJoven << " con " << edadMinima << " años." << endl;
    cout << "El promedio de estaturas es: " << promedioEstaturas << " metros." << endl;
    cout << "El promedio de pesos es: " << promedioPesos << " kilogramos." << endl;

    return 0;
}
