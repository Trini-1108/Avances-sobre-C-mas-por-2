#include <iostream>
#include "pago.h"
using namespace std;
int main()
{
	float horas;
	float tarifa;
	float sueldo;
	int opcion;
	do
	{
		cout << "\n============================" << endl;
		cout << " SISTEMA DE PAGO" << endl;
		cout << "============================" << endl;
		cout << "1. Calcular pago" << endl;
		cout << "2. Salir" << endl;
		cout << "============================" << endl;
		cout << "Ingrese opcion: ";
		cin >> opcion;
		// Validar opcion
		while (cin.fail() || opcion < 1 || opcion > 2)
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Opcion incorrecta." << endl;
			cout << "Ingrese 1 o 2: ";
			cin >> opcion;
		}
		if (opcion == 1)
		{
			// Ingresar horas
			cout << "\nIngrese horas trabajadas: ";
			cin >> horas;
			while (cin.fail() || horas < 0 || horas > 100)
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Cantidad de horas incorrecta." << endl;
				cout << "Ingrese horas entre 0 y 100: ";
				cin >> horas;
			}
			// Ingresar tarifa
			cout << "Ingrese tarifa por hora: S/ ";
			cin >> tarifa;
			while (cin.fail() || tarifa <= 0)
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Tarifa incorrecta." << endl;
				cout << "Ingrese una tarifa mayor que 0: S/ ";
				cin >> tarifa;
			}
			// Calcular sueldo
			sueldo = calcularSueldo(horas, tarifa);
			// Mostrar boleta
			mostrarBoleta(horas, tarifa, sueldo);
		}
	} while (opcion != 2);
	cout << "\nPrograma finalizado." << endl;
	return 0;
}