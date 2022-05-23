#include<iostream>

using namespace std;

int Ingresar_n() { //Entrada y validacion a naturales
	int n = -1;
	do {
		cout << "Ingrese N: "; cin >> n;
	} while (n <= 0);
	return n;
}

long Factorial(int n) { //Solo naturales
	if (n < 1) {
		return 1;
	}
	return n * Factorial(n - 1);
}


double Termino_serie(int t, double c) {
	double resultado;
	resultado = c * (t * 2 + (1 + t / 10.0)) / Factorial(t);
	return resultado;
}

double Calcular_serie(int n, double c) {
	if (20 < n) { //La serie converge <- apartir de 10 terminos el calculo mostrado no varia, 30 terminos rompen el programa
		n = 20; 
	}
	double suma = 0;
	for (int i = 1; i <= n; i++) {//Recorre n terminos 
		suma += Termino_serie(i,c);
	}
	return suma;
}


int main() {
	double c = 1, resultado;
	int n = Ingresar_n();
	resultado = Calcular_serie(n, c);
	cout << "El resultado de la serie de " << n << " terminos es: " << resultado;

	return 0;
}
