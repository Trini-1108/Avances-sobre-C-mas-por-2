#include <iostream>
#include <iomanip>  // Para formatear los decimales (setprecision)
#include <string>

using namespace std;

int main() {
    // 1. Declaración de Variables
    int tipoHabitacionOption;
    int dias = 0;
    float tarifaDiaria = 0.0f;
    string habitacionNombre = "";

    // 2. Menú de Selección del Tipo de Habitación
    cout << "========================================" << endl;
    cout << "      CONTROL DE HOSPEDAJE EN HOTEL     " << endl;
    cout << "========================================" << endl;
    cout << "Tipos de habitación disponibles:" << endl;
    cout << "1. Simple       (S/.  80.0)" << endl;
    cout << "2. Matrimonial  (S/. 130.0)" << endl;
    cout << "3. Doble        (S/. 140.0)" << endl;
    cout << "4. Triple       (S/. 180.0)" << endl;
    cout << "Seleccione el tipo de habitación (1-4): ";
    cin >> tipoHabitacionOption;

    // 3. switch para asignar tarifa diaria según habitación
    switch (tipoHabitacionOption) {
        case 1:
            tarifaDiaria = 80.0f;
            habitacionNombre = "Simple";
            break;
        case 2:
            tarifaDiaria = 130.0f;
            habitacionNombre = "Matrimonial";
            break;
        case 3:
            tarifaDiaria = 140.0f;
            habitacionNombre = "Doble";
            break;
        case 4:
            tarifaDiaria = 180.0f;
            habitacionNombre = "Triple";
            break;
        default:
            cout << "\nERROR: Opción de habitación no válida." << endl;
            return 1; // Termina el programa por entrada inválida
    }

    // 4. Ingreso de los Días de Alojamiento
    cout << "Ingrese la cantidad de días de alojamiento: ";
    cin >> dias;

    if (dias <= 0) {
        cout << "\nERROR: Los días de hospedaje deben ser mayores a cero." << endl;
        return 1; // Termina el programa por entrada inválida
    }

    // 5. Cálculos Matemáticos
    // Importe Subtotal (días * tarifa)
    float importeSubtotal = dias * tarifaDiaria;

    // Porcentaje de descuento por temporada baja (if-else jerárquico)
    float porcentajeDescuento = 0.0f;
    if (dias >= 12) {
        porcentajeDescuento = 7.5f;
    } else if (dias >= 6) { // Rango: [6, 12)
        porcentajeDescuento = 5.0f;
    } else if (dias >= 3) { // Rango: [3, 6)
        porcentajeDescuento = 2.5f;
    } else {                // Rango: [0, 3)
        porcentajeDescuento = 0.0f;
    }

    // Calcular montos de descuento e Importe Neto
    float importeDescuento = importeSubtotal * (porcentajeDescuento / 100.0f);
    float importeTotal = importeSubtotal - importeDescuento;

    // Calcular obsequio de lapiceros por día en base al Importe Neto a Pagar
    int lapicerosPorDia = 0;
    if (importeTotal < 100.0f) {
        lapicerosPorDia = 2;
    } else if (importeTotal >= 100.0f && importeTotal < 150.0f) {
        lapicerosPorDia = 3;
    } else { // importeTotal >= 150.0f
        lapicerosPorDia = 4;
    }

    // Total de lapiceros de obsequio
    int totalLapiceros = lapicerosPorDia * dias;

    // 6. Reporte de Resultados formateado a 2 decimales para dinero
    cout << fixed << setprecision(2);
    cout << "\n========================================" << endl;
    cout << "            BOLETA DE CONSUMO           " << endl;
    cout << "========================================" << endl;
    cout << "Tipo de habitación:  " << habitacionNombre << endl;
    cout << "Tarifa diaria:       S/. " << tarifaDiaria << endl;
    cout << "Días de hospedaje:   " << dias << " días" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Importe Subtotal:    S/. " << importeSubtotal << endl;
    cout << "Descuento aplicado:  S/. " << importeDescuento << " (" << porcentajeDescuento << "%)" << endl;
    cout << "Importe Neto Pagar:  S/. " << importeTotal << endl;
    cout << "----------------------------------------" << endl;
    cout << "Lapiceros de regalo: " << totalLapiceros << " unidades (" << lapicerosPorDia << " por día)" << endl;
    cout << "========================================" << endl;

    return 0;
}

