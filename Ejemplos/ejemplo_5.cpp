#include <iostream>
using namespace std;
int main() {
// 1. Declaración de constantes y variables
// 'const' asegura que el valor de PI no pueda ser modificado por error más adelante
const double PI = 3.14159265;
double radio;
double area;
// 2. Entrada de datos (Input)
cout << "--- CALCULADORA DE AREA DE UN CIRCULO ---" << endl;
cout << "Ingrese el valor del radio: ";
cin >> radio;
// 3. Cálculo lógico
// La fórmula es Area = PI * (radio al cuadrado)
// Multiplicar 'radio * radio' es la forma más sencilla de elevar al cuadrado con variables simples
area = PI * radio * radio;
// 4. Salida de datos (Output)
cout << "\n--- RESULTADO ---" << endl;
cout << "Radio ingresado: " << radio << endl;
cout << "Area calculada: " << area << endl;
cout << "-----------------------------------------" << endl;
return 0;
}

