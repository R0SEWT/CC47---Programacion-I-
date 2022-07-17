Algoritmo Ejercicio14
	//entrada
	Escribir "Introduzca un numero entero de tres cifras: "
	Leer n
	//validacion de entrada
	
	es_3cifras = 100 <= n y n < 1000
	es_entero = trunc(n) - n == 0 
	
	si !(es_3cifras y es_entero)
		Escribir "Numero incorrecto"
	SiNo //abc
		a = trunc(n/100)
		c = n %10
		
		si a == c
			es_capicua = Verdadero
		SiNo
			es_capicua = Falso
		FinSi
		
		
		
		Si es_capicua
			Escribir "Es numero capicua"
		SiNo
			Escribir "No es numero capicua"
		FinSi
		
	FinSi
	
	
FinAlgoritmo
