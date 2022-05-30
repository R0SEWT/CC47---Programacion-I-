#include<iostream>

using namespace std;


int sumaDivisores(int n) { //de ingresar 0 devolverá un valor erroneo
	int suma = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			suma += i;
		}
	}
	return suma;
}


bool esPerfecto(int n) {

	int suma_divisores_propios = sumaDivisores(n) - n; //Suma de divisores (-) excluyendo "n"

	if (n == suma_divisores_propios) {
		return true;
	}

	return false;
}


void mostrarNPerfectos(int n) {
	int cont = 0, i = 0;

	while (cont < n) {  //Recorre todos los numeros mostrando los num perfectos hasta contar n num perfectos.
		i++;
		if (esPerfecto(i)) {
			cout << i << endl;
			cont++;
		}
	}
}


int main() {
	int n = 4;
	mostrarNPerfectos(n);
	

	return 0;
}
