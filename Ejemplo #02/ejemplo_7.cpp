#include <iostream>
#include <cmath>
using namespace std;
int main() {
int opcion, i, nro = 0;float r = 0;

cout << "Operaciones Matematicas" << endl;

cout << "1. Raiz Cuadrada" << endl;

cout << "2. Potencia (3)" << endl;

cout << "3. Potencia (4) " << endl;

cout << "Elija una opcion: ";

cin >> opcion;switch (opcion) {case 1:

    cout << "1. Raiz Cuadrada" << endl;

    cout << "=============================" << endl;

    for (i = 1; i <= 20; i++) {

        r = sqrt(i);

        cout << i << "======> " << r <<  endl;

    }

    break;case 2:

    cout << "1. Cubo" << endl;

    cout << "=============================" << endl;

    for (i = 1; i <= 20; i++) {

        r = pow(i, 3);

        cout << i << "====> " << r << endl;

    }

    break;case 3:

    cout << "Cuarta" << endl;

    cout << "=============================" << endl;

    for (i = 1; i <= 20; i++) {

        r = pow(i, 4);

        cout << i << "====> " << r << endl;


    }


    break;


default:


    cout << "Opcion incorrecta";


}


return 0;


}