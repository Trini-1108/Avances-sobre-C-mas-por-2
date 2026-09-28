#include <iostream>
#include "funciones.h"
using namespace std;
int main()
{
	float nota1;
	float nota2;
	float nota3;
	float promedio;
	int opcion;
	do
	{
		cout << "\n==========================" << endl;
		cout << " MENU PRINCIPAL" << endl;
		cout << "==========================" << endl;
		cout << "1. Registrar notas" << endl;
		cout << "2. Salir" << endl;
		cout << "==========================" << endl;
		cout << "Ingrese una opcion: ";
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
			// Validar nota 1
			cout << "\nIngrese nota 1: ";
			cin >> nota1;
			while (cin.fail() || nota1 < 0 || nota1 > 20)
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Nota incorrecta." << endl;
				cout << "Ingrese una nota entre 0 y 20: ";
				cin >> nota1;
			}
			// Validar nota 2
			cout << "Ingrese nota 2: ";
			cin >> nota2;
			while (cin.fail() || nota2 < 0 || nota2 > 20)
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Nota incorrecta." << endl;
				cout << "Ingrese una nota entre 0 y 20: ";
				cin >> nota2;
			}
			// Validar nota 3
			cout << "Ingrese nota 3: ";
			cin >> nota3;
			while (cin.fail() || nota3 < 0 || nota3 > 20)
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Nota incorrecta." << endl;
				cout << "Ingrese una nota entre 0 y 20: ";
				cin >> nota3;
			}
			// Calcular promedio
			promedio = calcularPromedio(nota1, nota2, nota3);
			// Mostrar resultado
			mostrarResultado(promedio);
		}
	} while (opcion != 2);
	cout << "\nPrograma finalizado." << endl;
	return 0;
}
