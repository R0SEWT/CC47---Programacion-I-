Algoritmo Ejercicio8
	//Entrada
	
	Escribir "Digite la tarifa horaria del trabajador: "
	Leer tarifa_horaria
	Escribir "Digite el numero de horas trabajadas: "
	Leer horas_trabajadas
	
	//Proceso 
	sueldo_bruto = horas_trabajadas * tarifa_horaria
	descuento_essalud = sueldo_bruto * 9/100
	descuento_afp = sueldo_bruto * 11.5/100
	sueldo_neto = sueldo_bruto - (descuento_afp + descuento_essalud)
	
	//Salida
	Escribir "El sueldo bruto del trabajador es de: ", sueldo_bruto
	Escribir "El descuento por AFP es de: ", descuento_afp
	Escribir "El descuento por ESSALUD es de: ", descuento_essalud
	Escribir "El sueldo neto del trabajador es de: ", sueldo_neto
	
	
FinAlgoritmo
