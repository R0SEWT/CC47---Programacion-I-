#include<iostream>

using namespace std;

long Factorial(int n) {
	if (n < 0) {
		cout << "ERROR, NUMERO NEGATIVO EN FACTORIAL NO SOPORTADO" << endl;
		return -1;
	}
	if (n <= 1) {
		return 1;
	}
	return n * Factorial(n - 1);

}


double Combinatorio(int n, int k) {
	double combinacion = Factorial(n) / ((Factorial(k) * (Factorial(n - k))));
	return combinacion;
}

int main() {
	int n, k;
	double combinaciones;
	cout << "Ingrese N y K: "; cin >> n; cin >> k;

	combinaciones = Combinatorio(n, k);

	cout << "El numero de combinaciones posibles entre N y K es: " << combinaciones << endl;



	return 0;
}
