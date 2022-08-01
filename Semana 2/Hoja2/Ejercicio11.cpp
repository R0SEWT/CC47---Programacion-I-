#include<iostream>

using namespace std;

short getNEntradas() {
	short n = -1;
	do {
		cout << "Digite el numero de entradas a comprar: ";
		cin >> n;
	} while (n < 1 || n>4);
	return n;
}


double getPrecio() {
	double n;
	do{
		cout << "Digite el precio en soles de una sola entrada: ";
		cin >> n;
	} while (n <= 0);
	return n;
}


double calcPrecioTotal(double precio_unitario, short numero_entradas) {
	double precio_total = precio_unitario * numero_entradas;

	switch (numero_entradas){
		case 1: return precio_total;
		case 2: return precio_total * 0.9;
		case 3: return precio_total * 0.85;
		case 4: return precio_total * 0.80;
		default: return -1;
	}
}


void showPrecioTotal(double precio_total) {
	cout << "\nEl pago a realizar por las entradas es: " << precio_total <<" nuevo soles"<< endl;
}

int main() {

	short n;
	double precio_u, precio_t;

	n = getNEntradas();
	precio_u = getPrecio();

	precio_t = calcPrecioTotal(precio_u, n);

	showPrecioTotal(precio_t);

	return 0;
}