Proceso PromedioGeneralWhile
	Definir contador Como Entero
	Definir nota, sumaNotas, promedioGeneral Como Real
	
	sumaNotas = 0
	contador = 1
	
	Mientras contador <= 10 Hacer
		Escribir "Ingrese el promedio del alumno ", contador, ": "
		Leer nota
		sumaNotas = sumaNotas + nota
		contador = contador + 1
	FinMientras
	
	promedioGeneral = sumaNotas / 10
	
	Escribir "El promedio general del salon es: ", promedioGeneral
FinProceso
