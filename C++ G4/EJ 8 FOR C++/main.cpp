#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numeroIngresado = 0;
    int auxiliar = 0;
    int ultimoDigito = 0;
    int contadorPares = 0;

    cout << "Ingrese un numero entero: ";
    cin >> numeroIngresado;

    auxiliar = numeroIngresado;

    // Convertir a positivo si es negativo
    if (auxiliar < 0)
    {
        auxiliar = auxiliar * (-1);
    }

    contadorPares = 0;

    if (auxiliar == 0)
    {
        contadorPares = 1;
    }
    else
    {
        for (auxiliar = auxiliar; auxiliar > 0; auxiliar = auxiliar / 10)
        {
            ultimoDigito = auxiliar % 10;
            if (ultimoDigito % 2 == 0)
            {
                contadorPares++;
            }
        }
    }

    cout << "El numero posee " << contadorPares << " digito(s) par(es)." << endl;

    return 0;
}
