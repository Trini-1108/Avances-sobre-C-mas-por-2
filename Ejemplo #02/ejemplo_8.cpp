#include <iostream>
#include <string>
using namespace std;
int main() {
    string apellido, curso;
    float n1, n2, n3, n4, promedio;
    for (int i = 1; i <= 10; i++) {
        cout << "\nALUMNO " << i << endl;
        cout << "Ingrese apellido: ";
        cin >> apellido;
        cout << "Ingrese curso: ";
        cin >> curso;
        cout << "Ingrese nota 1: ";
        cin >> n1;
        cout << "Ingrese nota 2: ";
        cin >> n2;
        cout << "Ingrese nota 3: ";
        cin >> n3;
        cout << "Ingrese nota 4: ";
        cin >> n4;
        promedio = (n1 + n2 + n3 + n4) / 4;
        cout << "\nApellido: " << apellido << endl;
        cout << "Curso: " << curso << endl;
        cout << "Promedio: " << promedio << endl;
        if (promedio >= 11) {
            cout << "Observacion: APROBADO" << endl;
        }
        else {
            cout << "Observacion: DESAPROBADO" << endl;
        }
    }

    return 0;
}