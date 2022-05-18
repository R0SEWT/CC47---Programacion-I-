#include<iostream>
#include<math.h>

using namespace std;

long long Ingresar_n() { //Entrada y validacion
	long long n=-1;
	do {
		cout << "Ingrese numero: "; cin >> n;
	} while (n < 1000);
	return n; //n abcd...
}

int Detecta_cifras(long long n) { //simplifable
	int cifras = -1, i = 0;

	while (true) { //detecta desde la cifra 0, optimizable
		i++;
		if (n == n % long long(pow(10, i))) {
			/*
			123_456 % 10^0 == 0
			123_456 % 10^1 == 6
			...
			123_456 % 10^5 == 23_456
			123_456 % 10^6 == 123_456
			n % 10^i devuelve i cifras de n, desde la izquierda
			n == n % 10^i cuando se muestren todas las cifras de n
			*/
			return i;//cifras
		}
	}

}
long long Invertir(long long n) {
	long long inverso = 0, aux;
	int cifras;

	cifras = Detecta_cifras(n);
	for (int i = --cifras; 0 <= i; i--) {

		aux = n / long long (pow(10, i));//almacena ultima cifra del numero en proceso	123456/10^5 = 1 -> 23456/10^4 = 2 ... 6/10^0 = 6
		n -= aux * pow(10, i);//resta la ultima cifra del numero en proceso	123456 - 1*10^5 = 23456 -> 23456/10^4 = 3456 ... 6 - 6*10^0 = 0
		inverso += aux * pow(10, cifras - i); //añade cifras desde la derecha inv += 1*10^0, inv = 1 -> inv += 2*10^1, inv = 21.. inv += 6 * 10^5 = 654321
	}
	return inverso;
}

void Mostrar_n(long long n) {
	cout << "Numero invertido: " << n;
}

int main() {
	long long n, n_inverso;
	n = Ingresar_n();
	n_inverso = Invertir(n);
	Mostrar_n(n_inverso);


	return 0;
}
