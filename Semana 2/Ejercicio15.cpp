#include<iostream>


using namespace std;

double getN() {
	double n;
	cout << "Digite un positivo entero en el rango [0, 100]: ";
	cin >> n;
	return n;
}


void mostrarDigitos(int n) {
	if (n < 10) {
		cout << "1" << endl;
	}
	else if (n < 100) {
		cout << "2" << endl;
	}
	else {
		cout << "3" << endl;
	}
}


bool esNValido(double n) {
	return 0 <= n && n <= 100 && n - (int)n == 0;
}


void interpretarN(double n) {
	if (esNValido(n)) {
		mostrarDigitos(n);
	}
	else {
		cout << "E" << endl;
	}
}


int main() {
	double n;
	
	n = getN();
	interpretarN(n);
	
	return 0;
}