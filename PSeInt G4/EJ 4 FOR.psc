Proceso PromedioGeneralFor
	Definir contador Como Entero
	Definir nota, sumaNotas, promedioGeneral Como Real
	
	sumaNotas = 0
	
	Para contador = 1 Hasta 10 Con Paso 1 Hacer
		Escribir "Ingrese el promedio del alumno ", contador, ": "
		Leer nota
		sumaNotas = sumaNotas + nota
	FinPara
	
	promedioGeneral = sumaNotas / 10
	
	Escribir "El promedio general del salon es: ", promedioGeneral
FinProceso