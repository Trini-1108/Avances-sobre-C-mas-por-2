#include <iostream>
#include "calculadora.h"  // Incluir el archivo de cabecera

// Definición de la función de suma
double suma(double a, double b) {
    return a + b;
}

// Definición de la función de resta
double resta(double a, double b) {
    return a - b;
}

// Definición de la función de multiplicación
double multiplicacion(double a, double b) {
    return a * b;
}

// Definición de la función de división
double division(double a, double b) {
    if (b != 0) {
        return a / b;  // Si el divisor no es cero, se realiza la división
    }
    else {
        std::cerr << "Error: División por cero no permitida." << std::endl;
        return 0;  // Si el divisor es cero, se devuelve 0 como un valor de error
    }
}