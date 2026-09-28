// Ejercicio 1: Suponga que un individuo desea invertir su capital en un banco y desea saber cuanto dinero ganara después de un mes si el banco paga a razón de 2% mensual.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char repetir; 

    do {
        double capital_inicial, capital_final, ganancia;
        int meses;
        const double TASA_INTERES = 0.02;
        int contador = 1;

        cout << "\n Calculadora de Inversion Bancaria" << endl;
        cout << "Ingrese el capital inicial a invertir: ";
        cin >> capital_inicial;

        cout << "Ingrese el numero de meses a calcular: ";
        cin >> meses;
        if (capital_inicial <= 0 || meses <= 0) {
            cout << "Por favor, ingrese valores mayores a cero." << endl;
        }
        else {
            capital_final = capital_inicial;

            while (contador <= meses) {
                capital_final += capital_final * TASA_INTERES;
                contador++;
            }

            ganancia = capital_final - capital_inicial;

            cout << fixed << setprecision(2);
            cout << "RESULTADOS DESPUES DE " << meses << " MES(ES):" << endl;
            cout << "Capital inicial: " << capital_inicial << endl;
            cout << "Dinero ganado (INTERES): " << ganancia << endl;
            cout << "Capital total final: " << capital_final << endl;
        }
        cout << "\n¿Desea realizar otra operacion? (s/n): ";
        cin >> repetir;

    } while (repetir == 's' || repetir == 'S');

    cout << "\n¡Gracias por usar la calculadora!" << endl;

    return 0;
}