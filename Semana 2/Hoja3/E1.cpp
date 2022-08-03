#include<iostream>

using namespace std;

int main() {
	int n;
	cout << "Digite un numero entero: ";
	cin >> n;
	
	cout.width(5);
	if (n >= 10) {
		cout<<n * 3;
	}
	else {
		cout<< n / 4.0;
	}

	return 0;
}