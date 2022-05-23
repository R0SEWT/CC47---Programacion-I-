#include <iostream>
using namespace std;

double Devolver_menor(float a, float b) {
	if (a < b) {
		return a;
	}
	return b;
}

double Devolver_mayor(float a, float b) {
	if (a > b) {
		return a;
	}
	return b;
}

int main() {
	double x = 1, y = 3;
	cout << Devolver_menor(x,y) << endl;
	cout << Devolver_mayor(x,y) << endl;

	return 0;
}
