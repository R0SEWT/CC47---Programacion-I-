#include<iostream>

using namespace std;


int getN() {
	int n;
	do {
		cout << "Digite la cantidad \'K\' de soles a desglosar: ";
		cin >> n;
	} while (n < 0);
	return n;
}


void calcularMostrarMonedas(int n) {
	int m5, m2, m1;
	
	m5 = n / 5;
	m2 = (n - 5 * m5) / 2;
	m1 = n - m5 * 5 - m2 * 2;

	cout << "El menor numero de monedas para desglosar " << n << " soles es: " << endl;
	cout << "Monedas de 1: "<<m1<<endl;
	cout << "Monedas de 2: "<<m2<<endl;
	cout << "Monedas de 5: "<<m5<<endl;
}


int main() {
	int n = getN();
	calcularMostrarMonedas(n);
	
	return 0;
}