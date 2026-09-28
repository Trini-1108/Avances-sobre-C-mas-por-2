#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;

const double HORAS_NORMALES = 40.0;
const double RECARGO_EXTRA = 0.50;   // 50% adicional
const double MAX_HORAS_SEMANA = 168.0; // horas que tiene una semana

// ---------- Validación de entradas ----------

// Lee un número real dentro de un rango, repitiendo hasta que sea válido.
double leerNumero(const string& mensaje, double minimo, double maximo) {
    double valor;
    while (true) {
        cout << mensaje;
        if (cin >> valor && valor >= minimo && valor <= maximo) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return valor;
        }
        cout << "  Dato invalido. Ingrese un numero entre "
            << minimo << " y " << maximo << ".\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

// Lee la opción del menú (entero) validando el rango.
int leerOpcion(int minimo, int maximo) {
    int opcion;
    while (true) {
        cout << "Seleccione una opcion: ";
        if (cin >> opcion && opcion >= minimo && opcion <= maximo) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return opcion;
        }
        cout << "  Opcion invalida. Ingrese un numero del "
            << minimo << " al " << maximo << ".\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

// ---------- Cálculos ----------

double calcularHorasExtra(double horasTrabajadas) {
    if (horasTrabajadas > HORAS_NORMALES)
        return horasTrabajadas - HORAS_NORMALES;
    return 0.0;
}

double calcularPago(double horasTrabajadas, double tarifa) {
    double horasNormales = (horasTrabajadas > HORAS_NORMALES) ? HORAS_NORMALES : horasTrabajadas;
    double horasExtra = calcularHorasExtra(horasTrabajadas);

    double pagoNormal = horasNormales * tarifa;
    double pagoExtra = horasExtra * tarifa * (1.0 + RECARGO_EXTRA);
    return pagoNormal + pagoExtra;
}

// ---------- Presentación ----------

void mostrarBoleta(double horasTrabajadas, double tarifa) {
    double horasNormales = (horasTrabajadas > HORAS_NORMALES) ? HORAS_NORMALES : horasTrabajadas;
    double horasExtra = calcularHorasExtra(horasTrabajadas);
    double pagoNormal = horasNormales * tarifa;
    double pagoExtra = horasExtra * tarifa * (1.0 + RECARGO_EXTRA);
    double total = calcularPago(horasTrabajadas, tarifa);

    cout << fixed << setprecision(2);
    cout << "\n==========================================\n";
    cout << "            BOLETA DE PAGO SEMANAL\n";
    cout << "==========================================\n";
    cout << left << setw(28) << "Horas trabajadas:" << horasTrabajadas << "\n";
    cout << left << setw(28) << "Tarifa por hora:" << tarifa << "\n";
    cout << "------------------------------------------\n";
    cout << left << setw(28) << "Horas normales:" << horasNormales << "\n";
    cout << left << setw(28) << "Horas extra:" << horasExtra << "\n";
    cout << "------------------------------------------\n";
    cout << left << setw(28) << "Pago horas normales:" << pagoNormal << "\n";
    cout << left << setw(28) << "Pago horas extra (+50%):" << pagoExtra << "\n";
    cout << "==========================================\n";
    cout << left << setw(28) << "TOTAL A PAGAR:" << total << "\n";
    cout << "==========================================\n\n";
}

void mostrarMenu() {
    cout << "\n===== SISTEMA DE PAGO DE OBREROS =====\n";
    cout << "1. Ingresar datos del obrero\n";
    cout << "2. Calcular y mostrar boleta\n";
    cout << "3. Salir\n";
    cout << "======================================\n";
}

// ---------- Programa principal ----------

int main() {
    double horas = 0.0;
    double tarifa = 0.0;
    bool datosIngresados = false;
    int opcion;

    do {
        mostrarMenu();
        opcion = leerOpcion(1, 3);

        switch (opcion) {
        case 1:
            horas = leerNumero("Ingrese las horas trabajadas en la semana: ", 0.0, MAX_HORAS_SEMANA);
            tarifa = leerNumero("Ingrese la tarifa por hora: ", 0.01, 100000.0);
            datosIngresados = true;
            cout << "Datos registrados correctamente.\n";
            break;

        case 2:
            if (!datosIngresados) {
                cout << "Primero debe ingresar los datos (opcion 1).\n";
            }
            else {
                mostrarBoleta(horas, tarifa);
            }
            break;

        case 3:
            cout << "Saliendo del programa. Hasta luego.\n";
            break;
        }
    } while (opcion != 3);

    return 0;
}