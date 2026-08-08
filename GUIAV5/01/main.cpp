#include <iostream>

using namespace std;

bool verificarPrimo(int numero);

int main() {
    int numeroEvaluar;

    cout << "Ingresa un numero: ";
    cin >> numeroEvaluar;

    cout << verificarPrimo(numeroEvaluar) << endl;

    return 0;
}

bool verificarPrimo(int numero) {
    if (numero < 2) {
        return false;
    }

    int cantidadDivisores = 0;

    for (int divisor = 1; divisor <= numero; divisor++) {
        if (numero % divisor == 0) {
            cantidadDivisores++;
        }
    }

    if (cantidadDivisores > 2) {
        return false;
    }

    return true;
}
