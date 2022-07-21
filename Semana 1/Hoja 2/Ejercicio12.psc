Algoritmo Ejercicio12
	Repetir
		Escribir "Introduzca la hora de entrada"
		Leer hora_entrada
		h_entrada = trunc(hora_entrada/100)
		min_entrada = hora_entrada % 100
		es_hora = hora_entrada >= 0 y h_entrada <= 23 y min_entrada <= 60
		
	Hasta Que es_hora
	
	Repetir 
		Escribir "Introduzca la hora de salida"
		Leer hora_salida
		
		h_salida = trunc(hora_salida/100)
		min_salida = hora_salida % 100
		
		es_hora = hora_salida >= 0 y h_salida <= 23 y min_salida <= 60
		
	Hasta Que es_hora
	
	
	hs_estadia = h_salida - h_entrada
	
	dia_siguiente = hora_salida < hora_entrada
	
	si dia_siguiente
		hs_estadia = hs_estadia + 24 // hs_estadia era valor negativo
	FinSi
	
	comenzo_hora = min_entrada < min_salida
	
	si comenzo_hora
		hs_estadia = hs_estadia + 1
	FinSi
	
	si hs_estadia == 0 Entonces
		total_pagar = 10
	SiNo
		total_pagar = 10 + 6 * (hs_estadia - 1)
	FinSi
	
	Escribir "El monto a pagar asciende a ",total_pagar, " nuevos soles"
	
	
FinAlgoritmo
