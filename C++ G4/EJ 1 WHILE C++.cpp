#include <iostream>
#include <string>
using namespace std;

int main()
{
    int inicio, fin, numero, contPares;
    contPares = 0;

    cout << "Ingrese el limite inferior del rango: ";
    cin >> inicio;
    cout << "Ingrese el limite superior del rango: ";
    cin >> fin;

    numero = inicio;
    while (numero <= fin)
    {
        if (numero % 2 == 0)
        {
            contPares++;
        }
        numero++;
    }

    cout << "La cantidad de numeros pares es: " << contPares << endl;

    return 0;
}
