#include <iostream>
#include <iomanip>  // Para usar setprecision(2) y dar formato de moneda
#include <string>

using namespace std;

int main() {
    // 1. Declaración de Variables
    int marcaOption;
    int cantidadLitros = 0;
    float precioPorLitro = 0.0f;
    string marcaNombre = "";

    // 2. Menú de Selección de Marca de Aceite
    cout << "========================================" << endl;
    cout << "       SUPERMERCADO: SECCIÓN ACEITES    " << endl;
    cout << "========================================" << endl;
    cout << "Marcas de aceite disponibles (1 Litro):" << endl;
    cout << "1. Primor   (S/. 5.99)" << endl;
    cout << "2. Girasol  (S/. 5.50)" << endl;
    cout << "3. Cil      (S/. 4.50)" << endl;
    cout << "4. Cocinero (S/. 4.70)" << endl;
    cout << "Seleccione la marca (1-4): ";
    cin >> marcaOption;

    // 3. switch para asignar el precio unitario según la marca [1]
    switch (marcaOption) {
        case 1:
            precioPorLitro = 5.99f;
            marcaNombre = "Primor";
            break;
        case 2:
            precioPorLitro = 5.50f;
            marcaNombre = "Girasol";
            break;
        case 3:
            precioPorLitro = 4.50f;
            marcaNombre = "Cil";
            break;
        case 4:
            precioPorLitro = 4.70f;
            marcaNombre = "Cocinero";
            break;
        default:
            cout << "\nERROR: Opción de marca no válida." << endl;
            return 1; // Termina el programa indicando error
    }

    // 4. Ingreso de la Cantidad de Litros
    cout << "Ingrese la cantidad de litros (botellas) a comprar: ";
    cin >> cantidadLitros;

    // Validación elemental de seguridad
    if (cantidadLitros <= 0) {
        cout << "\nERROR: La cantidad debe ser mayor a cero." << endl;
        return 1; // Termina el programa
    }

    // 5. Procesamiento y Cálculos Lógicos [1, 2]
    // Importe de compra (Subtotal)
    float importeCompra = precioPorLitro * cantidadLitros;

    // Determinación del porcentaje de descuento usando evaluación secuencial exclusiva
    float porcentajeDescuento = 0.0f;
    if (cantidadLitros >= 10) {
        porcentajeDescuento = 12.5f;
    } else if (cantidadLitros >= 7) {  // Rango: [7, 10)
        porcentajeDescuento = 10.0f;
    } else if (cantidadLitros >= 4) {  // Rango: [4, 7)
        porcentajeDescuento = 7.5f;
    } else {                           // Rango: < 4 litros
        porcentajeDescuento = 5.0f;
    }

    // Calcular montos finales
    float importeDescuento = importeCompra * (porcentajeDescuento / 100.0f);
    float importePagar = importeCompra - importeDescuento;

    // 6. Reporte Final formateado a 2 decimales para dinero
    cout << fixed << setprecision(2);
    cout << "\n========================================" << endl;
    cout << "          BOLETA DE VENTA               " << endl;
    cout << "========================================" << endl;
    cout << "Marca de aceite:      " << marcaNombre << endl;
    cout << "Precio por litro:     S/. " << precioPorLitro << endl;
    cout << "Cantidad adquirida:   " << cantidadLitros << " litros" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Importe de compra:    S/. " << importeCompra << endl;
    cout << "Descuento aplicado:   S/. " << importeDescuento << " (" << porcentajeDescuento << "%)" << endl;
    cout << "Importe neto a pagar: S/. " << importePagar << endl;
    cout << "========================================" << endl;

    return 0;
}
