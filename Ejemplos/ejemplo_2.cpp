#include <iostream>
using namespace std;
int main() {
// Declaración de las variables
float nota1, nota2, nota3, promedio;
// Solicitar al usuario que ingrese las tres notas
cout << "Ingresa la primera nota: ";
cin >> nota1;
cout << "Ingresa la segunda nota: ";
cin >> nota2;
cout << "Ingresa la tercera nota: ";
cin >> nota3;
// Calcular el promedio
promedio = (nota1 + nota2 + nota3) / 3;
// Mostrar el resultado
cout << "El promedio de las tres notas es: " << promedio << endl;
return 0;
}

