#include <iostream>
#include <string>
using namespace std;
// Función que está en empleados.cpp
void mostrarPagos(string nombre, double sueldo, int meses);
int main()
{
string nombre;
double sueldo;
int meses;
cout << "Ingrese el nombre del empleado: ";
getline(cin, nombre);
cout << "Ingrese el sueldo mensual: S/ ";
cin >> sueldo;
cout << "Ingrese cantidad de meses: ";
cin >> meses;
mostrarPagos(nombre, sueldo, meses);
return 0;
}
