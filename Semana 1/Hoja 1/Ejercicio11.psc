Algoritmo Ejercicio11
	
	Escribir "Digite la nota final del alumno: "
	leer nota_final
	
	si nota_final<12.50 
		Escribir "El estado del alumno es desapobrado"
		valido = Verdadero
	FinSi
	
	si nota_final >= 12.5 y nota_final <=20
		Escribir "El estado del alumno es aprobado"
		valido = Verdadero
	FinSi
	
	si !valido
		Escribir "El alumno no cuenta con un estado valido"		
	FinSi
	
FinAlgoritmo
