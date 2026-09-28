#include <iostream>
#include <cstring>
#include "vendedor.h"
using namespace std;
int main()
{
	int codigo;
	char nombre[50];
	float ventas;
	float sueldoBasico;
	float comision;
	float sueldoBruto;
	float descuento;
	float sueldoNeto;
	int opcion;
	do
	{
		cout << "\n================================" << endl;
		cout << " SISTEMA DE VENDEDORES" << endl;
		cout << "================================" << endl;
		cout << "1. Registrar vendedor" << endl;
		cout << "2. Salir" << endl;
		cout << "================================" << endl;
		cout << "Ingrese opcion: ";
		cin >> opcion;
		// VALIDAR OPCION
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
			// CODIGO
			cout << "\nIngrese codigo del vendedor: ";
			cin >> codigo;
			while (cin.fail() || codigo <= 0)
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Codigo incorrecto." << endl;
				cout << "Ingrese un codigo positivo: ";
				cin >> codigo;
			}
			// NOMBRE
			cin.ignore();
			cout << "Ingrese nombre del vendedor: ";
			cin.getline(nombre, 50);
			while (strlen(nombre) == 0)
			{
				cout << "El nombre no puede estar vacio." << endl;
				cout << "Ingrese nombre del vendedor: ";
				cin.getline(nombre, 50);
			}
			// VENTAS
			cout << "Ingrese ventas del mes: S/ ";
			cin >> ventas;
			while (cin.fail() || ventas < 0)
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Monto incorrecto." << endl;
				cout << "Ingrese ventas mayores o iguales a 0: S/ ";
				cin >> ventas;
			}
			// SUELDO BASICO
			cout << "Ingrese sueldo basico: S/ ";
			cin >> sueldoBasico;
			while (cin.fail() || sueldoBasico <= 0)
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Sueldo incorrecto." << endl;
				cout << "Ingrese un sueldo mayor que 0: S/ ";
				cin >> sueldoBasico;
			}
			// CALCULOS
			comision = calcularComision(ventas);
			sueldoBruto = calcularSueldoBruto(
				sueldoBasico,
				comision
			);
			descuento = calcularDescuento(
				sueldoBruto
			);
			sueldoNeto = calcularSueldoNeto(
				sueldoBruto,
				descuento
			);
			// MOSTRAR BOLETA
			mostrarBoleta(
				codigo,
				nombre,
				ventas,
				sueldoBasico,
				comision,
				sueldoBruto,
				descuento,
				sueldoNeto
			);
		}
	} while (opcion != 2);
	cout << "\nPrograma finalizado." << endl;
	return 0;
}