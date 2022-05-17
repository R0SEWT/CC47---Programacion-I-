#include <iostream>

using namespace std;


void DibujaCuadrado() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "*";
		}
		cout << endl;
	}
}


void DibujaCuadrado(char caracter, int tamaño) {
	for (int i = 0; i < tamaño; i++) {
		for (int j = 0; j < tamaño; j++) {
			cout << caracter;
		}
		cout << endl;
	}
}


void DibujaCuadrado(char caracter, int tamaño,int x, int y) {

	x--;//dibujar apartir de la coordenada, primer elemento en (pos_x;pos_y)
	y--;

	for (int r = 0; r < y; r++) { //espacios verticales 
		cout << endl;//0,1,..r
	}

	for (int i = 0; i < tamaño; i++){
		for (int r = 0; r < x; r++) {
			cout << " ";
		}
		for (int j = 0; j < tamaño; j++) {
			cout << caracter;
		}
		cout << endl;
	}
}


void Cambia_color(int color) {
	switch (color)
	{
	case 1: system("color 1"); break;
	case 2: system("color 2"); break;
	case 3: system("color 3"); break;
	case 4: system("color 4"); break;
	case 5: system("color 5"); break;
	case 6: system("color 6"); break;
	case 7: system("color 7"); break;
	case 8: system("color 8"); break;
	case 9: system("color 9"); break;

	default: system("color 0"); break;
	}
}


void DibujaCuadrado(char caracter,int pos_x,int pos_y, int color,int ancho,int alto) {
	
	Cambia_color(color);

	pos_x--;//dibujar apartir de la coordenada, primer elemento en (pos_x;pos_y)
	pos_y--;

	for (int r = 0; r < pos_y; r++) {//espacios verticales
		cout << endl;
	}

	for (int i = 0; i < alto; i++) {//recorre fila por fila

		for (int r = 0; r < pos_x; r++) { // Centrado en x /espacios en fila por fila
			cout << " ";
		}

		for (int j = 0; j < ancho; j++) { //dibuja y recorre columna por columna de una fila
			cout << caracter;
		}
		cout << endl;
	}

}



int main() {
	char caracter = '$';
	int tamaño = 6, pos_y = 3, pos_x = 4, color = 3, ancho = 15, alto = 6;

	DibujaCuadrado();
	DibujaCuadrado(caracter,tamaño);
	DibujaCuadrado(caracter, tamaño,pos_x,pos_y);
	DibujaCuadrado(caracter, pos_x, pos_y, color, ancho,alto);

	return 0;
}
