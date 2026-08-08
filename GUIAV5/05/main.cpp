#include <iostream>

using namespace std;

bool verificarPrimo(int numero);
bool verificarSophieGermain(int numeroBase);

int main() {
    int numeroEvaluado;

    cout << "Ingrese un numero positivo: ";
    cin >> numeroEvaluado;

    if (verificarSophieGermain(numeroEvaluado)) {
        cout << numeroEvaluado << " es un primo de Sophie Germain." << endl;
    } else {
        cout << numeroEvaluado << " NO es un primo de Sophie Germain." << endl;
    }

    cout << endl << "Primos de Sophie Germain menores que 100:" << endl;

    for (int numeroActual = 2; numeroActual < 100; numeroActual++) {
        if (verificarSophieGermain(numeroActual)) {
            cout << numeroActual << " ";
        }
    }
    cout << endl;

    return 0;
}

bool verificarPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    int cantidadDivisores = 0;

    for (int contador = 1; contador <= numero; contador++) {
        if (numero % contador == 0) {
            cantidadDivisores++;
        }
    }

    return cantidadDivisores == 2;
}

bool verificarSophieGermain(int numeroBase) {
    bool baseEsPrima = verificarPrimo(numeroBase);
    bool formulaEsPrima = verificarPrimo(2 * numeroBase + 1);

    return baseEsPrima && formulaEsPrima;
}
