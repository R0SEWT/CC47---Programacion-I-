#include<iostream>

using namespace std;


double obtenerTarifa() {
	double n = -1;
	
	do {
		cout << "Ingrese la tarifa horaria del trabajador: ";
		cin >> n;
	} while (n < 0); //trabajo gratis 
	return n;
}


double obtenerHorasTrabajadas() {
	double n = -1;

	do {
		cout << "Ingrese el total de horas trabajadas: ";
		cin >> n;
	} while (n < 0); //no vino a trabajar
	return n;
}


void generarMostrarBoleta(double tarifa, double horas) {
	double basico, bruto, neto;

	basico = tarifa * horas;
	bruto = basico * 1.18;
	neto = bruto * 0.88;
	
	cout << "\n\nBoleta de pago mensual" << endl;
	cout << "------------------------" << endl;
	cout << "Sueldo basico: " << basico << endl;
	cout << "Sueldo bruto: " << bruto << endl;
	cout << "Sueldo neto: " << neto << endl;
}



int main() {
	double tarifa, ht;

	tarifa = obtenerTarifa();
	ht = obtenerHorasTrabajadas();

	generarMostrarBoleta(tarifa, ht);

	return 0;
}