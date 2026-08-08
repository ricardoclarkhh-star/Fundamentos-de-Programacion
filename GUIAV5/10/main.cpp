#include <iostream>

using namespace std;

double convertirSexagesimalARadian(double anguloGrados);
double calcularPotencia(double valorBase, int valorExponente);
double calcularFactorial(int numero);
double realizarDivision(double dividendo, double divisor);
double calcularCoseno(double valorRadianes);

int main() {
    double gradosIngresados;

    cout << "Ingrese un angulo en grados: ";
    cin >> gradosIngresados;

    double anguloRadianes = convertirSexagesimalARadian(gradosIngresados);
    double resultadoCoseno = calcularCoseno(anguloRadianes);

    cout << "Cos(" << gradosIngresados << ") = " << resultadoCoseno << endl;

    return 0;
}

double convertirSexagesimalARadian(double anguloGrados) {
    const double PI = 3.141592653589793;
    return (anguloGrados * PI) / 180.0;
}

double calcularPotencia(double valorBase, int valorExponente) {
    double resultado = 1.0;

    for (int contador = 1; contador <= valorExponente; contador++) {
        resultado = resultado * valorBase;
    }

    return resultado;
}

double calcularFactorial(int numero) {
    if (numero == 0 || numero == 1) {
        return 1.0;
    }

    double productoAcumulado = 1.0;

    for (int contador = 1; contador <= numero; contador++) {
        productoAcumulado = productoAcumulado * contador;
    }

    return productoAcumulado;
}

double realizarDivision(double dividendo, double divisor) {
    if (divisor == 0.0) {
        return 0.0;
    }

    return dividendo / divisor;
}

double calcularCoseno(double valorRadianes) {
    double sumaCoseno = 0.0;
    double factorSigno = 1.0;

    for (int indice = 0; indice < 10; indice++) {
        int exponente = 2 * indice;

        double numerador = calcularPotencia(valorRadianes, exponente);
        double denominador = calcularFactorial(exponente);
        double termino = realizarDivision(numerador, denominador);

        sumaCoseno = sumaCoseno + (factorSigno * termino);

        factorSigno = -factorSigno;
    }

    return sumaCoseno;
}
