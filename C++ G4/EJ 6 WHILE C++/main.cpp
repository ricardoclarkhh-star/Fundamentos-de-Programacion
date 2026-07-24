#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numeroIngresado = 0;
    int auxiliar = 0;
    int ultimaCifra = 0;
    int sumaCifras = 0;

    cout << "Ingrese un numero entero: ";
    cin >> numeroIngresado;

    auxiliar = numeroIngresado;

    // Convertir a positivo si es negativo
    if (auxiliar < 0)
    {
        auxiliar = auxiliar * (-1);
    }

    sumaCifras = 0;

    // Estructura repetitiva while
    while (auxiliar > 0)
    {
        ultimaCifra = auxiliar % 10;
        sumaCifras = sumaCifras + ultimaCifra;
        auxiliar = auxiliar / 10;
    }

    cout << "La suma de las cifras es: " << sumaCifras << endl;

    return 0;
}
