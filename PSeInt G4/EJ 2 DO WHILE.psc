Proceso CalcularMCMRepetir
    Definir numeroA, numeroB, mcm Como Entero
	
    Escribir "Ingrese el primer numero:"
    Leer numeroA
    Escribir "Ingrese el segundo numero:"
    Leer numeroB
	
    Si numeroA > numeroB Entonces
        mcm = numeroA
    SiNo
        mcm = numeroB
    FinSi
	
    Repetir
        Si mcm % numeroA <> 0 O mcm % numeroB <> 0 Entonces
            mcm = mcm + 1
        FinSi
    Hasta Que mcm % numeroA == 0 Y mcm % numeroB == 0
	
    Escribir "El MCM es: ", mcm
FinProceso