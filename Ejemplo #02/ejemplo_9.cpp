
#include <iostream>
#include <string>
using namespace std;

int main() {
    string apellido, cargo;
    float v1, v2, v3, v4, promedio;

    for (int i = 1; i <= 3; i++) {
        cout << "\nEMPLEADO " << i << endl;
        cout << "Ingrese apellido: ";
        cin >> apellido;

        cout << "Ingrese cargo: ";
        cin >> cargo;

        cout << "Venta semana 1: ";
        cin >> v1;

        cout << "Venta semana 2: ";
        cin >> v2;

        cout << "Venta semana 3: ";
        cin >> v3;

        cout << "Venta semana 4: ";
        cin >> v4;

        promedio = (v1 + v2 + v3 + v4) / 4;

        cout << "\nApellido: " << apellido << endl;
        cout << "Cargo: " << cargo << endl;
        cout << "Promedio de ventas: " << promedio << endl;

        if (promedio >= 1000) {
            cout << "Observacion: CUMPLIO LA META" << endl;
        } else {
            cout << "Observacion: NO CUMPLIO LA META" << endl;
        }
    }

    return 0;
}