#include <iostream>
#include "pago.h"
using namespace std;
float calcularSueldo(float horas, float tarifa)
{
	float sueldo;
	if (horas <= 40)
	{
		sueldo = horas * tarifa;
	}
	else
	{
		sueldo = (40 * tarifa) +
			((horas - 40) * tarifa * 1.5);
	}
	return sueldo;
}
float calcularHorasExtra(float horas)
{
	if (horas > 40)
	{
		return horas - 40;
	}
	else
	{
		return 0;
	}
}
void mostrarBoleta(float horas, float tarifa, float sueldo)
{
	float horasExtra;
	horasExtra = calcularHorasExtra(horas);
	cout << "\n============================" << endl;
	cout << " BOLETA DE PAGO" << endl;
	cout << "============================" << endl;
	cout << "Horas trabajadas : " << horas << endl;
	cout << "Tarifa por hora : S/ " << tarifa << endl;
	cout << "Horas extra : " << horasExtra << endl;
	cout << "Sueldo total : S/ " << sueldo << endl;
	cout << "============================" << endl;
}
