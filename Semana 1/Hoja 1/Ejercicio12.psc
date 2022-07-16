Algoritmo Ejercicio12
	Escribir "Digite los GB consumidos por el usuario: "
	leer consumo
	
	Si consumo <= 4
		pago = 50
	FinSi
	si consumo > 4 y consumo <= 8
		pago = 85
	FinSi
	si consumo > 8
		giga_adicional = 8 - trunc(consumo)
		pago = 85 + giga_adicional*4.5
	FinSi
	
	Escribir "El monto a pagar en el recibo de consumo es de ", pago, " soles"
	
FinAlgoritmo
