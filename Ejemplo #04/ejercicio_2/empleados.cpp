#include <iostream>
#include <string>
using namespace std;
void mostrarPagos(string nombre, double sueldo, int meses)
{
cout << "\n===== PAGOS DEL EMPLEADO =====" << endl;
cout << "Empleado: " << nombre << endl;
cout << "Sueldo mensual: S/ " << sueldo << endl;
double total = 0;
for (int i = 1; i <= meses; i++)
{
cout << "Mes " << i << ": S/ " << sueldo << endl;
total += sueldo;
}
cout << "------------------------------" << endl;
cout << "Total pagado: S/ " << total << endl;
}
