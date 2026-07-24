#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numeroIngresado = 0;
    int auxiliar = 0;
    int ultimoDigito = 0;
    int numeroInvertido = 0;

    cout << "Ingrese un numero entero: ";
    cin >> numeroIngresado;

    auxiliar = numeroIngresado;

    // Convertir a positivo para procesar las cifras
    if (auxiliar < 0)
    {
        auxiliar = auxiliar * (-1);
    }

    numeroInvertido = 0;

    // Estructura repetitiva for
    for (auxiliar = auxiliar; auxiliar > 0; auxiliar = auxiliar / 10)
    {
        ultimoDigito = auxiliar % 10;
        numeroInvertido = (numeroInvertido * 10) + ultimoDigito;
    }

    // Restituir signo si el original era negativo
    if (numeroIngresado < 0)
    {
        numeroInvertido = numeroInvertido * (-1);
    }

    cout << "El numero invertido es: " << numeroInvertido << endl;

    return 0;
}
