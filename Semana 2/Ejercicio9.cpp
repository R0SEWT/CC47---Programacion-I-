#include<iostream>
#include<math.h>

using namespace std;

#define PI 3.14159


double geth() {
	double n = -1;
	
	do {
		cout << "Ingrese el valor de \'H\' en la figura \'A\': ";
		cin >> n;
	} while (n <= 0);
	
	return n;
}


double getr(double h) { // hipotenusa siempre mayor que cateto
	double n = -1;

	do {
		cout << "Ingrese el valor de \'R\' en la figura \'A\': ";
		cin >> n;

		if (n >= h) {
			cout << "Valor invalido! Figura imposible" << endl;
		}

	} while (n <= 0 || n >= h);

	return n;
}


double getArea(double h, double r) {
	double cateto, area_2_triangulo, area_medio_circulo;

	cateto = sqrt(h * h - r * r);
	area_2_triangulo = cateto * r;

	area_medio_circulo = r * r * PI;

	return area_2_triangulo + area_medio_circulo;

}


void mostrarArea(double area) {
	cout << "\nEl area de la figura de la forma \'A\' es: "<< area << endl;
}


int main() {
	double h, r, area;
	h = geth();
	r = getr(h);

	area = getArea(h, r);
	
	mostrarArea(area);

	return 0;
}