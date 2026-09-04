#include <iostream>
using namespace std;
int main() {
float nota1, nota2, nota3, promedio;
cout << "Ingrese nota 1: ";
cin >> nota1;
cout << "Ingrese nota 2: ";
cin >> nota2;
cout << "Ingrese nota 3: ";
cin >> nota3;
promedio = (nota1 + nota2 + nota3) / 3;
cout << "Promedio: " << promedio << endl;
if (promedio >= 11) {
cout << "Estudiante aprobado.";
} else {
cout << "Estudiante desaprobado.";
}
return 0;
}
