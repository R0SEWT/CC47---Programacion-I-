#include<iostream>

using namespace std;


void mostrarNInvertido(int n) {
	int u, d, c;

	c = n / 100;
	d = (n / 10) % 10;
	u = n % 10;

	cout << u << d << c << endl;
}


int main() {
	double n;
	bool es_n_invalido;
	cout << "Ingrese un numero entero positivo de 3 cifras: ";
	cin >> n;
	es_n_invalido = n < 100 || 999 < n || n - (int)n != 0;
	if (es_n_invalido) {
		cout << "-1" << endl;
	}
	else {
		mostrarNInvertido(n);
	}

}