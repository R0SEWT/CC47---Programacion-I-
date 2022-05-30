#include<iostream>

using namespace std;


int ingresarN(){
	int n = -1;
	do {
		cout << "Digite el valor de N: "; cin >> n;
	} while (n <= 0);

	return n;
}


int sumaDivisores(int n) { //de ingresar 0 devolverá un valor erroneo
	int suma = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			suma += i;
		}
	}
	return suma;
}


bool esPrimo(int n) {

	if (sumaDivisores(n) == n + 1) {
		return true;
	}
	return false;
}


void mostrarPrimos(int n) {
	int i = 1, cont = 0;
	
	while (cont < n) {

		if (esPrimo(i)) {
			cout << i << endl;
			cont++;
		}
		i++;
	}
}



int main() {
	int n = ingresarN();
	mostrarPrimos(n);


	return 0;
}
