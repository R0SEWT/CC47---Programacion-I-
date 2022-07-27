#include<iostream>

using namespace std;

int getN() {
	double n;
	bool n_entero, n_3cifras;

	cout << "Ingrese un numero entero de 3 cifras: ";
	cin >> n;
	n_entero = (int)n - n == 0;
	n_3cifras = ((n <= -100) && (n >= -999)) || (n >= 100) && (n <= 999);
	
	if (n_entero && n_3cifras) {
		return n;
	}
	return -1;
}


bool esCapicua(int n) {
	int u, c;

	c = n / 100;
	u = n % 10;

	return c == u;
}



void mostrarMensaje(int n) {
	if (n == -1) {
		cout << "E" << endl;
	}
	else {
		if (esCapicua(n)) {
			cout << "S" << endl;
		}
		else {
			cout << "N" << endl;
		}
	}
}


int main() {

	int n;
	n = getN();
	mostrarMensaje(n);

	return 0;
}