Algoritmo Ejercicio6
	Escribir "Digite la coord x del punto (x1,y1)"
	leer cord_x1
	Escribir "Digite la coord y del punto (x1,y1)"
	leer cord_y1
	Escribir "Digite la coord x del punto (x2,y2)"
	leer cord_x2
	Escribir "Digite la coord y del punto (x2,y2)"
	leer cord_y2
	
	xd = cord_x2 - cord_x1
	yd = cord_y2 - cord_y1
	d = raiz( xd * xd + yd * yd)
	angulo = atan(xd / yd)
	
	Escribir "La distancia entre las coordenadas es: ", d
	Escribir "El angulo que forma la recta que los une es: ", angulo, " radianes"
	
	
	
	
FinAlgoritmo
