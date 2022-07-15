Algoritmo Ejercicio9
	//Entrada
	entrada_valida = Falso
	Repetir
		Escribir "Digite el valor en mts de R en la figura: "
		leer r
		Escribir "Digite el valor en mts de H en la figura: "
		leer h
		Si r < h y 0 < r y 0 < h Entonces
			entrada_valida = Verdadero
		SiNo
			Escribir "La figura no puede existir"
		Fin Si
		
	Hasta Que entrada_valida
	
	//Proceso 
	area_semicirculo = PI* r*r/2
	area_triangulos = raiz(h*h - r*r) * r
	area_figura = area_semicirculo + area_triangulos
	
	//Salida
	Escribir "El area de la figura es ",area_figura," metros cuadrados"
	
FinAlgoritmo
