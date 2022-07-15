Algoritmo Ejercicio5
	// calculadora de precio de venta de una pieza
	
	//Entrada de datos
	Escribir "Digite el precio de compra de la pieza: "
	leer precio_compra
	Escribir "Digite el procentaje de ganancia: " //100 == 100%
	leer porcentaje_ganancia
	
	// proceso
	
	pv = precio_compra*100/(100-porcentaje_ganancia)
	
	// salida
	Escribir "El precio de venta de la pieza es de: ", pv
	
	
FinAlgoritmo
