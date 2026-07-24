#include <iostream>
#include <string>
using namespace std;

int main()
{
    int contador = 1;
    double nota = 0.0;
    double sumaNotas = 0.0;
    double promedioGeneral = 0.0;

    sumaNotas = 0.0;
    contador = 1;

    // Estructura repetitiva while
    while (contador <= 10)
    {
        cout << "Ingrese el promedio del alumno " << contador << ": ";
        cin >> nota;
        sumaNotas = sumaNotas + nota;
        contador++;
    }

    promedioGeneral = sumaNotas / 10.0;

    cout << "El promedio general del salon es: " << promedioGeneral << endl;

    return 0;
}
