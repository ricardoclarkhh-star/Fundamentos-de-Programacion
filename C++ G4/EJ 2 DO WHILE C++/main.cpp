#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numeroA, numeroB, mcm;

    cout << "Ingrese el primer numero: ";
    cin >> numeroA;
    cout << "Ingrese el segundo numero: ";
    cin >> numeroB;

    if (numeroA > numeroB) {
        mcm = numeroA;
    } else {
        mcm = numeroB;
    }

    do
    {
        if (mcm % numeroA != 0 || mcm % numeroB != 0)
        {
            mcm++;
        }
    } while (mcm % numeroA != 0 || mcm % numeroB != 0);

    cout << "El MCM es: " << mcm << endl;

    return 0;
}
