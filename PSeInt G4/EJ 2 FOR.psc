Proceso CalcularMCMPara
    Definir numeroA, numeroB, mcm, limite Como Entero
    Definir encontrado Como Logico
	
    Escribir "Ingrese el primer numero:"
    Leer numeroA
    Escribir "Ingrese el segundo numero:"
    Leer numeroB
	
    Si numeroA > numeroB Entonces
        mcm = numeroA
    SiNo
        mcm = numeroB
    FinSi
	
    limite = numeroA * numeroB
    encontrado = Falso
	
    Para mcm = mcm Hasta limite Con Paso 1 Hacer
        Si NO encontrado Y mcm % numeroA == 0 Y mcm % numeroB == 0 Entonces
            Escribir "El MCM es: ", mcm
            encontrado = Verdadero
        FinSi
    FinPara
FinProceso