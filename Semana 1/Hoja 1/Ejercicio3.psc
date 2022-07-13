Algoritmo Ejercicio3
	//Constitucion accionaria de un capital
	//Entrada de datos
	Escribir "Carmela introduzca el monto que aporta a la sociedad"
	Leer monto_carmela
	Escribir "Javier introduzca el monto que aporta a la sociedad"
	Leer monto_javier
	Escribir "Eulogio introduzca el monto que aporta a la sociedad"
	Leer monto_eulogio
	
	//Proceso 
	capital = monto_carmela+ monto_eulogio + monto_javier
	por_carmela = monto_carmela*100/capital
	por_eulogio = monto_eulogio*100/capital
	por_javier = monto_javier*100/capital
	
	//Salida
	
	Escribir "El capital formado asciende a: ", capital, " nuevos soles"
	Escribir "El porcentaje accionario que corresponde a Carmela es: ", por_carmela, " nuevos soles"
	Escribir "El porcentaje accionario que corresponde a Javier es : ", por_eulogio, " nuevos soles"
	Escribir "El porcentaje accionario que corresponde a Eulogio es: ", por_javier, " nuevos soles"
	
	
FinAlgoritmo
