Proceso ContarPares
    Definir li, ls, numero, contador Como Entero
    
    contador = 0
    
    Escribir "Ingrese el limite inferior del rango:"
    Leer li
    
    Escribir "Ingrese el limite superior del rango:"
    Leer ls
    
    numero = li
    
    Mientras numero <= ls Hacer
        Si numero MOD 2 = 0 Entonces
            contador <- contador + 1
        FinSi
        numero = numero + 1
    FinMientras
    
    Escribir "La cantidad de numeros pares en el rango es: ", contador
    
FinProceso