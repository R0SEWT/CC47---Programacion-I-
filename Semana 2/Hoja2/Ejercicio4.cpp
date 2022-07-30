#include<iostream>

using namespace std;

const double PI = 3.14159;

double getRad() {
	double n;
	
	cout << "Digite el valor del angulo en radianes: ";
	cin >> n;
	
	return n;
}


int transform_sex(double rad) {
	return rad * 180 / PI * 60 * 60; // a grados y luego a segundos
}


void interpretarSex(int segundos, int &g, int &m, int &s) {
	g = segundos / 3600;
	segundos -= g * 3600;
	m = segundos / 60;
	s = segundos % 60;
}


void mostrarAnguloSex(double rad, int g, int m, int s) {

	cout << "El angulo " << rad << " rad equivale en sexadecimales a: "<<endl;
	cout << g << "° " << m << " \"" << s << "\'" << endl;

}


int main() {
	double rad;
	int g, m, s, s_sex;
	

	rad = getRad();
	s_sex = transform_sex(rad);
	interpretarSex(s_sex, g, m, s);
	mostrarAnguloSex(rad, g, m, s);

	return 0;
}