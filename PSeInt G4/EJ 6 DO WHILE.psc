Proceso SumaCifrasDoWhile
	Definir numeroIngresado, auxiliar, ultimaCifra, sumaCifras Como Entero
	
	Escribir "Ingrese un numero entero: "
	Leer numeroIngresado
	
	auxiliar = numeroIngresado
	
	// Convertir a positivo si es negativo
	Si auxiliar < 0 Entonces
		auxiliar = auxiliar * (-1)
	FinSi
	
	sumaCifras = 0
	
	Si auxiliar = 0 Entonces
		sumaCifras = 0
	Sino
		Repetir
			ultimaCifra = auxiliar % 10
			sumaCifras = sumaCifras + ultimaCifra
			auxiliar = TRUNC(auxiliar / 10)
		Hasta Que auxiliar = 0
	FinSi
	
	Escribir "La suma de las cifras es: ", sumaCifras
FinProceso