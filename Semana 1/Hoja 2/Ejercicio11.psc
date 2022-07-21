Algoritmo Ejercicio11
	
	Repetir
		Escribir "Digite el costo de la entrada"
		Leer costo_entrada
	Hasta Que costo_entrada>0
	
	Repetir
		Escribir "Digite la cantidad de entradas a comprar"
		Leer cant_entradas
		
		cant_entradas_entera = cant_entradas - trunc(cant_entradas) == 0
		cant_entradas_en_rango = cant_entradas <= 4 y cant_entradas >= 1
		cant_entradas_valida = cant_entradas_en_rango y cant_entradas_entera
	Hasta Que cant_entradas_valida
	
	Segun cant_entradas Hacer
		1:
			descuento = 0
		2:
			descuento = 0.10
		3:
			descuento = 0.15
		4:
			descuento = 0.20
	Fin Segun
	
	
	costo_entrada_procesado = cant_entradas*costo_entrada * (1-descuento)	
	
	
	Escribir "El costo de ", cant_entradas," entradas es de ", costo_entrada_procesado
	
	
FinAlgoritmo
