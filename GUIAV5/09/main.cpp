#include <iostream>
#include <cmath>

using namespace std;

void calcularAproximacionPi();

int main() {
    calcularAproximacionPi();

    return 0;
}

void calcularAproximacionPi() {
    double factorSigno = 1.0;
    double denominadorActual = 1.0;

    double valorPi = 0.0;
    double valorPiPrevio = 0.0;
    double toleranciaError = 1e-8;

    do {
        valorPiPrevio = valorPi;

        valorPi = valorPi + (4.0 / (denominadorActual * factorSigno));

        factorSigno = -factorSigno;
        denominadorActual = denominadorActual + 2.0;

    } while (abs(valorPi - valorPiPrevio) >= toleranciaError);

    cout << "PI aproximado = " << valorPi << endl;
}
