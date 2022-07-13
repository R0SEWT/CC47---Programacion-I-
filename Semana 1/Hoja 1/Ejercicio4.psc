Algoritmo Ejercicio4
	//Reparticion de ganancia por cantidad de acciones
	
	//Entrada de datos
	Escribir "Digite la ganancia de la empresa en soles: "
	Leer ganancia
	Escribir "Digite el numero de acciones a nombre de A: "
	Leer a
	Escribir "Digite el numero de acciones a nombre de B: "
	Leer b
	Escribir "Digite el numero de acciones a nombre de C: "
	Leer c
	
	//Proceso
	gan_a = a/(a+b+c)* ganancia //ganancia correspondiente a cada socio
	gan_b = b/(a+b+c)* ganancia
	gan_c = c/(a+b+c)* ganancia
	
	//Salida
	Escribir "Al socio A le corresponde ",gan_a," nuevos soles"
	Escribir "Al socio B le corresponde ",gan_b," nuevos soles"
	Escribir "Al socio C le corresponde ",gan_c," nuevos soles"
	
	
	
	
FinAlgoritmo
