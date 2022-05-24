#include<iostream>

using namespace std;


int Ingresar_n() {
	int n;
	do {
		cout << "Ingrese el valor de n: "; cin >> n;
	} while (n < 0);
	return n;
}

bool Es_divisible(int a, int b){ //a es divisible en b -> b es divisor de a
    return a%b == 0;
}

void Mostrar_divisores(int n){ //entrada naturales
    for (int i = 1; i <= n; i++) //naturales - {0}
    {
        if(Es_divisible(n,i)){
            cout<<i<<endl;
        }
    }
    if(n == 0){
        cout<<"0 tiene infinitos divisores"<<endl;
    }
    
}

int main(){
    int n = Ingresar_n();
    Mostrar_divisores(n);

    return 0;
}
