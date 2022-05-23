#include<iostream>

using namespace std;

float PI = 3.1416f;

double Ingresar_n() { //Entrada y validacion
	double n = -1;
	do {
		cout << "Ingrese el radio: "; cin >> n;
	} while (n <= 0);
	return n;
}


void Muestra_area(double radio) { //Ejercicio 9
	cout <<"El area es de: " << PI * radio * radio << endl;
}

double Calcular_area(double radio) { //Ejercicio 10, 11.a
	return PI * radio * radio;
}

double Calcular_perimetro(double radio) { //Ejercicio 11.b
	return 2 * PI * radio;
}

void Calcular_area_perimetro(double radio, double &perimetro, double &area) {//Ejercicio 12
	perimetro = 2 * PI * radio;
	area = PI * radio * radio;
}

void Intercambiar_variables(double& x, double& y) { //Ejercicio13
	double aux = x;
	x = y;
	y = aux;
}


int main() {
	double perimetro, area;
	double radio = Ingresar_n(); //valida radio como distancia
	Muestra_area(radio);
	cout << "El area retronada es de :" << Calcular_area(radio) << endl;
	cout << "El perimetro retronado es de :" << Calcular_perimetro(radio) << endl;
	Calcular_area_perimetro(radio, perimetro, area); 
	cout << perimetro << endl << area << endl;
	Intercambiar_variables(perimetro, area);
	cout << perimetro << endl << area << endl;

	return 0;
}
