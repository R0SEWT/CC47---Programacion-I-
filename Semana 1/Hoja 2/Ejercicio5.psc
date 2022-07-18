Algoritmo Ejercicio5
	Escribir "Digite la coord x del punto (x,y)"
	leer cord_x
	Escribir "Digite la coord y del punto (x,y)"
	leer cord_y
	radio = 5
	
	si cord_x * cord_x + cord_y * cord_y <= radio * radio
		Escribir "El punto se encuentra dentro del circulo"
	SiNo
		Escribir "El punto no se encuentra dentro del circulo"
	FinSi
	
FinAlgoritmo
