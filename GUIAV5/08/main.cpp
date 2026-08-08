#include <iostream>

using namespace std;

int obtenerFactorial(int numero);
int realizarDivision(int dividendo, int divisor);
int obtenerCombinatorio(int totalElementos, int seleccion);

int main() {
    int valorN, valorR;

    cout << "Ingrese n: ";
    cin >> valorN;

    cout << "Ingrese r: ";
    cin >> valorR;

    if (valorN < 0 || valorR < 0) {
        cout << "Error: Los valores de n y r deben ser mayores o iguales a 0." << endl;
    } else if (valorR > valorN) {
        cout << "Error: El valor de r no puede ser mayor que n." << endl;
    } else {
        int resultadoCombinatorio = obtenerCombinatorio(valorN, valorR);
        cout << "El numero combinatorio es: " << resultadoCombinatorio << endl;
    }

    return 0;
}

int obtenerFactorial(int numero) {
    if (numero < 0) {
        return -1;
    }

    int productoAcumulado = 1;

    for (int contador = 1; contador <= numero; contador++) {
        productoAcumulado = productoAcumulado * contador;
    }

    return productoAcumulado;
}

int realizarDivision(int dividendo, int divisor) {
    if (divisor == 0) {
        return 0;
    }

    return dividendo / divisor;
}

int obtenerCombinatorio(int totalElementos, int seleccion) {
    int factorialN = obtenerFactorial(totalElementos);
    int factorialR = obtenerFactorial(seleccion);
    int factorialDiferencia = obtenerFactorial(totalElementos - seleccion);

    int denominador = factorialR * factorialDiferencia;

    return realizarDivision(factorialN, denominador);
}
