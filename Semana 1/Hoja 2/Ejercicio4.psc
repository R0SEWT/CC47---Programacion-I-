Algoritmo Ejercicio4
	Escribir "Digite el valor del angulo en radianes"
	Leer rad
	
	
	// conversion a sexadecimal y luego a sec
	sex = rad * 180 / PI
	sex_sec = sex * 3600
	// reutilizacion del ejercicio 2 no es posible % mod no acepta flotante
	
	aux = sex_sec
	
	grado = trunc(aux / 3600) 
	aux = aux - grado * 3600
	min = trunc(aux/60)
	sec = aux - min * 60
	

	
	
	Escribir rad, " radianes son: " // no existe caracter de escape aqui
	Escribir grado, " grados "
	Escribir min, " minutos"
	Escribir sec, " segundos"
	
FinAlgoritmo
