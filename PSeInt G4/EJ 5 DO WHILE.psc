Proceso CantidadCifrasDoWhile
	Definir numeroIngresado, auxiliar, contadorCifras Como Entero
	
	Escribir "Ingrese un numero entero: "
	Leer numeroIngresado
	
	auxiliar = numeroIngresado
	
	// Convertir a positivo si es negativo
	Si auxiliar < 0 Entonces
		auxiliar = auxiliar * (-1)
	FinSi
	
	contadorCifras = 0
	
	// Estructura Repetir-Hasta Que
	Repetir
		contadorCifras = contadorCifras + 1
		auxiliar = TRUNC(auxiliar / 10)
	Hasta Que auxiliar = 0
	
	Escribir "El numero posee ", contadorCifras, " cifra(s)."
FinProceso