#include <iostream>
#include <iomanip>  // Para usar setprecision(2) y formatear decimales
#include <string>

using namespace std;

int main() {
    // 1. Declaración de Variables
    int marcaOption;
    int cantidad = 0;
    float precioUnitario = 0.0f;
    string marcaNombre = "";

    // 2. Menú de Selección de Marca de Cuaderno
    cout << "========================================" << endl;
    cout << "          LIBRERÍA DE CUADERNOS         " << endl;
    cout << "========================================" << endl;
    cout << "Marcas disponibles (100 hojas):" << endl;
    cout << "1. Standford  (S/. 4.85)" << endl;
    cout << "2. Alpha      (S/. 4.35)" << endl;
    cout << "3. Justus     (S/. 3.50)" << endl;
    cout << "4. Loro       (S/. 4.55)" << endl;
    cout << "Seleccione la marca (1-4): ";
    cin >> marcaOption;

    // 3. switch para asignar precio unitario según la marca seleccionada
    switch (marcaOption) {
        case 1:
            precioUnitario = 4.85f;
            marcaNombre = "Standford";
            break;
        case 2:
            precioUnitario = 4.35f;
            marcaNombre = "Alpha";
            break;
        case 3:
            precioUnitario = 3.50f;
            marcaNombre = "Justus";
            break;
        case 4:
            precioUnitario = 4.55f;
            marcaNombre = "Loro";
            break;
        default:
            cout << "\nERROR: Opción de marca no válida." << endl;
            return 1; // Termina el programa indicando error
    }

    // 4. Ingreso de la Cantidad de Cuadernos
    cout << "Ingrese la cantidad de cuadernos a comprar: ";
    cin >> cantidad;

    // Validación de seguridad para la cantidad
    if (cantidad <= 0) {
        cout << "\nERROR: La cantidad debe ser mayor a cero." << endl;
        return 1; // Termina el programa indicando error
    }

    // 5. Cálculos Matemáticos
    // Importe de la compra (Subtotal)
    float importeCompra = precioUnitario * cantidad;

    // Determinar el porcentaje de descuento usando la estructura if-else
    float porcentajeDescuento = 0.0f;
    if (cantidad >= 36) {
        porcentajeDescuento = 13.5f;
    } else if (cantidad >= 24) {  // Ya sabemos que es menor de 36
        porcentajeDescuento = 11.5f;
    } else if (cantidad >= 12) {  // Ya sabemos que es menor de 24
        porcentajeDescuento = 9.5f;
    } else {                      // Menor de 12 cuadernos
        porcentajeDescuento = 7.5f;
    }

    // Calcular montos finales
    float importeDescuento = importeCompra * (porcentajeDescuento / 100.0f);
    float importePagar = importeCompra - importeDescuento;

    // 6. Reporte Final formateado a 2 decimales para dinero
    cout << fixed << setprecision(2);
    cout << "\n========================================" << endl;
    cout << "          TICKET DE VENTA               " << endl;
    cout << "========================================" << endl;
    cout << "Marca de cuaderno:    " << marcaNombre << endl;
    cout << "Precio unitario:      S/. " << precioUnitario << endl;
    cout << "Cantidad comprada:    " << cantidad << " unidades" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Importe de compra:    S/. " << importeCompra << endl;
    cout << "Descuento aplicado:   S/. " << importeDescuento << " (" << porcentajeDescuento << "%)" << endl;
    cout << "Importe neto a pagar: S/. " << importePagar << endl;
    cout << "========================================" << endl;

    return 0;
}
