#include<iostream>

using namespace std;

double obtenerPrecio() {
	double pv = -1;
	do {
		cout << "Digite el precio del producto: ";
		cin >> pv;
	} while (pv < 0);
	return pv;
}

double obtenerDesc() {
	double n = 0;
	do {
		cout << "Digite el descuento del producto [0-100]: ";
		cin >> n;
	} while (n < 0 || n>100);
	return n /= 100;
}

int obtenerCantidad() {
	int n = 1;

	do {
		cout << "Digite la cantidad de productos a comprar: ";
		cin >> n;
	} while (n <= 0);
	return n;
}


void mostrarFactura(double pv, int cant, double desc) {
	double imp_compra, imp_desc, imp_pagar;
	
	imp_compra = cant * pv;
	imp_desc = imp_compra * desc;
	imp_pagar = imp_compra - imp_desc;

	cout << "El importe de la compra de " << cant << " unidades es: " << imp_compra << endl;
	cout << "El importe de descuento es: " << imp_desc << endl;
	cout << "El importe a pagar es: " << imp_pagar << endl;

}


int main() {

	int cantidad;
	double pv, desc;
	
	pv = obtenerPrecio();
	cantidad = obtenerCantidad();
	desc = obtenerDesc();

	mostrarFactura(pv, cantidad, desc);


	return 0;
}

