#include <iostream>
#include <cstdlib> 
using namespace std;
int main() {
		srand(time(NULL));
		int num, a = 2;
		num = rand() % 150 + 1;
		cout << "Numero: " << num << endl;
		if (num == 1) {
			cout << "No es primo";
			return 0;
		}

		while (a < num) {
			cout << num << "/" << a << endl;
			if (num % a == 0) {
				cout << "NO ES PRIMO";
				return 0;
			}
			a++;
		}
		cout << "ES PRIMO";
	
	return 0;
}
