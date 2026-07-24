Proceso FactorialFor
	Definir numeroIngresado, contador Como Entero
	Definir factorial Como Real
	
	Escribir "Ingrese un numero entero no negativo (N): "
	Leer numeroIngresado
	
	factorial = 1
	
	Para contador = 1 Hasta numeroIngresado Con Paso 1 Hacer
		factorial = factorial * contador
	FinPara
	
	Escribir "El factorial de ", numeroIngresado, " es: ", factorial
FinProceso