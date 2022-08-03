#include<iostream>

using namespace std;

int getDistance() {
	int n = -1;
	do {
		cout << "Digite la distancia a recorrer: ";
		cin >> n;
	} while (n < 0);
	return n;
}


int getDays() {
	int n = -1;
	do {
		cout << "Digite los dias de estancia: ";
		cin >> n;
	} while (n < 0);
	return n;
}


double calcPrecio(int dias, int distancia) { //por cada 100km completos
	double precio = dias * 250 + distancia / 100 * 150;

	if (precio > 2500) {
		cout << "Descuento!!!" << endl;
		precio *= 0.65;
	}
	return precio;
}


void showPrecio(double precio) {
	cout << "El costo del tour es: "<<precio<<endl;	
}


int main() {
	int distancia, dias;
	double precio;

	distancia = getDistance();
	dias = getDays();

	precio = calcPrecio(dias, distancia);

	showPrecio(precio);

	return 0;
}