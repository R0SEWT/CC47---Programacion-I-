#include<iostream>

using namespace std;



double getConsumo() {
	double n = -1;

	do {
		cout << "Digite el consumo en GB: ";
		cin >> n;
	} while (n <= 0);
	
	return n;
}


double calcularMonto(double consumo) {
	if (consumo <= 4) { // [0,4] GB
		return 50;
	}
	if (consumo <= 8) { // <4,8] GB
		return 85;
	}
	return 85 + ((int)consumo - 8) * 4.5; // cargo de 4.50 por cada GB sobre 8
}


void mostrarMonto(double monto) {
	cout << "Debe cancelar el monto de "<<monto<<" S/." << endl;
}


int main() {
	double consumo, monto;

	consumo = getConsumo();
	monto = calcularMonto(consumo);

	mostrarMonto(monto);

	return 0;
}