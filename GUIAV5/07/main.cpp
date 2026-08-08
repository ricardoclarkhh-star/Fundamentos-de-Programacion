#include <iostream>

using namespace std;

void mostrarYContarPares(int limiteInicial, int limiteFinal);

int main() {
    int limiteInicial, limiteFinal;

    cout << "Ingrese un numero: ";
    cin >> limiteInicial;
    cout << "Ingrese otro numero: ";
    cin >> limiteFinal;

    if (limiteInicial > limiteFinal) {
        int auxiliar = limiteInicial;
        limiteInicial = limiteFinal;
        limiteFinal = auxiliar;
    }

    mostrarYContarPares(limiteInicial, limiteFinal);

    return 0;
}

void mostrarYContarPares(int limiteInicial, int limiteFinal) {
    int contadorPares = 0;

    for (int numeroActual = limiteInicial; numeroActual <= limiteFinal; numeroActual++) {
        if (numeroActual % 2 == 0) {
            contadorPares++;
            cout << numeroActual << endl;
        }
    }

    cout << "La cantidad de numeros pares en el rango de a y b es: " << contadorPares << endl;
}
