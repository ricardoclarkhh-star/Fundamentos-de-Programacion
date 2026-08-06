#include <iostream>
using namespace std;

bool detPrimo(int n)
{
    int contDiv = 0;
    if (n <= 1)
        return false;

    for (int i = 1; i <= n; i++){
        if (n % 1 == 0)
            contDiv++;

    if (contDiv > 2)
        return false;

    return true;
    }
}

int main()
{

    return 0;
}
