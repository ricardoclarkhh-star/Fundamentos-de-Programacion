Proceso SumaCuadradosCubosDoWhile
	Definir limite, contador, sumaCuadrados, sumaCubos Como Entero
	
	Escribir "Ingrese la cantidad de numeros naturales (N): "
	Leer limite
	
	sumaCuadrados = 0
	sumaCubos = 0
	contador = 1
	
	Repetir
		sumaCuadrados = sumaCuadrados + (contador * contador)
		sumaCubos = sumaCubos + (contador * contador * contador)
		contador = contador + 1
	Hasta Que contador > limite
	
	Escribir "La suma de los cuadrados es: ", sumaCuadrados
	Escribir "La suma de los cubos es: ", sumaCubos
FinProceso