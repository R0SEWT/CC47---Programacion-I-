#include<iostream>

using namespace std;

double obtenerPrecioCompra() {
	double n = -1;

	do {
		cout << "Digite el precio de compra de la pieza: ";
		cin >> n;
	} while (n < 0);
	return n;
}


double obtenerPorcGanancia() {
	double n = -1;

	cout << "Digite el procentaje de ganancia " ;
	cout << "(valor negativo indica perdida] [100% -> 100] :" << endl;
	cin >> n;
	return n;
}


double calcularPrecioVenta(double precio_compra, double porc_ganancia) { // 100% = 100
	double pv;
	pv = precio_compra * 100 / (100 - porc_ganancia);
	return pv;
}


void mostrarPrecioVenta(double pv) {
	cout << "El precio de venta de la pieza es de " << pv << " nuevos soles" << endl;
}


int main() {

	double p_compra, porc_ganancia, p_venta;
	p_compra = obtenerPrecioCompra();
	porc_ganancia = obtenerPorcGanancia();

	p_venta = calcularPrecioVenta(p_compra, porc_ganancia);

	mostrarPrecioVenta(p_venta);

	return 0;
}