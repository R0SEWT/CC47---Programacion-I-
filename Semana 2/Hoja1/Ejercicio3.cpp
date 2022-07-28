#include<iostream>
#include<iomanip>

using namespace std;


double participacionValida() {
	double n = -1;
	do {
		cin >> n;
		if (n <= 0) {
			cout << "Cantidad invalida" << endl;
		}
	} while (n <= 0);

	return n;
}


void digiteCapital() {
	cout << "Digite el capital aportado por ";
}


void enSoles() {
	cout << " en soles: ";
}

void aporte() {
	cout << "El porcentaje de capital aportado por ";
}


void mostrarParticipacion(double pc, double pj, double pe) {
	cout << "\n\n\n";
	aporte();
	cout << "Carmela es de " <<setprecision(4) << pc << "%" << endl;
	aporte();
	cout << "Javier es de " << setprecision(4) << pj << "%" << endl;
	aporte();
	cout << "Eulogio es de " << setprecision(4) << pe << "%" << endl;

}


int main() {
	
	double c, j, e; // monto a aportar por
	double capital;
	double pc, pj, pe; //porcentaje por participacion de


	digiteCapital();
	cout << "Carmela";
	enSoles();
	c = participacionValida();

	digiteCapital();
	cout << "Javier";
	enSoles();
	j = participacionValida();


	digiteCapital();
	cout << "Eulogio";
	enSoles();
	e = participacionValida();
	
	capital = c + j + e;

	pc = 100 * c / capital;
	pj = 100 * j / capital;
	pe = 100 * e / capital;

	mostrarParticipacion(pc, pj, pe);

	return 0;
}