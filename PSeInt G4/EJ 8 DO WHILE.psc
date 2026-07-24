Proceso DigitosParesDoWhile
	Definir numeroIngresado, auxiliar, ultimoDigito, contadorPares Como Entero
	
	Escribir "Ingrese un numero entero: "
	Leer numeroIngresado
	
	auxiliar = numeroIngresado
	
	// Convertir a positivo si es negativo
	Si auxiliar < 0 Entonces
		auxiliar = auxiliar * (-1)
	FinSi
	
	contadorPares = 0
	
	Repetir
		ultimoDigito = auxiliar % 10
		Si ultimoDigito % 2 = 0 Entonces
			contadorPares = contadorPares + 1
		FinSi
		auxiliar = TRUNC(auxiliar / 10)
	Hasta Que auxiliar = 0
	
	Escribir "El numero posee ", contadorPares, " digito(s) par(es)."
FinProceso