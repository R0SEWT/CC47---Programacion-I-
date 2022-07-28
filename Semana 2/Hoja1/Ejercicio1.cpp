#include <iostream>

using namespace std;


float obtenerLado(char lado) {
	float n = -1;
	do {
		cout << "Digite el lado \"" << lado << "\" del terreno: ";
		cin >> n;
	} while (n <= 0);

	return n;
}


float obtenerCValido(char lado, float a) {
	float c = -1;
	do {
		c = obtenerLado('C');
		if (a <= c) {
			cout << "El lado \"A\" debe ser mayor que \"C\"" << endl;
		}
	} while (a <= c);
	return c;
}


void mostrarATerreno(float a_terreno) {
	cout << "El area del terreno es : " << a_terreno << " mts^2";
}



int main() {
	float a = obtenerLado('A');
	float b = obtenerLado('B');
	float c = obtenerCValido('C', a);

	float a_terreno = b * c + b * (a - c) / 2;

	mostrarATerreno(a_terreno);

	return 0;
}