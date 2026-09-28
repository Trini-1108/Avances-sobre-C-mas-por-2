#include <iostream>
#include <iomanip>  // Necesario para formatear los decimales
#include "empleado.h" // Incluimos el encabezado para usar las funciones

using namespace std;

int main() {
    double sueldoBasico;
    int horasExtras;

    // 1. Entrada de datos
    cout << "--- CALCULO DE SUELDO DE EMPLEADO ---" << endl;
    cout << "Ingrese el sueldo basico: ";
    cin >> sueldoBasico;
    cout << "Ingrese las horas extras trabajadas: ";
    cin >> horasExtras;

    // 2. Procesamiento (Llamado a las funciones)
    double asignacion = calcularAsignacion(sueldoBasico);
    double pagoExtra = calcularHorasExtra(sueldoBasico, horasExtras);
    double sueldoBruto = calcularSueldoBruto(sueldoBasico, asignacion, pagoExtra);
    double sueldoFinal = calcularSueldoFinal(sueldoBruto);

    // 3. Salida de datos
    // Configuramos la salida para que siempre muestre 2 decimales (formato de moneda)
    cout << fixed << setprecision(2);

    cout << "\n--- BOLETA DE PAGO ---" << endl;
    cout << "Sueldo Basico:       " << sueldoBasico << endl;
    cout << "Asignacion Familiar: " << asignacion << endl;
    cout << "Pago Horas Extra:    " << pagoExtra << endl;
    cout << "-------------------------" << endl;
    cout << "SUELDO BRUTO:        " << sueldoBruto << endl;
    cout << "Descuentos (10%):    " << (sueldoBruto * 0.10) << endl;
    cout << "SUELDO FINAL:        " << sueldoFinal << endl;

    return 0;
}
