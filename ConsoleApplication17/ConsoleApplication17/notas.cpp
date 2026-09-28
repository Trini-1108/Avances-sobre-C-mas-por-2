#include "notas.h"
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

// Lee la opción del menú validando que sea un entero dentro del rango.
int leerOpcion(int minimo, int maximo) {
    int opcion;
    while (true) {
        cout << "Seleccione una opcion: ";
        if (cin >> opcion && opcion >= minimo && opcion <= maximo) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return opcion;
        }
        cout << "  Opcion invalida. Ingrese un numero del "
            << minimo << " al " << maximo << ".\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

// Pide una nota y repite hasta que esté entre 0 y 20.
double ingresarNota(int numeroNota) {
    double nota;
    while (true) {
        cout << "Ingrese la nota " << numeroNota << " (0 - 20): ";
        if (cin >> nota && nota >= NOTA_MINIMA && nota <= NOTA_MAXIMA) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return nota;
        }
        cout << "  Nota invalida. Debe ser un numero entre "
            << NOTA_MINIMA << " y " << NOTA_MAXIMA << ".\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

double calcularPromedio(double nota1, double nota2, double nota3) {
    return (nota1 + nota2 + nota3) / 3.0;
}

string determinarEstado(double promedio) {
    if (promedio >= NOTA_APROBATORIA)
        return "APROBADO";
    return "DESAPROBADO";
}

void mostrarResultado(double nota1, double nota2, double nota3,
    double promedio, string estado) {
    cout << fixed << setprecision(2);
    cout << "\n==========================================\n";
    cout << "           REGISTRO DE NOTAS\n";
    cout << "==========================================\n";
    cout << left << setw(20) << "Nota 1:" << nota1 << "\n";
    cout << left << setw(20) << "Nota 2:" << nota2 << "\n";
    cout << left << setw(20) << "Nota 3:" << nota3 << "\n";
    cout << "------------------------------------------\n";
    cout << left << setw(20) << "Promedio:" << promedio << "\n";
    cout << left << setw(20) << "Estado:" << estado << "\n";
    cout << "==========================================\n\n";
}

void mostrarMenu() {
    cout << "\n======== REGISTRO DE NOTAS ========\n";
    cout << "1. Ingresar las tres notas\n";
    cout << "2. Calcular promedio y mostrar estado\n";
    cout << "3. Salir\n";
    cout << "===================================\n";
}

