Proceso SumaCifrasFor
	Definir numeroIngresado, auxiliar, ultimaCifra, sumaCifras, contador Como Entero
	
	Escribir "Ingrese un numero entero: "
	Leer numeroIngresado
	
	auxiliar = numeroIngresado
	
	// Convertir a positivo si es negativo
	Si auxiliar < 0 Entonces
		auxiliar = auxiliar * (-1)
	FinSi
	
	sumaCifras = 0
	
	// Estructura Para con limite de iteraciones para descomponer las cifras
	Para contador = 1 Hasta 10 Con Paso 1 Hacer
		Si auxiliar > 0 Entonces
			ultimaCifra = auxiliar % 10
			sumaCifras = sumaCifras + ultimaCifra
			auxiliar = TRUNC(auxiliar / 10)
		FinSi
	FinPara
	
	Escribir "La suma de las cifras es: ", sumaCifras
FinProceso