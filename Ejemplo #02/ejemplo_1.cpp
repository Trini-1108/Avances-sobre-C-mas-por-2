#include <iostream>
using namespace std;
int main() {

    int opcion;

    float num1, num2;

    cout << "Ingrese el primer numero: ";

    cin >> num1;

    cout << "Ingrese el segundo numero: ";

    cin >> num2;

    cout << "\nMENU" << endl;

    cout << "1. Sumar" << endl;

    cout << "2. Restar" << endl;

    cout << "3. Multiplicar" << endl;

    cout << "4. Dividir" << endl;


    cout << "Ingrese una opcion: ";

    cin >> opcion;


    switch (opcion) {


    case 1:

        cout << "Resultado: " << num1 + num2;

        break;


    case 2:

        cout << "Resultado: " << num1 - num2;

        break;


    case 3:

        cout << "Resultado: " << num1 * num2;

        break;


    case 4:

        if (num2 != 0) {

            cout << "Resultado: " << num1 / num2;

        }

        else {

            cout << "No se puede dividir entre cero";

        }

        break;


    default:

        cout << "Opcion incorrecta";

    }


    return 0;

}