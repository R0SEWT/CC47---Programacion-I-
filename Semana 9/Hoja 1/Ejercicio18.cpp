#include<iostream>

using namespace std;

int Ingresar_n() {
	int n = -1;
	do{
		cout << "Digite el valor de n: "; cin >> n;
	} while (n <= 0);
	return n;
}


int Invertir(int n) { //12345
	int resultado = 0;
	while (n > 0) {

		resultado *= 10;		// r = 0 , r = 50, r = 540, r =5430, r = 54320
		resultado += n % 10;	// r = 5 , r = 50 + (1234 % 10) = 54, r = 543, r = 5432, r = 54321 
		n /= 10;				// n = 1234, n = 123, n = 12, n = 1, n = 0 (n<0)
		
	}
	return resultado; //return 54321
}

int main() {
	int n = Ingresar_n(), inverso = Invertir(n);
	if (n == inverso) {
		cout << n << " es un numero capicua" << endl;
	}
	else{
		cout << n << " no es un numero capicua" << endl;
	}

	return 0;
}
