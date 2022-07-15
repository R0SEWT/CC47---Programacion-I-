Algoritmo Ejercicio7
	// Entrada de datos
	Escribir "Digite la tarifa horaria del trabajador: "
	Leer tarifa_horaria
	Escribir "Digite el numero de horas trabajadas: "
	Leer horas_trabajadas
	
	//Proceso 
	sueldo_basico = horas_trabajadas * tarifa_horaria
	sueldo_bruto = sueldo_basico * 118/100
	sueldo_neto = sueldo_bruto * 88/100
	
	//Salida
	Escribir "El sueldo basico del trabajador es: ", sueldo_basico
	Escribir "El sueldo bruto del trabajador es: ", sueldo_bruto
	Escribir "El sueldo neto del trabajador es: ", sueldo_neto
	
	
FinAlgoritmo
