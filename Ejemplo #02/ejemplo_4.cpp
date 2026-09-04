#include <iostream>
using namespace std;
int main() {

    int opcion, i,nro=0;

    float r=0;

    cout << "Tablas matematicas" << endl;

    cout << "1. Multiplicar" << endl;

    cout << "2. Dividir" << endl;

    cout << "3. Sumar " << endl;

    cout << "Elija una opcion: ";

    cin >> opcion;


    switch (opcion) {


    case 1:

        cout << "1. Tabla de Multiplicar" << endl;

        cout << "=============================" << endl;

        cout << "Ingrese numero: ";

        cin >> nro;

        for (i = 0; i <= 12; i++) {

            cout << i <<"   " << nro <<"  "<< nro * i << endl;

        }

        break;


    case 2:

        cout << "1. Tabla de dividir" << endl;

        cout << "=============================" << endl;

        cout << "Ingrese numero: ";

        cin >> nro;

        for (i = 0; i <= 12; i++) {

            cout << i <<"--- "<< nro <<"--- "<< nro / i << endl;

        }

        break;


    case 3:

        cout << "1. Tabla de sumar" << endl;

        cout << "=============================" << endl;

        cout << "Ingrese numero: ";

        cin >> nro;

        for (i = 0; i <= 12; i++) {

            cout << i <<"    " << nro <<"    "<< nro + i << endl;

        }

        break;


    default:

        cout << "Opcion incorrecta";

    }


    return 0;

}