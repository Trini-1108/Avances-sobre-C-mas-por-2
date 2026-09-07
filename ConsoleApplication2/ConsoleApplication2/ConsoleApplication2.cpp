#include <iostream>
using namespace std;
	int main() {
	int numero;
	int suma = 0;
	cout << "Ingrese un numero bro (0 para terminar): ";
	cin >> numero;
	while (numero != 0) {
		suma += numero;
		cout << "INGRESE OTRO NUMERO TILIN (0 para terminar): ";
		cin >> numero;

	}
	cout << "La suma de los numeros es: " << suma << endl;
	return 0;
}


	