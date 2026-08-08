#include <iostream>

using namespace std;

bool comprobarPrimo(int numero);
bool evaluarGemelos(int primerValor, int segundoValor);

int main() {
    int numeroBase;

    cout << "Ingresa el primer numero: " << endl;
    cin >> numeroBase;

    if (evaluarGemelos(numeroBase, numeroBase + 2)) {
        cout << numeroBase << " y " << numeroBase + 2 << " son primos gemelos." << endl;
    } else {
        cout << numeroBase << " y " << numeroBase + 2 << " NO son primos gemelos." << endl;
    }

    cout << "Primos gemelos menores a 100" << endl;

    for (int contador = 2; contador < 98; contador++) {
        if (evaluarGemelos(contador, contador + 2)) {
            cout << contador << " , " << contador + 2 << endl;
        }
    }

    return 0;
}

bool comprobarPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    int totalDivisores = 0;

    for (int divisor = 1; divisor <= numero; divisor++) {
        if (numero % divisor == 0) {
            totalDivisores++;
        }
    }

    return totalDivisores == 2;
}

bool evaluarGemelos(int primerValor, int segundoValor) {
    if (!comprobarPrimo(primerValor) || !comprobarPrimo(segundoValor)) {
        return false;
    }

    int diferencia = segundoValor - primerValor;

    if (diferencia < 0) {
        diferencia = -diferencia;
    }

    return diferencia == 2;
}
