#ifndef PAGOS_H
#define PAGOS_H
#include <string>
// Declaraciones de las funciones
double calcularSalarioNeto(double salarioBruto, double impuestos);
void mostrarPagoEmpleado(std::string nombre, double salarioBruto, double impuestos, double
	salarioNeto);
void pedirDatosEmpleado(std::string& nombre, double& salarioBruto, double& impuestos);
#endif

