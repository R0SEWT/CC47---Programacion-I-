#include<iostream>
#include<math.h>

using namespace std;

void linea() {
	cout << "------------------------------------------------\n\n\n";
}

void ejercicio1() {

	int n;
	cout << "Es par?" << endl;
	linea();
	cout << "Ingrese un numero entero: "; cin >> n;

	if (n%2==0) {//es par
		cout << "Es un numero par" << endl;
	}
	else
	{
		cout << "No es un numero par" << endl;
	}
}


void mostrar_pesado(float d, float e) {
	if (d < e) {
		cout << "El elefante pesa más que el dinosaurio" << endl;
	}
	else if (e < d)	{
		cout << "El dinosaurio pesa más que el elefante" << endl;
	}
	else
	{
		cout << "Ambos animales pesan lo mismo" << endl;
	}
}

void ejercicio2() {
	cout << "Animal mas pesado" << endl;
	linea();
	float dino, elefante;
	cout << "Ingrese el peso del dinosaurio: "; cin >> dino;
	cout << "Ingrese el peso del elefante: "; cin >> elefante; //entrada
	mostrar_pesado(dino, elefante); //proceso y salida

}


bool validar_nota (float nota){ //devolver 1=invalido
	if (nota < 0 || nota>20) {
		return true;
	}
	return false;
}

void mostrar_aprobado(float nota) {
	if (nota >= 12.5) {
		cout << "Aprobado"<< endl;
	}
	else{
		cout << "Desaprobado" << endl;
	}
}

void ejercicio3() {

	float nota;
	cout << "Mostrar estado del alumno "<<endl;
	linea();
	//Ingreso y validacion
	do{
		cout << "Introduzca la nota del alumno: "; cin >> nota;
	} while (validar_nota(nota)); //false == pass
	//proceso y salida
	mostrar_aprobado(nota);

}


bool edad_valida(int edad) {
	if (edad > 0) {
		return true;
	}
	return false;
}

int calcular_precio(int edad) {
	if (edad < 18) {// c: -18
		return 7;
	}
	else if (edad <= 50) {
		return 15;
	}
	return 5;
}

void ejercicio4() {
	int edad, precio;

	cout << "Cuanto pagas en el cine? " << endl;
	linea();

	do{
		cout << "Ingrese la edad de la persona: "; cin >> edad;
	} while (!(edad_valida(edad)));//Entrada y validacion

	precio = calcular_precio(edad);//proceso

	cout << "El precio de la entrada es de " << precio << " soles"<<endl;

}


bool existe_triangulo(float a, float b, float c) {
	if (0 < a && 0 < b && 0 < c) {//positivo
		if ((a + b > c) && (c > a - b) && (c > b - a)) {//T existencia
			return true;
		}
	}
	return false;

}


void ejercicio5() {
	float a, b, c;
	cout << "Existe el triangulo?" << endl;
	linea();
	
	cout << "ingrese los lados de un triangulo(A B C)"; cin >> a; cin >> b; cin >> c;
	if (existe_triangulo(a,b,c)) {

		cout << "SI ES UN TRIANGULO"<<endl;
	}
	else {
		cout << "NO ES UN TRIANGULO" << endl;
	}

}


bool validar_discriminante(float a, float b, float c) {
	return (0 < b*b - 4 * a * c);
}

void ejercicio6() {
	float a, b, c, valor,x1,x2, resultado;

	cout << "Calcula raices de ecuacion cuadratica" << endl;
	linea();
	
	cout << "Ingrese el valor de A: "; cin >> a;
	cout << "Ingrese el valor de b: "; cin >> b;
	cout << "Ingrese el valor de c: "; cin >> c;
	cout << "Ingrese un valor para evaluar: "; cin >> valor;//entrada
	if (!validar_discriminante(a,b,c)) {//validacion
		cout << "Discrimnante menor o igual que 0"<<endl;
		return;
	}
	x1 = ((sqrt(b*b - 4 * a * c) - b) / (2 * a));//proceso raiz
	x2 = -1 * (sqrt(b*b - 4 * a * c) + b) / (2 * a);

	resultado = a * valor * valor + b * valor + c; //proceso evaluacion

	cout << "Raiz 1: " << x1 << endl;
	cout << "Raiz 2: " << x2 << endl;

	cout << a << "(" << valor << ")^2 + " << b << "(" << valor << ") + " << c << " = " << resultado<<endl;
}


bool es_multiplo(int n1, int n2) {
	return 0 == n1 % n2;
}

void ejercicio7() {
	int n1, n2;
	cout << "¿Es multiplo?" << endl;
	linea();
	cout << "Ingrese dos numeros enteros (N1 N2): "; cin >> n1; cin >> n2;
	if (es_multiplo(n1, n2)) {
		cout << n1 << " es multiplo de " << n2 << endl;
	}
	else {
		cout << n1 << " no es multiplo de " << n2 << endl;
	}
}


bool es_sexo(char sexo) {
	if (sexo == 'F' || sexo == 'f' || sexo == 'M' || sexo == 'm') {
		return true;
	}
	return false;
}

void ejercicio8() {
	char sexo;
	int edad, pulsaciones;
	linea();
	do {
		cout << "Ingrese el sexo de la persona(F o M): "; cin >> sexo;
	} while (!es_sexo(sexo));
	cout << "Ingrese la edad de la persona: "; cin >> edad;
	if (sexo == 'M' || sexo == 'm') {
		pulsaciones = (210 - edad) / 10;
	}
	else {
		pulsaciones = (220 - edad) / 10;
	}
	cout << "El numero debe ser de " << pulsaciones << " por cada 10 segundos aproximadamente" << endl;
}	


bool validar_goles(short gol_local, short gol_visitante) {
	return ((0 <= gol_local) && (0 <= gol_visitante));
}

void ejercicio9() {
	short gol_local, gol_visitante;
	cout << "Quien gana el partido?" << endl;
	linea();
	cout << "Ingrese la cantidad de goles del equipo local: "; cin >> gol_local;
	cout << "Ingrese la cantidad de goles del equipo visitante: "; cin >> gol_visitante;
	
	if (validar_goles(gol_local, gol_visitante)) {
		if (gol_visitante < gol_local){
			cout << "Gano el equipo visitante"<<endl;
		}
		else if (gol_local < gol_visitante) {
			cout << "Gano el equipo local" << endl;
		}
		else {
			cout << "Empate, ganó el futbol" << endl;
		}
	}
	else{
		cout << "Goles invalidos\n Fin del programa" << endl;
	}

}

void ejercicio10() {
	short c1, c2, c3;
	float propina, total;

	cout << "Los caramelos de pedro y su maravillosa introduccion al mundo injusto en el que vivimos" << endl;
	linea();
	//entrada
	cout << "Ingrese la cantidad de caramelos Ambrosoli a comprar: "; cin >> c1;
	cout << "Ingrese la cantidad de caramelos Tic Tac a comprar: "; cin >> c2;
	cout << "Ingrese la cantidad de caramelos Donofrio a comprar: "; cin >> c3;
	cout << "Ingrese el monto de propina: "; cin >> propina;
	//proceso
	total = c1 * 0.75 + c2 * 1.15 + c3 * 0.65;
	cout << "El monoto toal de la compra es: " << total << endl;
	if (propina < total) {
		cout << "LA PROPINA NO FUE SUFICIENTE PARA PAGAR POR LOS CARAMELOS" << endl;
	}
	else{
		cout << "La propina fue suficiente para pagar por los caramelos" << endl;
	}
}


bool validar_consumo(float consumo) {
	return (0 <= consumo); //valido
}

void ejercicio11() {
	float consumo, monto;
	cout << "Cobros movistar" << endl;
	linea();
	do {
		cout << "Digite el consumo en GB: "; cin >> consumo;
	} while (!validar_consumo(consumo));

	if(consumo <= 4) {
		monto = 50;
	}
	else if (consumo <= 8) {
		monto = 85;
	}
	else{
		consumo -= 8;
		monto = 85 + int(consumo)*4.5;
	}
	cout << "Usted debe cancelar " << monto << " nuevos soles" << endl;

}


void ejercicio12() {
	int nota, faltas;
	cout << "La beca" << endl;
	linea();
	cout << "Digite el ponderado del alumno: "; cin >> nota;
	cout << "Digite la cantidad de faltas: "; cin >> faltas;

	if (15 <= nota && nota<20 && faltas == 0) {
		cout << "El alumno cumple con los requisitos de la beca" << endl;
	}

}
bool es_numero_valido(int numero) {
	return (numero >= 100 && numero <= 999);
}

int invierte_numero(int numero) {//factorizamos
	int a, b, c; //123
	c = numero % 10; //123%10 = 3
	b = numero % 100 - c;// 123%100 - 3 = 23-3 = 20
	a = numero / 100; // 123/100 = 1
	return c * 100 + b + a;
}


void ejercicio13() {
	cout << "Numero de 3 cifras" << endl;
	linea();

	int numero;
	cout << "Digite un numero de 3 cifras"; cin >> numero;
	if (es_numero_valido(numero)) {
		cout<<invierte_numero(numero)<<endl;
	}
	else {
		cout << "Numero incorrecto" << endl;
	}

}

int Ingresar_n() {
	int n=0;
	cout << "Ingrese el numero de tres cifras: "; cin >> n;
	if (n < 100 || n>999) {
		return -1;
	}

	return n;
}

bool Es_capicua(int n) {
	int a, c;
	a = n / 100;
	c = n % 10;

	return a == c;
}

void ejercicio14() {
	int n;
	bool capicua;
	cout << "Es capicua de tres cifras" << endl;
	linea();

	n = Ingresar_n();
	if (n == -1) {//numero invalido
		cout << "Numero incorrecto " << endl;
	}
	else {//numero valido
		capicua = Es_capicua(n);

		if (capicua) {
			cout << "Es numero capicua" << endl;
		}
		else {
			cout << "No es numero capicua" << endl;
		}
	}
	
}

void ejercicio15(){
	int n;
	cout << "Cuantos digitos tengo" << endl;
	linea();
	
	cout << "Digite un numero: "; cin >> n;
	if (n <= 100 && n >= 1) {
		cout << "El numero tiene " << n / 100 << " digito";
		if (n != 1) {
			cout << "s";
		}
		cout << endl;
	}
	else {
		cout << "Numero incorrecto" << endl;
	}
	
}
int main() {
	int opcion = 0;

	cout << "Ejercicio a ejecutar: "; cin >> opcion;

	switch (opcion) {
	case 1:ejercicio1(); break;
	case 2:ejercicio2(); break;
	case 3:ejercicio3(); break;
	case 4:ejercicio4(); break;
	case 5:ejercicio5(); break;
	case 6:ejercicio6(); break;
	case 7:ejercicio7(); break;
	case 8:ejercicio8(); break;
	case 9:ejercicio9(); break;
	case 10:ejercicio10(); break;
	case 11:ejercicio11(); break;
	case 12:ejercicio12(); break;
	case 13:ejercicio13(); break;
	case 14:ejercicio14(); break;
	case 15:ejercicio15(); break;
	
	default: cout << "Papi seguro no te equivocaste de hoja??? "<<endl;
	}

	cout << "Ejecucion exitosa";


	return 0;
}
