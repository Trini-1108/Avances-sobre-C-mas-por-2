#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));

	int porky = 0, lapicito = 0, china = 0;
	int voto;

	cout << "¡CONTEO DE VOTOS!" << endl;
	cout << "Generando los 500 votos, espere..." << endl;

	for (int a = 0; a < 500; a++) {
		voto = (rand() % 3) + 1;

		if (voto == 1) {
			porky ++;
		}
		else if (voto == 2) {
			lapicito ++;
		}
		else if (voto == 3) {
			china ++;
		}
	}

	cout << "Resultados: " << endl;
	cout << "Porky: " << porky << " votos" << endl;
	cout << "Lapicito: " << lapicito << " votos" << endl;
	cout << "China: " << china << " votos" << endl;
	cout << endl;

	if (porky > lapicito && porky > china) {
		cout << "¡GANADOR: PORKY!" << endl;
	}
	else if (lapicito > porky && lapicito > china) {
		cout << "¡GANADOR: LAPICITO!" << endl;
	}
	else if (china > porky && china > lapicito) {
		cout << "¡GANADOR: CHINA!" << endl;
	}
	else {
		cout << "¡HAY UN EMPATE!" << endl;
	}

	return 0;

}
