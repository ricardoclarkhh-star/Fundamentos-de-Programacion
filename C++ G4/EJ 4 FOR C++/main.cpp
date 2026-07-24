#include <iostream>
#include <string>
using namespace std;

int main()
{
    int contador = 0;
    double nota = 0.0;
    double sumaNotas = 0.0;
    double promedioGeneral = 0.0;

    sumaNotas = 0.0;

    // Estructura repetitiva for
    for (contador = 1; contador <= 10; contador++)
    {
        cout << "Ingrese el promedio del alumno " << contador << ": ";
        cin >> nota;
        sumaNotas = sumaNotas + nota;
    }

    promedioGeneral = sumaNotas / 10.0;

    cout << "El promedio general del salon es: " << promedioGeneral << endl;

    return 0;
}
