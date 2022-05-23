#include<iostream>

using namespace std;

double Evaluar_x(double a, double b, double c, double x) { //proceso
	double resultado;
	resultado = a * x * x + b * x + c;
	return resultado;
}

void Mostrar_n_evaluaciones(double a, double b, double c, int n) {
	for (int i = 1; i <= n; i++) {
		cout << a << "(" << i << "^2) + " << b << "(" << i << ") + " << c << " = " << Evaluar_x(a, b, c, i) << endl; //salida
	}
}

int main() {
	double a, b, c;

	cout << "Ingrese los valores de A B C: "; cin >> a; cin >> b; cin >> c; //entrada
	Mostrar_n_evaluaciones(a, b, c, 100);
	
	return 0;
}
