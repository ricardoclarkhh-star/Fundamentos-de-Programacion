#include <iostream>

using namespace std;

void evaluarYMostrarPrimo(int numero);

int main() {
    int numeroEvaluado;

    cout << "Ingrese un numero a validar: " << endl;
    cin >> numeroEvaluado;

    evaluarYMostrarPrimo(numeroEvaluado);

    return 0;
}

void evaluarYMostrarPrimo(int numero) {
    int contadorDivisores = 0;

    for (int contador = 1; contador <= numero; contador++) {
        if (numero % contador == 0) {
            contadorDivisores++;
            cout << "Divisor #" << contadorDivisores << ": " << contador << endl;
        }
    }

    if (contadorDivisores == 2) {
        cout << "Es primo" << endl;
    } else {
        cout << "No es primo" << endl;
    }
}
