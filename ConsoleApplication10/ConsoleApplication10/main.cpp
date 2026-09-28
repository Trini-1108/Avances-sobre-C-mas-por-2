#include <iostream>
#include "calculadora.h"  // Incluir el archivo de cabecera

int main() {
    double num1, num2;

    // Solicitar al usuario que ingrese dos números
    std::cout << "Ingresa el primer numero: ";
    std::cin >> num1;

    std::cout << "Ingresa el segundo numero: ";
    std::cin >> num2;

    // Mostrar los resultados de las operaciones
    std::cout << "Suma: " << suma(num1, num2) << std::endl;
    std::cout << "Resta: " << resta(num1, num2) << std::endl;
    std::cout << "Multiplicacion: " << multiplicacion(num1, num2) << std::endl;
    std::cout << "Division: " << division(num1, num2) << std::endl;

    return 0;
}


