#include <iostream>
#include <string>
#include <cmath>
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

    if (auxiliar == 0)
    {
        numeroInvertido = 0;
    }
    else
    {
        do
        {
            ultimoDigito = auxiliar % 10;
            numeroInvertido = (numeroInvertido * 10) + ultimoDigito;
            auxiliar = auxiliar / 10;
        } while (auxiliar > 0);
    }

    // Comprobacion de capicua
    if (abs(numeroIngresado) == numeroInvertido)
    {
        cout << "El numero " << numeroIngresado << " es capicua." << endl;
    }
    else
    {
        cout << "El numero " << numeroIngresado << " NO es capicua." << endl;
    }

    return 0;
}
