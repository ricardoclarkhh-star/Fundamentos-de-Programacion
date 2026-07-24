Proceso FactorialWhile
	Definir numeroIngresado, contador Como Entero
	Definir factorial Como Real
	
	Escribir "Ingrese un numero entero no negativo (N): "
	Leer numeroIngresado
	
	factorial = 1
	contador = 1
	
	Mientras contador <= numeroIngresado Hacer
		factorial = factorial * contador
		contador = contador + 1
	FinMientras
	
	Escribir "El factorial de ", numeroIngresado, " es: ", factorial
FinProceso