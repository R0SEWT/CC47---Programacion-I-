#include<iostream>

using namespace std;

int getM(int hour) {
	return hour % 100;
}


int getH(int hour) {
	return hour / 100;
}


void getHour(string status, int &h, int &m) {
	int hour = -1;
	bool is_hour = false;
	do {
		cout << "Digite la hora de " << status << " [hhmm]: ";
		cin >> hour;

		m = getM(hour);
		h = getH(hour);
		is_hour = h < 24 && m < 60 && hour >= 0;

		if (!is_hour) {
			cout << "Hora invalida" << endl;
		}

	} while (!is_hour);
}


int contHours(int h_entrada, int m_entrada, int h_salida, int m_salida) {
	int hours;
	hours = h_salida - h_entrada;			// 23:21 00:11
	if (m_salida > m_entrada) {
		hours++;
	}
	if (h_salida < h_entrada) {
		hours += 24;
	}
	if (hours == 0 && m_entrada != m_salida) {
		hours = 24;
	}

	return hours;
}


int calcTarifa(int cont_horas){ // -2 indica error de misma hora de entrada y salida
	if (cont_horas > 0) {
		return cont_horas * 6 + 4;
	}
	else {
		return -1;
	}
}


void showReport(int cont_horas, int tarifa) {
	cout << "\nSe han contabilizado " << cont_horas << " horas." << endl;
	cout << "Debe cancelar " << tarifa << " nuevos soles." << endl;
}


int main() {

	int cont_horas, h_entrada, m_entrada , h_salida, m_salida, tarifa;

	getHour("entrada", h_entrada, m_entrada);
	getHour("salida",h_salida, m_salida);
	
	cont_horas = contHours(h_entrada, m_entrada, h_salida, m_salida);
	tarifa = calcTarifa(cont_horas);

	showReport(cont_horas, tarifa);

	return 0;
}