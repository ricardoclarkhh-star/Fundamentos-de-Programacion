#include <iostream>
#include <string>
using namespace std;

int main()
{
    int limite = 0;
    int contador = 0;
    int sumaCuadrados = 0;
    int sumaCubos = 0;

    cout << "Ingrese la cantidad de numeros naturales (N): ";
    cin >> limite;

    sumaCuadrados = 0;
    sumaCubos = 0;

    for (contador = 1; contador <= limite; contador++)
    {
        sumaCuadrados = sumaCuadrados + (contador * contador);
        sumaCubos = sumaCubos + (contador * contador * contador);
    }

    cout << "La suma de los cuadrados es: " << sumaCuadrados << endl;
    cout << "La suma de los cubos es: " << sumaCubos << endl;

    return 0;
}
