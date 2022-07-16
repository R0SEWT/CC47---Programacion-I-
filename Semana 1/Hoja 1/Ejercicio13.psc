Algoritmo Ejercicio13
	//entrada
	Escribir "Introduzca un numero entero de tres cifras: "
	Leer n
	//validacion de entrada
	
	es_3cifras = 100 <= n y n < 1000
	es_entero = trunc(n) - n == 0 
	
	si !(es_3cifras y es_entero)
		Escribir "Error! El numero no es un entero de 3 cifras"
	SiNo
		a = trunc(n/100)
		b = trunc([n - a*100]/10)
		c = n %10
		//n_inv = c*100 + b*10 + a al terminar en caso c fuera 0 daria errores
		
		Escribir "El numero ingresado al reves es: ", c,b,a
				
	FinSi
	
	
FinAlgoritmo
