Proceso MultiplosTresFor
	Definir limite, contador, multiploActual Como Entero
	Definir sumaMultiplos, productoMultiplos Como Real
	
	Escribir "Ingrese la cantidad de multiplos de 3 (N): "
	Leer limite
	
	sumaMultiplos = 0
	
	Si limite = 0 Entonces
		productoMultiplos = 0
	Sino
		productoMultiplos = 1
		
		Para contador = 1 Hasta limite Con Paso 1 Hacer
			multiploActual = contador * 3
			sumaMultiplos = sumaMultiplos + multiploActual
			productoMultiplos = productoMultiplos * multiploActual
		FinPara
	FinSi
	
	Escribir "La suma de los primeros ", limite, " multiplos de 3 es: ", sumaMultiplos
	Escribir "El producto de los primeros ", limite, " multiplos de 3 es: ", productoMultiplos
FinProceso