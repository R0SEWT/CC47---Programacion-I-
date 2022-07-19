Algoritmo Ejercicio9
	Escribir "Digite la calificacion"
	Leer nota
	
	Si nota >= 19
		char_nota = 'A'
	SiNo
		si nota >= 16
			char_nota = 'B'
		SiNo
			si nota >= 13
				char_nota= 'C'
			SiNo
				si nota >= 10
					char_nota = 'D'
				SiNo
					char_nota = 'E'
				FinSi
			FinSi
		FinSi
	FinSi
	
	Escribir char_nota
	
	
FinAlgoritmo
