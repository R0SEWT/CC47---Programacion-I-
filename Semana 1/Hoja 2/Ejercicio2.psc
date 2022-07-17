Algoritmo Ejercicio2
	Escribir "Digite la hora a interpretar en segundos"
	leer hora_sec
	
	aux = hora_sec
	sec = aux%60
	aux = aux - sec
	
	min = (aux%3600)/60
	aux = aux - min*60
	
	hora = aux/3600
	
	Escribir hora_sec, " segundos son: "
	Escribir hora, " horas "
	Escribir min, " minutos"
	Escribir sec, " segundos"
	
	
	
FinAlgoritmo
