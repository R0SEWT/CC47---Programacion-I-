Algoritmo Ejercicio6
	Escribir "Ingrese el precio del producto: "
	leer precio
	Escribir "Ingrese el porcentaje de descuento (%): "
	leer descuento
	escribir "Digite la cantidad de unidades a comprar: "
	leer unidades
	//Proceso 
	
	//El importe compra se calcula multiplicando el precio 
	//del producto por la cantidad de unidades adquiridas. 
	imp_compra = precio*unidades
	imp_desc = imp_compra*descuento/100
	imp_a_pagar = imp_compra - imp_desc
	
	//Salida
	
	Escribir "El  importe de la compra es: ", imp_compra
	Escribir  "El importe del descuento es: ",imp_desc
	Escribir "El importe a pagar por ",unidades," del producto es: ", imp_a_pagar
		
	
FinAlgoritmo
