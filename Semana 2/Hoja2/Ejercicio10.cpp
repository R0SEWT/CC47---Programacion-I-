#include<iostream>

using namespace std;

int getN() {
	int n = -1;
	do {
		cout << "Digite un numero entero: ";
		cin >> n;
	} while (n < 0 || n>127);
	return n;
}


void showInterpret(int n) {
	cout << (char)n << endl;
	if ('0' <= n && '9' >= n) {
		cout << "Es un digito!!" << endl;
	}
	else if ('A' <= n && 'Z' >= n) {
		cout << "Es mayuscula!!" << endl;
	}
	else if ('a' <= n && 'z' >= n) {
		cout << "Es minuscula!!" << endl;
	}
	else {
		cout << "Es otro caracter!!" << endl;
	}
}

int main() {
	int n;

	n = getN();
	showInterpret(n);

	return 0;
}