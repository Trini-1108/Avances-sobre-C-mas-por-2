#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string modelo;
    int cantidad;
    double precio = 0;
    double importeCompra, descuento, importePagar;
    int chocolates = 0;
    int opcion;
    
    cout << "=====================================" << endl;
    cout << "   TIENDA ONLINE DE MOCHILAS" << endl;
    cout << "=====================================" << endl;
    cout << "Modelos disponibles:" << endl;
    cout << "1. Sherman    - S/. 149.90" << endl;
    cout << "2. Faguo      - S/. 89.90" << endl;
    cout << "3. Aldo       - S/. 119.90" << endl;
    cout << "4. Suburban   - S/. 174.90" << endl;
    cout << "=====================================" << endl;
    
    cout << "Seleccione el modelo (1-4): ";
    cin >> opcion;
    
    switch(opcion) {
        case 1:
            modelo = "Sherman";
            precio = 149.9;
            break;
        case 2:
            modelo = "Faguo";
            precio = 89.9;
            break;
        case 3:
            modelo = "Aldo";
            precio = 119.9;
            break;
        case 4:
            modelo = "Suburban";
            precio = 174.9;
            break;
        default:
            cout << "Opción no válida. Saliendo del programa..." << endl;
            return 1;
    }
    
    cout << "Ingrese la cantidad de mochilas: ";
    cin >> cantidad;
    
    if (cantidad <= 0) {
        cout << "La cantidad debe ser mayor a 0." << endl;
        return 1;
    }
    
    importeCompra = precio * cantidad;
    
    if (cantidad < 5) {
        descuento = 0;
    } else if (cantidad >= 5 && cantidad < 10) {
        descuento = importeCompra * 0.05;
    } else if (cantidad >= 10 && cantidad < 20) {
        descuento = importeCompra * 0.07;
    } else { // cantidad >= 20
        descuento = importeCompra * 0.09; 
    }
    
    importePagar = importeCompra - descuento;

    if (importePagar < 200) {
        chocolates = 0;
    } else if (importePagar >= 200 && importePagar < 500) {
        chocolates = 1 * cantidad;
    } else if (importePagar >= 500 && importePagar < 700) {
        chocolates = 2 * cantidad;
    } else {
        chocolates = 3 * cantidad; 
    }
    
    cout << "\n=====================================" << endl;
    cout << "        RESUMEN DE COMPRA" << endl;
    cout << "=====================================" << endl;
    cout << fixed << setprecision(2);
    cout << "Modelo:               " << modelo << endl;
    cout << "Cantidad:             " << cantidad << endl;
    cout << "Precio unitario:      S/. " << precio << endl;
    cout << "-------------------------------------" << endl;
    cout << "Importe de compra:    S/. " << importeCompra << endl;
    cout << "Descuento:            S/. " << descuento << endl;
    cout << "Importe a pagar:      S/. " << importePagar << endl;
    cout << "-------------------------------------" << endl;
    cout << "Chocolates de obsequio: " << chocolates << endl;
    cout << "=====================================" << endl;
    
    return 0;
}
