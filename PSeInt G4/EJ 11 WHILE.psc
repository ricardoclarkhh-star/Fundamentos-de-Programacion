Proceso InvertirNumeroWhile
	Definir numeroIngresado, auxiliar, ultimoDigito, numeroInvertido Como Entero
	
	Escribir "Ingrese un numero entero: "
	Leer numeroIngresado
	
	auxiliar = numeroIngresado
	
	// Convertir a positivo para procesar las cifras
	Si auxiliar < 0 Entonces
		auxiliar = auxiliar * (-1)
	FinSi
	
	numeroInvertido = 0
	
	Mientras auxiliar > 0 Hacer
		ultimoDigito = auxiliar % 10
		numeroInvertido = (numeroInvertido * 10) + ultimoDigito
		auxiliar = TRUNC(auxiliar / 10)
	FinMientras
	
	// Restituir signo si el original era negativo
	Si numeroIngresado < 0 Entonces
		numeroInvertido = numeroInvertido * (-1)
	FinSi
	
	Escribir "El numero invertido es: ", numeroInvertido
FinProceso