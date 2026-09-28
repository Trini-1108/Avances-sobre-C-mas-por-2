#include <iostream>
#include "pagos.h"
// Definición de la función para pedir los datos del empleado
void pedirDatosEmpleado(std::string& nombre, double& salarioBruto, double& impuestos) {
	// Solicitar al usuario que ingrese los datos del empleado
	std::cout << "Ingrese el nombre del empleado: ";
	std::cin >> nombre;
	std::cout << "Ingrese el salario bruto del empleado: ";
	std::cin >> salarioBruto;
	std::cout << "Ingrese el porcentaje de impuestos: ";
	std::cin >> impuestos;
}
