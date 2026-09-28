#include <iostream>
using namespace std;
int main() {
	int n, a = 1, factorial = 1;
	cout << "ingrese un numero: ";
	cin >> n;
	while (a <= n) {
		factorial = factorial * a;
		a++;
	}
	cout << "FACTORIAL: " << factorial;

	return 0;
}