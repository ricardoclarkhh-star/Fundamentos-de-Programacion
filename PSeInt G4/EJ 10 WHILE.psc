Proceso MultiplosTresWhile
	Definir limite, contador, multiploActual Como Entero
	Definir sumaMultiplos, productoMultiplos Como Real
	
	Escribir "Ingrese la cantidad de multiplos de 3 (N): "
	Leer limite
	
	sumaMultiplos = 0
	productoMultiplos = 1
	contador = 1
	
	// Estructura Mientras
	Mientras contador <= limite Hacer
		multiploActual = contador * 3
		sumaMultiplos = sumaMultiplos + multiploActual
		productoMultiplos = productoMultiplos * multiploActual
		contador = contador + 1
	FinMientras
	
	Escribir "La suma de los primeros ", limite, " multiplos de 3 es: ", sumaMultiplos
	Escribir "El producto de los primeros ", limite, " multiplos de 3 es: ", productoMultiplos
FinProceso