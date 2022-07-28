#include<iostream>

using namespace std;


int main() {
	double ganancia;
	double a_s1, a_s2, a_s3; //acciones por socio;
	double a_totales;
	double g_s1, g_s2, g_s3; //ganancia por socio

	a_s1 = 1;
	a_s2 = 2;
	a_s3 = 3;

	ganancia = 100;

	a_totales = a_s1 + a_s2 + a_s3;

	g_s1 = a_s1 * ganancia / a_totales;
	g_s2 = a_s2 * ganancia / a_totales;
	g_s3 = a_s3 * ganancia / a_totales;

	cout << "Al socio 1 le corresponde " << g_s1 << " soles" << endl;
	cout << "Al socio 2 le corresponde " << g_s2 << " soles" << endl;
	cout << "Al socio 3 le corresponde " << g_s3 << " soles" << endl;


	return 0;
}