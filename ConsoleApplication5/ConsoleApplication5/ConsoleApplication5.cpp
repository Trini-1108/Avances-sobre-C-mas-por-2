#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	srand(time(NULL));
	for (int vuelta = 1; vuelta <= 5; vuelta++) {
		int num, a = 2;
		bool primo = true;
		num = rand() % 150 + 1;
		cout << "\n Vuelta " << vuelta << endl;
		cout << "Numero: " << num << endl;
		if (num == 1) {
			primo = false;
		}
		while (a < num) {
			cout << num << "/" << a << endl;
			if (num % a == 0) {
				primo = false;
				break;
			}
			a++;
		}
		if (primo == true) {
			cout << "Es primo" << endl;
		}
		else {
			cout << "no es primo" << endl;
		}
	}
	return 0;

}