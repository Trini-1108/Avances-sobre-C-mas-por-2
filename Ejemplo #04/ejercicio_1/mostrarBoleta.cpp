#include <iostream>
using namespace std;
void mostrarBoleta(
string nombre,
float sueldo,
float bono,
float descuento,
float sueldoNeto
)
{
cout << "\n========= BOLETA DE PAGO =========" << endl;
cout << "Empleado: " << nombre << endl;
cout << "Sueldo basico: S/ "
<< sueldo << endl;
cout << "Bono: S/ "
<< bono << endl;
cout << "Descuento: S/ "
<< descuento << endl;
cout << "Sueldo neto: S/ "
<< sueldoNeto << endl;
}
