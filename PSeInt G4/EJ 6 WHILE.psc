Proceso SumaCifrasWhile
	Definir numeroIngresado, auxiliar, ultimaCifra, sumaCifras Como Entero
	
	Escribir "Ingrese un numero entero: "
	Leer numeroIngresado
	
	auxiliar = numeroIngresado
	
	// Convertir a positivo si es negativo
	Si auxiliar < 0 Entonces
		auxiliar = auxiliar * (-1)
	FinSi
	
	sumaCifras = 0
	
	Mientras auxiliar > 0 Hacer
		ultimaCifra = auxiliar % 10
		sumaCifras = sumaCifras + ultimaCifra
		auxiliar = TRUNC(auxiliar / 10)
	FinMientras
	
	Escribir "La suma de las cifras es: ", sumaCifras
FinProceso