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
    contador = 1;

    do
    {
        sumaCuadrados = sumaCuadrados + (contador * contador);
        sumaCubos = sumaCubos + (contador * contador * contador);
        contador++;
    } while (contador <= limite);

    cout << "La suma de los cuadrados es: " << sumaCuadrados << endl;
    cout << "La suma de los cubos es: " << sumaCubos << endl;

    return 0;
}
