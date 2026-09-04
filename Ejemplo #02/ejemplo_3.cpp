#include <iostream>
using namespace std;
int main() {

    int opcion,i;

    cout << "Uso de la Clausula For" << endl;

    cout << "1. Genera 100 numeros" << endl;

    cout << "2. Genera numeros pares" << endl;

    cout << "3. Genera numeros impares" << endl;


    cout << "Elija una opcion: ";

    cin >> opcion;


    switch (opcion) {


    case 1:

        for (i=1;i<=100;i++) {

          cout << "Iteraccion numero :" << i  << endl;

        }

        break;


    case 2:

        for (i=0; i<=100; i += 2) {

          cout << "Iteraccion numero :" << i << endl;

        }

        break;


    case 3:

        for (i = 1; i <= 101; i += 2) {

          cout << "Iteraccion numero :" << i << endl;

        }

        break;


    default:

        cout << "Opcion incorrecta";

    }


    return 0;

}