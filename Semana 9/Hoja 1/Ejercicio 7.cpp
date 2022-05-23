#include<iostream>

using namespace std;

bool EsBiciesto(int anio) { //año 0 es biciesto
	if(anio<0){
		anio *= -1;
	}
	if (anio % 400 == 0) {
		return true;
	}
	if (anio % 100 == 0) {
		return false;
	}
	if (anio % 4 == 0) {
		return true;
	}
	return false;
}

int  Ingresar_anio() {
	int anio;
	cout << "Introduzca el año a evaluar: "; cin >> anio;
	return anio;
}

int main() {
	int anio = Ingresar_anio();
	cout<<EsBiciesto(anio)<<endl;

	return 0;
}
