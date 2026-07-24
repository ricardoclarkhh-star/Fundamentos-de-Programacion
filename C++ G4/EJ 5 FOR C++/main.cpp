#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numeroIngresado = 0;
    int auxiliar = 0;
    int contadorCifras = 0;

    cout << "Ingrese un numero entero: ";
    cin >> numeroIngresado;

    auxiliar = numeroIngresado;

    // Convertir a positivo si es negativo
    if (auxiliar < 0)
    {
        auxiliar = auxiliar * (-1);
    }

    contadorCifras = 0;

    // Estructura repetitiva for
    if (auxiliar == 0)
    {
        contadorCifras = 1;
    }
    else
    {
        for (auxiliar = auxiliar; auxiliar > 0; auxiliar = auxiliar / 10)
        {
            contadorCifras++;
        }
    }

    cout << "El numero posee " << contadorCifras << " cifra(s)." << endl;

    return 0;
}
