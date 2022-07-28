#include <iostream>

using namespace std;


void getHour(int &s, int &m, int &h) {
	bool hora_valida;
	do {

		cout << "Digite la hora [h m s]:  "; //con ':' el programa explota
		cin >> h;
		cin >> m;
		cin >> s;

		hora_valida = (h >= 0) && (m >= 0) && (s >= 0) && (h < 24) && (m < 60) && (s < 60);

	} while (!hora_valida);
}


void addOne(int &s,int &m,int &h) {
	s++;
	if (s >= 60) {
		s = 0;
		m++;
		if (m >= 60) {
			m = 0;
			h++;
			if (h >= 24) {
				h = 0;
			}
		}
	}
}


void mostrarHour(int s, int m, int h) {
	cout << "La hora luego de un segundo es: " << h << ": " << m << ": " << s << endl;
}


int main() {
	int s, m, h;
	
	getHour(s, m, h);
	addOne(s, m, h);
	mostrarHour(s, m, h);

	return 0;
}