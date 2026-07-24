#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numeroA, numeroB, mcm, limite;

    cout << "Ingrese el primer numero: ";
    cin >> numeroA;
    cout << "Ingrese el segundo numero: ";
    cin >> numeroB;

    if (numeroA > numeroB) {
        mcm = numeroA;
    } else {
        mcm = numeroB;
    }

    limite = numeroA * numeroB;

    for (int valor = mcm; valor <= limite; valor++)
    {
        if (valor % numeroA == 0 && valor % numeroB == 0)
        {
            cout << "El MCM es: " << valor << endl;
            break;
        }
    }

    return 0;
}
