#include <iostream>
#include <string>
using namespace std;
int main() {
// 1. Declaración de variables simples
string producto;
int cantidad;
double precioUnitario;
double totalVenta;
// 2. Entrada de datos (Input)
// Solicitamos al usuario que ingrese los valores por teclado
cout << "Ingrese el nombre del producto (una palabra): ";
cin >> producto;
cout << "Ingrese la cantidad: ";
cin >> cantidad;
cout << "Ingrese el precio unitario: ";
cin >> precioUnitario;
// 3. Cálculo
totalVenta = cantidad * precioUnitario;
// 4. Salida de datos (Output)
// Mostramos el resultado de la operación en pantalla
cout << "\n--- RESUMEN DE LA OPERACION ---" << endl;
cout << "Producto procesado: " << producto << endl;
cout << "Unidades: " << cantidad << endl;
cout << "Total a facturar: " << totalVenta << endl;
return 0;
}

