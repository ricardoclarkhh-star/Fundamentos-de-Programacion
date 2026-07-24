Proceso NumeroCapicuaDoWhile
	Definir numeroIngresado, auxiliar, ultimoDigito, numeroInvertido Como Entero
	
	Escribir "Ingrese un numero entero: "
	Leer numeroIngresado
	
	auxiliar = numeroIngresado
	
	// Convertir a positivo para procesar las cifras si es negativo
	Si auxiliar < 0 Entonces
		auxiliar = auxiliar * (-1)
	FinSi
	
	numeroInvertido = 0
	
	Si auxiliar = 0 Entonces
		numeroInvertido = 0
	Sino
		Repetir
			ultimoDigito = auxiliar % 10
			numeroInvertido = (numeroInvertido * 10) + ultimoDigito
			auxiliar = TRUNC(auxiliar / 10)
		Hasta Que auxiliar = 0
	FinSi
	
	// Verificar si el valor absoluto original es igual al invertido
	Si ABS(numeroIngresado) = numeroInvertido Entonces
		Escribir "El numero ", numeroIngresado, " es capicua."
	Sino
		Escribir "El numero ", numeroIngresado, " NO es capicua."
	FinSi
FinProceso