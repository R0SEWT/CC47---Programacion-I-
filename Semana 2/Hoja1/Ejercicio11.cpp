#include<iostream>

using namespace std;

double getNota() {
	double n = -1;

	do {
		cout << "Digite la nota del alumno: ";
		cin >> n;
	}while(n < 0 || n>20);

	return n;
}


void mostrarEstado(bool aprobado) {
	if (aprobado) {
		cout << "A" << endl;
	}
	else {
		cout << "D" << endl;
	}

}


int main() {
	double nota_final;
	bool aprobado;

	nota_final = getNota();
	
	aprobado = nota_final >= 12.5;

	mostrarEstado(aprobado);

	return 0;
}