#include <iostream>
#include "pagos.h"
// Definición de la función para mostrar el pago del empleado
void mostrarPagoEmpleado(std::string nombre, double salarioBruto, double impuestos, double
	salarioNeto) {
	std::cout << "Pago del empleado: " << nombre << std::endl;
	std::cout << "Salario bruto: $" << salarioBruto << std::endl;
	std::cout << "Impuestos: " << impuestos << "%" << std::endl;
	std::cout << "Salario neto: $" << salarioNeto << std::endl;
}

