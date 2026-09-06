#include <iostream>
#include <iomanip>  // Para formatear los decimales en la salida
#include <string>

using namespace std;

int main() {
    // 1. Declaración de Variables
    double peso = 0.0;
    double estatura = 0.0;
    double imc = 0.0;
    string gradoObesidad = "";

    // 2. Ingreso de Datos con Validación Básica
    cout << "========================================" << endl;
    cout << "     CÁLCULO DE ÍNDICE DE MASA CORPORAL " << endl;
    cout << "========================================" << endl;
    
    cout << "Ingrese el peso de la persona (kg): ";
    cin >> peso;
    
    cout << "Ingrese la estatura de la persona (m): ";
    cin >> estatura;

    // Validación de seguridad para evitar divisiones entre cero o valores negativos
    if (peso <= 0 || estatura <= 0) {
        cout << "\nERROR: El peso y la estatura deben ser mayores a cero." << endl;
        return 1; // Termina el programa indicando un fallo
    }

    // 3. Procesamiento (Cálculo del IMC)
    imc = peso / (estatura * estatura);

    // 4. Estructura Condicional para determinar el Grado de Obesidad
    if (imc < 20.0) {
        gradoObesidad = "Delgado";
    } else if (imc >= 20.0 && imc < 25.0) {
        gradoObesidad = "Normal";
    } else if (imc >= 25.0 && imc < 27.0) {
        gradoObesidad = "Sobrepeso";
    } else { // imc >= 27.0
        gradoObesidad = "Obesidad";
    }

    // 5. Reporte de Resultados formateado a 2 decimales
    cout << fixed << setprecision(2);
    cout << "\n========================================" << endl;
    cout << "          REPORTE DE SALUD              " << endl;
    cout << "========================================" << endl;
    cout << "Peso ingresado:     " << peso << " kg" << endl;
    cout << "Estatura ingresada: " << estatura << " m" << endl;
    cout << "----------------------------------------" << endl;
    cout << "IMC Calculado:      " << imc << endl;
    cout << "Grado de obesidad:  " << gradoObesidad << endl;
    cout << "========================================" << endl;

    return 0;
}

