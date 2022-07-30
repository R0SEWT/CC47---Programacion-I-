#include<iostream>

using namespace std;


double getN(char letra) {
	double n;
	cout << "Digite el valor de " << letra << ": ";
	cin >> n;
	return n;
}


bool estaDentro(double x, double y) {
	return x * x + y * y <= 25;
}


void evaluarPunto(double x, double y) {
	cout << "La coordenada ingresada";

	if (estaDentro(x, y)) {
		cout << " esta dentro de la circunferencia" << endl;
	}
	else {
		cout << " no esta dentro de la circunferencia" << endl;
	}
}


int main() {
	double x, y;

	x = getN('X');
	y = getN('Y');

	evaluarPunto(x, y);

	return 0;
}