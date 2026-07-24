Proceso DigitosParesFor
	Definir numeroIngresado, auxiliar, ultimoDigito, contadorPares, contador Como Entero
	
	Escribir "Ingrese un numero entero: "
	Leer numeroIngresado
	
	auxiliar = numeroIngresado
	
	// Convertir a positivo si es negativo
	Si auxiliar < 0 Entonces
		auxiliar = auxiliar * (-1)
	FinSi
	
	contadorPares = 0
	
	// Caso especial para el numero 0
	Si auxiliar = 0 Entonces
		contadorPares = 1
	Sino
		// Estructura Para con limite de iteraciones
		Para contador = 1 Hasta 10 Con Paso 1 Hacer
			Si auxiliar > 0 Entonces
				ultimoDigito = auxiliar % 10
				Si ultimoDigito % 2 = 0 Entonces
					contadorPares = contadorPares + 1
				FinSi
				auxiliar = TRUNC(auxiliar / 10)
			FinSi
		FinPara
	FinSi
	
	Escribir "El numero posee ", contadorPares, " digito(s) par(es)."
FinProceso