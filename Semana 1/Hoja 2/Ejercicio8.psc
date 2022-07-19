Algoritmo Ejercicio8
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
	
	si b<a y c<a
		Escribir a
		si b>c
			Escribir b
			Escribir c
		sino
			Escribir c
			escribir b
		FinSi
	SiNo
		si a<b y c<b
			Escribir b
			si a>c
				Escribir a
				Escribir c
			SiNo
				escribir c
				escribir a
			FinSi
		SiNo
			Escribir c
			si a>b
				Escribir a
				Escribir b
			SiNo
				Escribir b
				Escribir a
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo
