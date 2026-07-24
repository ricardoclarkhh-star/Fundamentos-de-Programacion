Proceso InvertirNumeroFor
	Definir numeroIngresado, auxiliar, ultimoDigito, numeroInvertido, contador Como Entero
	
	Escribir "Ingrese un numero entero: "
	Leer numeroIngresado
	
	auxiliar = numeroIngresado
	
	// Convertir a positivo para procesar las cifras
	Si auxiliar < 0 Entonces
		auxiliar = auxiliar * (-1)
	FinSi
	
	numeroInvertido = 0
	
	// Estructura Para con limite de iteraciones
	Para contador = 1 Hasta 10 Con Paso 1 Hacer
		Si auxiliar > 0 Entonces
			ultimoDigito = auxiliar % 10
			numeroInvertido = (numeroInvertido * 10) + ultimoDigito
			auxiliar = TRUNC(auxiliar / 10)
		FinSi
	FinPara
	
	// Restituir signo si el original era negativo
	Si numeroIngresado < 0 Entonces
		numeroInvertido = numeroInvertido * (-1)
	FinSi
	
	Escribir "El numero invertido es: ", numeroInvertido
FinProceso