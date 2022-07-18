Algoritmo Ejercicio3
	Escribir "Digite la hora"
	Leer hora
	Escribir "Digite los minutos"
	Leer minutos
	Escribir "Digite los segundos"
	Leer segundos_
	
	
	es_hora_en_valores = 0 <= hora y 0 <= minutos y 0 <= segundos_ y 24 > hora y 60 > minutos y 60 > segundos_
	es_hora_entera = hora - trunc(hora) == 0 y minutos - trunc(minutos) == 0 y segundos_ - trunc(segundos_) == 0
	es_hora_valida = es_hora_en_valores y es_hora_entera
	
	si es_hora_valida
		segundos_ = segundos_ + 1
		
		si segundos_ == 60
			segundos_ = 0
			minutos = minutos + 1
		FinSi
		
		si minutos == 60
			minutos = 0
			hora = minutos + 1
		FinSi
		
		si hora == 60
			hora = 0
		FinSi
		
		
		Escribir hora,":",minutos,":",segundos_
		
	SiNo
		Escribir "Error! Hora invalida"
	FinSi
	
	
	
	
FinAlgoritmo
