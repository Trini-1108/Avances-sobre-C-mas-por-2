#include "pagos.h"
// Definición de la función para calcular el salario neto
double calcularSalarioNeto(double salarioBruto, double impuestos) {
	double salarioNeto = salarioBruto - (salarioBruto * impuestos / 100);
	return salarioNeto;
}

