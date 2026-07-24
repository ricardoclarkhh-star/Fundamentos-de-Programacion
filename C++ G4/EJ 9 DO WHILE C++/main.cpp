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
    contador = 1;

    // Estructura repetitiva do while
    if (numeroIngresado == 0)
    {
        factorial = 1.0;
    }
    else
    {
        do
        {
            factorial = factorial * contador;
            contador++;
        } while (contador <= numeroIngresado);
    }

    cout << "El factorial de " << numeroIngresado << " es: " << factorial << endl;

    return 0;
}
