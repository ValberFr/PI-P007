#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int number, aux, digit, sum = 0, count = 0;

    cout << "Informe um número inteiro: ";
    cin >> number;

    aux = number;

    while (aux != 0)
    {
        aux /= 10;
        count++;
    }

    aux = number;
    while (aux != 0)
    {
        digit = aux % 10;
        sum += pow(digit, count);
        aux /= 10;
    }

    if (sum == number)
    {
        cout << number << " eh um numero Armstrong" << endl;
    }
    else
    {
        cout << number << " nao eh um numero Armstrong" << endl;
    }

    return 0;
}