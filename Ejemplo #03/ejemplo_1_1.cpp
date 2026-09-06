#include <iostream>
#include <iomanip>  // Para dar formato a los decimales de salida
#include <string>

using namespace std;

int main() {
    // 1. Declaración de Variables
    float promedio = 0.0f;
    char categoria;

    // 2. Entrada de Datos
    cout << "========================================" << endl;
    cout << "     SISTEMA DE CATEGORIZACIÓN ACADÉMICA" << endl;
    cout << "========================================" << endl;
    cout << "Ingrese el promedio ponderado del estudiante: ";
    cin >> promedio;

    // Validación de consistencia de datos (rango de notas estándar de 0 a 20)
    if (promedio < 0.0f || promedio > 20.0f) {
        cout << "\nERROR: El promedio ingresado no es válido (debe estar entre 0 y 20)." << endl;
        return 1; // Termina la ejecución con código de error
    }

    // 3. Estructura Condicional en Cascada (Evaluación Secuencial Exclusiva)
    if (promedio >= 17.0f) {
        categoria = 'A';
    } else if (promedio >= 14.0f) { 
        // Si el programa llega aquí, ya sabe que el promedio es menor que 17.
        categoria = 'B';
    } else if (promedio >= 12.0f) { 
        // Si llega aquí, sabe que es menor que 14.
        categoria = 'C';
    } else { 
        // Para cualquier promedio menor que 12.
        categoria = 'D';
    }

    // 4. Reporte de Resultados
    cout << fixed << setprecision(2);
    cout << "\n========================================" << endl;
    cout << "          REPORTE DE CATEGORÍA          " << endl;
    cout << "========================================" << endl;
    cout << "Promedio Ponderado: " << promedio << endl;
    cout << "Categoría Asignada:  " << categoria << endl;
    cout << "========================================" << endl;

    return 0;
}