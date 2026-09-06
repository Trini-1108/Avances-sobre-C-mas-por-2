#include <iostream>
#include <iomanip>  // Para formatear los decimales en pantalla
#include <string>

using namespace std;

int main() {
    // 1. Declaración de Variables
    int modeloOption;
    int cantidad = 0;
    float precioUnitario = 0.0f;
    string modeloNombre = "";

    // 2. Interfaz de Selección de Modelo (Menú)
    cout << "========================================" << endl;
    cout << "       TIENDA ONLINE DE MOCHILAS        " << endl;
    cout << "========================================" << endl;
    cout << "Modelos disponibles:" << endl;
    cout << "1. Sherman  (S/. 149.9)" << endl;
    cout << "2. Faguo    (S/. 89.9)" << endl;
    cout << "3. Aldo     (S/. 119.9)" << endl;
    cout << "4. Suburban (S/. 174.9)" << endl;
    cout << "Seleccione el modelo (1-4): ";
    cin >> modeloOption;

    // 3. Estructura Condicional Múltiple (switch) para determinar el precio
    switch (modeloOption) {
        case 1:
            precioUnitario = 149.9f;
            modeloNombre = "Sherman";
            break;
        case 2:
            precioUnitario = 89.9f;
            modeloNombre = "Faguo";
            break;
        case 3:
            precioUnitario = 119.9f;
            modeloNombre = "Aldo";
            break;
        case 4:
            precioUnitario = 174.9f;
            modeloNombre = "Suburban";
            break;
        default:
            cout << "\nERROR: Opción de modelo no válida." << endl;
            return 1; // Termina el programa indicando un fallo
    }

    // 4. Ingreso de la Cantidad de Mochilas
    cout << "Ingrese la cantidad de mochilas a comprar: ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "\nERROR: La cantidad debe ser mayor a cero." << endl;
        return 1; // Termina el programa
    }

    // 5. Cálculos Matemáticos
    // Importe de la compra
    float importeCompra = precioUnitario * cantidad;

    // Determinar el porcentaje de descuento usando if-else anidados
    float porcentajeDescuento = 0.0f;
    if (cantidad < 5) {
        porcentajeDescuento = 0.0f;
    } else if (cantidad >= 5 && cantidad < 10) {
        porcentajeDescuento = 5.0f;
    } else if (cantidad >= 10 && cantidad < 20) {
        porcentajeDescuento = 7.0f;
    } else { // cantidad >= 20
        porcentajeDescuento = 9.0f;
    }

    // Calcular montos de descuento y el neto a pagar
    float importeDescuento = importeCompra * (porcentajeDescuento / 100.0f);
    float importePagar = importeCompra - importeDescuento;

    // Determinar la cantidad de chocolates de obsequio por mochila
    int chocolatesPorMochila = 0;
    if (importePagar < 200.0f) {
        chocolatesPorMochila = 0;
    } else if (importePagar >= 200.0f && importePagar < 500.0f) {
        chocolatesPorMochila = 1;
    } else if (importePagar >= 500.0f && importePagar < 700.0f) {
        chocolatesPorMochila = 2;
    } else { // importePagar >= 700.0f
        chocolatesPorMochila = 3;
    }

    // Calcular el total de chocolates de obsequio
    int totalChocolates = chocolatesPorMochila * cantidad;

    // 6. Reporte de Resultados formateado a 2 decimales
    cout << fixed << setprecision(2);
    cout << "\n========================================" << endl;
    cout << "          TICKET DE COMPRA              " << endl;
    cout << "========================================" << endl;
    cout << "Modelo de mochila:    " << modeloNombre << endl;
    cout << "Precio unitario:      S/. " << precioUnitario << endl;
    cout << "Cantidad adquirida:   " << cantidad << " unidades" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Importe de compra:    S/. " << importeCompra << endl;
    cout << "Descuento aplicado:   S/. " << importeDescuento << " (" << porcentajeDescuento << "%)" << endl;
    cout << "Importe a pagar:      S/. " << importePagar << endl;
    cout << "----------------------------------------" << endl;
    cout << "Chocolates de regalo: " << totalChocolates << " unidades (" << chocolatesPorMochila << " por mochila)" << endl;
    cout << "========================================" << endl;

    return 0;
}

