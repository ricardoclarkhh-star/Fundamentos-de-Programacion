#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numeroIngresado = 0;
    int contador = 0;
    double factorial = 1.0;

    cout << "Ingrese un numero entero no negativo (N): ";
    cin >> numeroIngresado;

    factorial = 1.0;

    // Estructura repetitiva for
    for (contador = 1; contador <= numeroIngresado; contador++)
    {
        factorial = factorial * contador;
    }

    cout << "El factorial de " << numeroIngresado << " es: " << factorial << endl;

    return 0;
}
