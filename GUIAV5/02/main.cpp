#include <iostream>

using namespace std;

int calcularFactorial(int limiteNumero);

int main() {
    int numeroEntrada;

    cout << "Ingrese un numero: ";
    cin >> numeroEntrada;

    int valorFactorial = calcularFactorial(numeroEntrada);

    if (valorFactorial != -1) {
        cout << "El factorial es: " << valorFactorial << endl;
    }

    return 0;
}

int calcularFactorial(int limiteNumero) {
    if (limiteNumero < 0) {
        cout << "Error: El factorial no esta definido para numeros negativos." << endl;
        return -1;
    }

    int acumulador = 1;

    for (int contador = 1; contador <= limiteNumero; contador++) {
        acumulador = acumulador * contador;
    }

    return acumulador;
}
