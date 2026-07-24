Proceso PromedioGeneralDoWhile
	Definir contador Como Entero
	Definir nota, sumaNotas, promedioGeneral Como Real
	
	sumaNotas = 0
	contador = 1
	
	Repetir
		Escribir "Ingrese el promedio del alumno ", contador, ": "
		Leer nota
		sumaNotas = sumaNotas + nota
		contador = contador + 1
	Hasta Que contador > 10
	
	promedioGeneral = sumaNotas / 10
	
	Escribir "El promedio general del salon es: ", promedioGeneral
FinProceso