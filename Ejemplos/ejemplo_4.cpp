#include <iostream>
using namespace std;
int main() {
// 1. Declaración de variables
// Usamos 'double' para manejar correctamente los números con decimales
double montoSoles;
double tipoCambio;
double montoDolares;
// 2. Entrada de datos (Input)
cout << "--- CONVERSOR DE MONEDA: SOLES A DOLARES ---" << endl;
cout << "Ingrese el monto en Soles (S/): ";
cin >> montoSoles;
cout << "Ingrese el tipo de cambio de venta actual: ";
cin >> tipoCambio;
// 3. Cálculo lógico
// Para convertir de la moneda local a la extranjera, dividimos el monto entre el tipo de cambio
montoDolares = montoSoles / tipoCambio;
// 4. Salida de datos (Output)
cout << "\n--- RESULTADO DE LA CONVERSION ---" << endl;
cout << "Monto original: S/ " << montoSoles << endl;
cout << "Tipo de cambio aplicado: " << tipoCambio << endl;
cout << "Equivalente: $ " << montoDolares << " USD" << endl;
cout << "----------------------------------" << endl;
return 0;
}

