#include<iostream>

using namespace std;

#define n 3 

int main() {

	double num[n];

	for (int i = 0; i < n; i++) {
		cout << "Ingrese el numero " << i + 1 << ": ";
		cin >> num[i];
		for (int r = i - 1; 0 <= r; r--) {	// existe en el arreglo -> repite la iteracion
			if (num[i] == num[r]) {
				i--;
				cout << "Los digitos deben ser diferentes"<<endl;
			}
		}
	}

	for (int i = 0; i < n; i++) {			// selection sort
		for (int j = n - 1; i < j; j--) {
			if (num[j] < num[i]) {
				swap(num[i], num[j]);
			}
		}
	}
	
	cout << "El minimo es: " << num[0] << " y el maximo es: " << num[n - 1] << endl;

	return 0;
}