#include <iostream>
using namespace std;
// Prototipos de funciones
float calcularSueldo(float horas, float pagoHora);
float calcularBono(float sueldo);
float calcularDescuento(float sueldo);
float calcularSueldoNeto(float sueldo, float bono, float descuento);
void mostrarBoleta(
    string nombre,
    float sueldo,
    float bono,
    float descuento,
    float sueldoNeto
);
int main()
{
    string nombre;
    float horas;
    float pagoHora;
    cout << "Ingrese nombre del empleado: ";
    getline(cin, nombre);
    cout << "Ingrese horas trabajadas: ";
    cin >> horas;
    cout << "Ingrese pago por hora: ";
    cin >> pagoHora;
// Llamada de funciones
    float sueldo = calcularSueldo(horas, pagoHora);
    float bono = calcularBono(sueldo);
    float descuento = calcularDescuento(sueldo);
    float sueldoNeto = calcularSueldoNeto(
    sueldo,
    bono,
    descuento
);
// Llamada del procedimiento
mostrarBoleta(
    nombre,
    sueldo,
    bono,
    descuento,
    sueldoNeto
);
    return 0;
}
