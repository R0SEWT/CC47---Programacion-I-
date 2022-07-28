#include<iostream>

using namespace std;


int getS() {
	int s;
	do {
		cout << "Digite la cantidad de segundos a interpretar: ";
		cin >> s;
	} while (s < 0);
	return s;
}


void interpretarSec(int seg) {
	int min, hour, aux;

	hour = seg / 3600;
	aux = seg - hour * 3600;
	min = aux / 60;
	seg = aux % 60;

	cout << "La cantidad de horas, minutos y segundos contenidos son: " << endl;
	cout << "Horas: " << hour << endl;
	cout << "Minutos: " << min << endl;
	cout << "Segundos: " << seg << endl;
}


int main() {

	int s = getS();
	interpretarSec(s);

	return 0;
}