Proceso DigitosParesWhile
	Definir numeroIngresado, auxiliar, ultimoDigito, contadorPares Como Entero
	
	Escribir "Ingrese un numero entero: "
	Leer numeroIngresado
	
	auxiliar = numeroIngresado
	
	// Convertir a positivo si es negativo
	Si auxiliar < 0 Entonces
		auxiliar = auxiliar * (-1)
	FinSi
	
	contadorPares = 0
	
	// Caso especial si el numero es 0
	Si auxiliar = 0 Entonces
		contadorPares = 1
	Sino
		// Estructura Mientras
		Mientras auxiliar > 0 Hacer
			ultimoDigito = auxiliar % 10
			Si ultimoDigito % 2 = 0 Entonces
				contadorPares = contadorPares + 1
			FinSi
			auxiliar = TRUNC(auxiliar / 10)
		FinMientras
	FinSi
	
	Escribir "El numero posee ", contadorPares, " digito(s) par(es)."
FinProceso