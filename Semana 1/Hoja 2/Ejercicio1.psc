Algoritmo Ejercicio1
	Escribir "Digite la cantidad K en soles: "
	leer k
	
	si k >= 0 y trunc(k) - k == 0
		mon_5 = trunc(k/5)
		k = k%5
		mon_2 = trunc(k/2)
		mon_1 = k%2
		
		Escribir "La cantidad de monedas de 5 s/ es: ", mon_5
		Escribir "La cantidad de monedas de 2 s/ es: ", mon_2
		Escribir "La cantidad de monedas de 1 s/ es: ", mon_1
		
		
	SiNo
		escribir "Cantidad invalida"
	FinSi
	
	
FinAlgoritmo
