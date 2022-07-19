Algoritmo Ejercicio7
	Escribir "Introduzca el valor de (A)"
	Leer a
	Repetir
		Escribir "Introduzca el valor de (B)"
		leer b
		si b == a
			Escribir "Los valores deben ser distintos"
		FinSi
	Hasta Que a<>b
	Repetir
		Escribir "Introduzca el valor de (c)"
		leer c
		si c == a o c==b
			Escribir "Los valores deben ser distintos"
		FinSi
	Hasta Que a<>b y a<>c
	
	si a>b y a>b
		may = a
		si b<c
			men = b
		SiNo
			men = c
		FinSi
	SiNo
		si b>c y b>a
			may = b
			si a<c
				men = a
			SiNo
				men = c
			FinSi
		SiNo
			may = c
			si a<b
				a = men
			SiNo
				b = may
			FinSi
		FinSi
	FinSi
	
	
	Escribir "El mayor es: ", may
	Escribir "El menor es: ", men
	
	
FinAlgoritmo
