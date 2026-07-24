Proceso MultiplosTresDoWhile
	Definir limite, contador, multiploActual Como Entero
	Definir sumaMultiplos, productoMultiplos Como Real
	
	Escribir "Ingrese la cantidad de multiplos de 3 (N): "
	Leer limite
	
	sumaMultiplos = 0
	productoMultiplos = 1
	contador = 1
	
	Si limite = 0 Entonces
		productoMultiplos = 0
	Sino
		Repetir
			multiploActual = contador * 3
			sumaMultiplos = sumaMultiplos + multiploActual
			productoMultiplos = productoMultiplos * multiploActual
			contador = contador + 1
		Hasta Que contador > limite
	FinSi
	
	Escribir "La suma de los primeros ", limite, " multiplos de 3 es: ", sumaMultiplos
	Escribir "El producto de los primeros ", limite, " multiplos de 3 es: ", productoMultiplos
FinProceso