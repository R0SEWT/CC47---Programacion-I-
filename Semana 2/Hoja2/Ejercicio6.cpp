#include<iostream>
#include<math.h>

using namespace std;

const double PI = 3.14159;

void getCoord(int i, double& x, double& y) {
	cout << "Ingrese la coordenada " << i << " separada por espacios [x y]: ";
	cin >> x;
	cin >> y;
}


void getCoords(double& x1, double& y1, double& x2, double& y2) {
	int i = 0;
	getCoord(++i, x1, y1);
	getCoord(++i, x2, y2);
}


double calcDistance(double x1, double y1, double x2, double y2) {
	double dx, dy;

	dx = x2 - x1;
	dy = y2 - y1;

	return sqrt(dx * dx + dy * dy);
}


/*int transform_sex(double rad) {
	return rad * 180 / PI;
}
*/

double calcAngulo(double y1, double y2, double radio) {
	double cat_opuesto = abs(y2 - y1);
	double angle = acos(cat_opuesto / radio);
	return angle;
}


void showAngleDistance(double d, double angle) {
	cout << "La distancia entre los puntos es: " << d << " unidades" << endl;
	cout << "El angulo que forma la recta que une con la horizontal es " << angle << " radianes" << endl;
}


int main() {
	double x1, x2, y1, y2; 
	double d, angle;
	
	getCoords(x1, y1, x2, y2);

	d = calcDistance(x1, y1, x2, y2);
	angle = calcAngulo(y1, y2, d);

	showAngleDistance(d,angle);

	return 0;
}