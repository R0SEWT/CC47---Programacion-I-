#include<iostream>

using namespace std;

double getValue(double n, int i) {
	cout << "Digite el numero " << i << ": ";
	cin >> n;
	return n;
}

void getValues(double &x, double &y, double &z) {
	int i = 0;
	bool same = false;

	x = getValue(x, ++i);

	do {
		y = getValue(y, ++i);
		same = x == y;
		if (same) {
			cout << "Los valores deben ser diferentes: " << endl;
			i--;
		}
	} while (same);

	do {
		z = getValue(z, ++i);
		same = z == y || z == x;
		if (same) {
			cout << "Los valores deben ser diferentes: " << endl;
			i--;
		}
	} while (same);

}


void calcMinMax(double x, double y, double z, double& min, double& max) {
	if (x > y && x > z) {
		max = x;
		if (y < z) {
			min = y;
		}
		else {
			min = z;
		}
	}
	else if(y > z && y > x){
		max = y;
		if (x < z) {
			min = x;
		}
		else{
			min = z;
		}
	}
	else {
		max = z;
		if (x < y) {
			min = x;
		}
		else {
			min = y;
		}
	}	
}


void showMinMax(double x, double y, double z, double min, double max) {
	cout << "Entre los valores " << x << ", " << y << ", " << z << " el minimo es " << min << " y el maximo es " << max<<"." << endl;
}


int main() {
	double x, y, z;
	double min, max;

	getValues(x, y, z);
	calcMinMax(x, y, z , min , max);
	showMinMax(x, y, z, min, max);

	return 0;
}