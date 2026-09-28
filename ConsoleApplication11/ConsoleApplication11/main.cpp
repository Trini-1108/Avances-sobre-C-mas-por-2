#include <iostream>
#include "pagos.h"
int main() {
	std::string nombreEmpleado;
	double salarioBruto;
	double impuestos;
	// Pedir los datos del empleado
	pedirDatosEmpleado(nombreEmpleado, salarioBruto,
		impuestos);
	// Calcular el salario neto
	double salarioNeto = calcularSalarioNeto(salarioBruto,
		impuestos);
	// Mostrar la información del pago
	mostrarPagoEmpleado(nombreEmpleado, salarioBruto,
		impuestos, salarioNeto);
	return 0;
}

