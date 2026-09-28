#include <iostream>
#include "vendedor.h"
using namespace std;
float calcularComision(float ventas)
{
	float porcentaje;
	float comision;
	if (ventas < 2000)
	{
		porcentaje = 0.03;
	}
	else if (ventas < 5000)
	{
		porcentaje = 0.05;
	}
	else if (ventas < 10000)
	{
		porcentaje = 0.08;
	}
	else
	{
		porcentaje = 0.10;
	}
	comision = ventas * porcentaje;
	return comision;
}
float calcularSueldoBruto(float sueldoBasico, float comision)
{
	return sueldoBasico + comision;
}
float calcularDescuento(float sueldoBruto)
{
	return sueldoBruto * 0.10;
}
float calcularSueldoNeto(float sueldoBruto, float descuento)
{
	return sueldoBruto - descuento;
}
void mostrarBoleta(
	int codigo,
	char nombre[],
	float ventas,
	float sueldoBasico,
	float comision,
	float sueldoBruto,
	float descuento,
	float sueldoNeto
)
{
	cout << "\n====================================" << endl;
	cout << " BOLETA DEL VENDEDOR" << endl;
	cout << "====================================" << endl;
	cout << "Codigo : " << codigo << endl;
	cout << "Nombre : " << nombre << endl;
	cout << "Ventas : S/ " << ventas << endl;
	cout << "Sueldo basico : S/ " << sueldoBasico << endl;
	cout << "Comision : S/ " << comision << endl;
	cout << "Sueldo bruto : S/ " << sueldoBruto << endl;
	cout << "Descuento 10% : S/ " << descuento << endl;
	cout << "Sueldo neto : S/ " << sueldoNeto << endl;
	cout << "====================================" << endl;
}
