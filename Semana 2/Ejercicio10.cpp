#include<iostream>

using namespace std;

double getDistancia() {
	double n = -1;

	do {
		cout << "Digite la distancia entre las dos ciudades [KM]: ";
		cin >> n;
	} while (n <= 0);
	
	return n;
}


double getVelocidad() {
	double n = -1;
	do {
		cout << "Digite la velocidad constante a la que se desplazaria [KM/H]: ";
		cin >> n;
	} while (n <= 0);

	return n;
}


double calcularTime(double distancia, double velocidad) {// en horas
	return distancia / velocidad; 
}


void mostrarTime(double tiempo) {
	cout << "Usted demoraria " << tiempo << " horas"<<endl;
}


int main() {
	double distancia, velocidad, tiempo;
	distancia = getDistancia();
	velocidad = getVelocidad();

	tiempo = calcularTime(distancia, velocidad);

	mostrarTime(tiempo);
	
	return 0;
}