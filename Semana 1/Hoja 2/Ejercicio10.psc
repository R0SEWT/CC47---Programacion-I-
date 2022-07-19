Algoritmo Ejercicio10

	Repetir
		Escribir "Introduzca el numero entero a revisar en el codigo ASCII"
		Leer n
	Hasta Que !(n < 48 o n > 122)
	
	
	Si 48 <= n y n <= 57
		Escribir "Es un digito!"
	FinSi
	Si 65 <= n y n <= 90
		Escribir "Es una letra mayuscula!"
	FinSi
	Si 97 <= n y n <= 122
		Escribir "Es una letra minuscula!"
	FinSi
	
FinAlgoritmo
