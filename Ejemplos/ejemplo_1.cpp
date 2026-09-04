#include <iostream>
using namespace std;
int main() {
// Declaración de las variables
float num1, num2, suma;
// Solicitar al usuario que ingrese dos números
cout << "Ingresa el primer numero: ";
cin >> num1;
cout << "Ingresa el segundo numero: ";
cin >> num2;
// Sumar los números
suma = num1 + num2;
// Mostrar el resultado
cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << endl;
return 0;
}