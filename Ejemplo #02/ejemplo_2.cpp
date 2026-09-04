#include <iostream>
using namespace std;
int main() {

    int opcion;

    float lado, base, altura, radio, area;


    cout << "FIGURAS GEOMETRICAS" << endl;

    cout << "1. Cuadrado" << endl;

    cout << "2. Triangulo" << endl;

    cout << "3. Circulo" << endl;


    cout << "Elija una opcion: ";

    cin >> opcion;


    switch (opcion) {


    case 1:

        cout << "Ingrese el lado: ";

        cin >> lado;

        area = lado * lado;

        cout << "Area del cuadrado: " << area;

        break;


    case 2:

        cout << "Ingrese la base: ";

        cin >> base;

        cout << "Ingrese la altura: ";

        cin >> altura;

        area = (base * altura) / 2;

        cout << "Area del triangulo: " << area;

        break;


    case 3:

        cout << "Ingrese el radio: ";

        cin >> radio;

        area = 3.14 * radio * radio;

        cout << "Area del circulo: " << area;

        break;


    default:

        cout << "Opcion incorrecta";

    }


    return 0;

}