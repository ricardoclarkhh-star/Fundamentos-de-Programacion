#include <iostream>
#include <cmath>
using namespace std;

double obtenerRaizNewton(double radicando);

int main() {
    double valorBase;

    cout << "Ingrese un numero: ";
    cin >> valorBase;

    double resultadoRaiz = obtenerRaizNewton(valorBase);

    if (resultadoRaiz != -1.0) {
        cout << "Raiz aproximada: " << resultadoRaiz << endl;
    }

    return 0;
}

double obtenerRaizNewton(double radicando) {
    if (radicando < 0) {
        cout << "Error: no existe la raiz cuadrada de un numero negativo." << endl;
        return -1.0;
    }

    if (radicando == 0) {
        return 0.0;
    }

    double estimacion = radicando;
    double tolerancia = 0.00001;

    double diferencia;

    do {
        estimacion = (estimacion + (radicando / estimacion)) / 2.0;
        diferencia = estimacion * estimacion - radicando;
        if (diferencia < 0) {
            diferencia = -diferencia;
        }
    } while (diferencia > tolerancia);

    return estimacion;
}
