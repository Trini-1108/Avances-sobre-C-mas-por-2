# include <iostream>
# include <ctime>
using namespace std;
int main() {
	int contador = 1;
	int numero;
	srand(time(NULL));
	while (contador <= 50) {
		numero = rand() % 100 + 1;
		cout << contador << ". NUMERO BRO: " << numero;
		if (numero % 2 == 0) {
			cout << " - ES PAR" << endl;
		}
		else {
			cout << "- ES IMPAR" << endl;
			
		}
		contador++;
	}
	return 0;
}


