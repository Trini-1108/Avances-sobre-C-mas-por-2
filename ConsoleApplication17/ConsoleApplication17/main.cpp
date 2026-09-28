#include <iostream>
#include "notas.h"
using namespace std;

int main() {
    double nota1 = 0.0, nota2 = 0.0, nota3 = 0.0;
    bool notasIngresadas = false;
    int opcion;

    do {
        mostrarMenu();
        opcion = leerOpcion(1, 3);

        switch (opcion) {
        case 1:
            nota1 = ingresarNota(1);
            nota2 = ingresarNota(2);
            nota3 = ingresarNota(3);
            notasIngresadas = true;
            cout << "Notas registradas correctamente.\n";
            break;

        case 2:
            if (!notasIngresadas) {
                cout << "Primero debe ingresar las notas (opcion 1).\n";
            }
            else {
                double promedio = calcularPromedio(nota1, nota2, nota3);
                string estado = determinarEstado(promedio);
                mostrarResultado(nota1, nota2, nota3, promedio, estado);
            }
            break;

        case 3:
            cout << "Saliendo del programa. Hasta luego.\n";
            break;
        }
    } while (opcion != 3);

    return 0;
}
