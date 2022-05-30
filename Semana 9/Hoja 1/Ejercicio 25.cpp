#include<iostream>

using namespace std;

int ingresarN() {
	int n = -1;
	do {
		cout << "Ingrese el valor de n ";
		cin >> n;
	} while (n <= 0);					//enteros positivos 
	return n;
}


int sumaDivisores(int n) { //de ingresar 0 devolverá un valor erroneo
	int suma = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			suma += i;
			cout << i << " + ";
		}
	}
	return suma;
}


bool esPerfecto(int n) {

	int suma_divisores_propios = sumaDivisores(n) - (n + 1); //Suma de divisores (-) excluyendo "n" y 1

	if (n == suma_divisores_propios) {			
		return true;					
	}

	return false;
}


int main() {
	int n;

	n = ingresarN();

	if (esPerfecto(n)) {
		cout << "El numero " << n << " es un numero perfecto";
	}
	else {
		cout << "El numero " << n << " no es un numero perfecto";
	}

	return 0;
}
