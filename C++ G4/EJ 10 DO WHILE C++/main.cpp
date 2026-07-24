#include <iostream>
#include <string>
using namespace std;

int main()
{
    int limite = 0;
    int contador = 0;
    int multiploActual = 0;
    double sumaMultiplos = 0.0;
    double productoMultiplos = 1.0;

    cout << "Ingrese la cantidad de multiplos de 3 (N): ";
    cin >> limite;

    sumaMultiplos = 0.0;
    productoMultiplos = 1.0;
    contador = 1;

    // Estructura repetitiva do while
    if (limite == 0)
    {
        productoMultiplos = 0.0;
    }
    else
    {
        do
        {
            multiploActual = contador * 3;
            sumaMultiplos = sumaMultiplos + multiploActual;
            productoMultiplos = productoMultiplos * multiploActual;
            contador++;
        } while (contador <= limite);
    }

    cout << "La suma de los primeros " << limite << " multiplos de 3 es: " << sumaMultiplos << endl;
    cout << "El producto de los primeros " << limite << " multiplos de 3 es: " << productoMultiplos << endl;

    return 0;
}
