#include<iostream>

using namespace std;


double ingreseN(char dimension) {
	double n = -1;
	do {
		cout << "Ingrese el la medida en metros de \"" << dimension << "\": ";
		cin >> n;
	} while (n <= 0);

	return n;
}


int main() {
	
	double precio_x_m3 = 1.50;
	cout << "El precio por metro cubico es de " << precio_x_m3 << " soles" << endl;

	double a = ingreseN('A');
	double b = ingreseN('B');
	double l = ingreseN('L');
	
	double volumen = a * b * l; //en m3
	double pago = precio_x_m3 * volumen;

	cout << "El monto a cancelar por llenar la piscina movil asciende a " << pago << " soles" << endl;

	return 0;
}


