#include<iostream>

using namespace std;

bool EsBiciesto(int anio) { //año 0 es biciesto
	if (anio < 0) {
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

bool Tiene_31_dias(int mes) {
	if (mes < 8) {//antes de agosto todos los meses impares tienen 31 dias
		return mes % 2 == 1;
	}
	else {
		return mes % 2 == 0;//desde agosto los meses pares tiene 31 dias
	}
}




bool FechaEsValida(int dia, int mes, int annio) { 
	if (0 < dia && dia<=31 && 0 < mes && mes<=12) //validacion general, sin tope en el año
		if (Tiene_31_dias(mes)) {//valida por mes
			return true; //ya validado
		}
		else {
			if (mes == 2) {//Excepcion de febrero
				if(EsBiciesto(annio)){
					return dia <= 29;
				}
				else {
					return dia <= 28;
				}
			}
			return dia <= 30; //meses 30 dias
		}
	else{//invalido
		return false;
	}
}


int main() {
	int dia, mes, anio;
	cout << "Ingrese la fecha: ";
	cin >> dia;	cin >> mes;	cin >> anio;

	if (FechaEsValida(dia, mes, anio)) {
		cout << "La fecha es correcta "<<endl;
	}
	else {
		cout << "La fecha no es correcta";
	}
	
	return 0;
}
