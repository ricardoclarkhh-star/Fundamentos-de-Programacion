Proceso CalcularMCMMientras
    Definir numeroA, numeroB, candidato Como Entero
	
    Escribir "Ingrese el primer numero:"
    Leer numeroA
    Escribir "Ingrese el segundo numero:"
    Leer numeroB
	
    Si numeroA > numeroB Entonces
        candidato = numeroA
    SiNo
        candidato = numeroB
    FinSi
	
    Mientras candidato % numeroA <> 0 O candidato % numeroB <> 0 Hacer
        candidato = candidato + 1
    FinMientras
	
    Escribir "El MCM es: ", candidato
FinProceso