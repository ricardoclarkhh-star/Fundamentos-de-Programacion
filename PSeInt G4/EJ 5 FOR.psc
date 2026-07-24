Proceso CantidadCifrasFor
	Definir numeroIngresado, auxiliar, contadorCifras Como Entero
	
	Escribir "Ingrese un numero entero: "
	Leer numeroIngresado
	
	auxiliar = numeroIngresado
	
	// Convertir a positivo si es negativo
	Si auxiliar < 0 Entonces
		auxiliar = auxiliar * (-1)
	FinSi
	
	contadorCifras = 0
	
	// Caso especial para el numero 0
	Si auxiliar = 0 Entonces
		contadorCifras = 1
	Sino
		// Estructura Para adaptada para la reduccion de cifras
		Para auxiliar = auxiliar Hasta 1 Con Paso 0 Hacer
			contadorCifras = contadorCifras + 1
			auxiliar = TRUNC(auxiliar / 10)
			Si auxiliar = 0 Entonces
				// Finaliza el recorrido asignando valor fuera del rango
				auxiliar = -1
			FinSi
		FinPara
	FinSi
	
	Escribir "El numero posee ", contadorCifras, " cifra(s)."
FinProceso