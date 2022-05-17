#include<iostream>
using namespace std;

void Saludo() {
	cout << "Bienvenido a mi conversor de divisas" << endl;
	cout << "---------------------------------------------\n" << endl;
}
double Pedir_monto() {
	double monto;
	cout << "Digite el monto que desea convertir: "; cin >> monto;
	return monto;
}

bool Select_mode() {
	bool modo;
	cout << "Monto en soles[0]/ Monto en dolares[1]: \n"; cin >> modo;
	return modo;
}

double Convertir_divisa(bool modo,float cambio, double monto) {
	if (!modo) {//Soles a dolares
		return monto * cambio;
	}
	return monto / cambio; //Dolares a soles
}

void Mostrar_divisa(bool modo, float resultado) {
	if (!modo) {//a dolar
		cout << "Su equivalente al cambio de hoy es de " << resultado<<" dolares americanos" << endl;
	}
	else{
		cout << "Su equivalente al cambio de hoy es de " << resultado<<" Nuevos Soles" << endl;
	}

}


int main() {
	bool modo;
	float dolar;
	double monto, divisa_resultante;

	Saludo();
	dolar = 3.77f; //Pedir_dolar();
	monto = Pedir_monto();
	modo = Select_mode(); //modo 0 soles a dolares, modo 1 dolares a soles
	divisa_resultante = Convertir_divisa(modo,dolar,monto);
	Mostrar_divisa(modo,divisa_resultante);
	return 0;
}
