#include<iostream>

using namespace std;


double obtenerHorasTrabajadas() {
	int n = -1;
	do {
		cout << "Digite el numero de horas trabajadas: ";
		cin >> n;
	} while (n < 0);
	return n;
}


double obtenerTarifaHoraria() {
	int n = -1;
	do {
		cout << "Digite la tarifa horaria: ";
		cin >> n;
	} while (n < 0);
	return n;
}


void mostrarGenerarBoleta(double horas, double tarifa) {
	double sueldo_bruto, descuento_afp, descuento_essalud, descuento_total, sueldo_neto;

	sueldo_bruto = horas * tarifa;

	descuento_afp = sueldo_bruto * 0.09;
	descuento_essalud = sueldo_bruto * 0.12;
	descuento_total = descuento_afp + descuento_essalud;

	sueldo_neto = sueldo_bruto - descuento_total;


	cout << "\n\nBoleta de pago mensual" << endl;
	cout << "------------------------" << endl;
	cout << "Sueldo bruto: " << sueldo_bruto << endl;
	cout << "Descuento AFP: " << descuento_afp << endl;
	cout << "Descuento ESSALUD: " << descuento_essalud << endl;
	cout << "Descuento total: " << descuento_total << endl;
	cout << "-------------------" << endl;
	cout << "Sueldo neto: " << sueldo_neto << endl;

}


int main() {
	double horas_trabajadas, tarifa_horaria;

	horas_trabajadas = obtenerHorasTrabajadas();
	tarifa_horaria = obtenerTarifaHoraria();

	mostrarGenerarBoleta(horas_trabajadas, tarifa_horaria);

	return 0;
}