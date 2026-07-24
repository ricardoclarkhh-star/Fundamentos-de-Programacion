Proceso ContarParesRepetir
    Definir inicio, final, numeroing, contPares Como Entero
    contPares = 0
	
    Escribir "Ingrese el limite inferior del rango:"
    Leer inicio
    Escribir "Ingrese el limite superior del rango:"
    Leer final
	
    numeroing = inicio
    Repetir
        Si numeroing % 2 == 0 Entonces
            contPares <- contPares + 1
        FinSi
        numeroing = numeroing + 1
    Hasta Que numeroing > final
	
    Escribir "La cantidad de numeros pares es: ", contPares
FinProceso