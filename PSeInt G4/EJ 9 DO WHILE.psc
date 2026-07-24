Proceso FactorialDoWhile
	Definir numeroIngresado, contador Como Entero
	Definir factorial Como Real
	
	Escribir "Ingrese un numero entero no negativo (N): "
	Leer numeroIngresado
	
	factorial = 1
	contador = 1
	
	Si numeroIngresado = 0 Entonces
		factorial = 1
	Sino
		Repetir
			factorial = factorial * contador
			contador = contador + 1
		Hasta Que contador > numeroIngresado
	FinSi
	
	Escribir "El factorial de ", numeroIngresado, " es: ", factorial
FinProceso