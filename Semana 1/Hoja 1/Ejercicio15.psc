Algoritmo Ejercicio15
	Escribir "Introduzca un numero entero de en el intervalo [0,100]: "
	Leer n
	//validacion de entrada
	
	esta_intervalo= 0 <= n y n <= 100
	es_entero = trunc(n) - n == 0 
	
	si !(es_3cifras y es_entero)
		Escribir "Numero incorrecto"
	SiNo
		si n<=9
			Escribir "1 digito"
		FinSi
		si n>=10 y n<=99
			Escribir "2 digitos"
		FinSi
		si n==100
			Escribir "3 digitos"
		FinSi
	fin si
FinAlgoritmo
