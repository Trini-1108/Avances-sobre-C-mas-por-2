#include <iostream>
#include "funciones.h"
using namespace std;
float calcularPromedio(float n1, float n2, float n3)
{
	float promedio;
	promedio = (n1 + n2 + n3) / 3;
	return promedio;
}
void mostrarResultado(float promedio)
{
	cout << "\n========================" << endl;
	cout << " RESULTADO" << endl;
	cout << "========================" << endl;
	cout << "Promedio: " << promedio << endl;
	if (promedio >= 10.5)
	{
		cout << "Estado: APROBADO" << endl;
	}
	else
	{
		cout << "Estado: DESAPROBADO" << endl;
	}
}
