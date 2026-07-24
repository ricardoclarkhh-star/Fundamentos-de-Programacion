Proceso ContarParesPara
    Definir inicio, final, numeroing, contPares Como Entero
    contPares <- 0
	
    Escribir "Ingrese el limite inferior del rango:"
    Leer inicio
    Escribir "Ingrese el limite superior del rango:"
    Leer final
	
    Para numeroing <- inicio Hasta final Con Paso 1 Hacer
        Si numeroing % 2 == 0 Entonces
            contPares <- contPares + 1
        FinSi
    FinPara
	
    Escribir "La cantidad de numeros pares es: ", contPares
FinProceso