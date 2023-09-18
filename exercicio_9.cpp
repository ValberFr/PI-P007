#include <iostream>

using namespace std;

int main()
{

    int number, sum_dividers = 0;

    cout << "Digite o numero: ";
    cin >> number;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum_dividers += i;
        }
    }

    if (sum_dividers == number)
    {
        cout << number << " eh um numero perfeito!" << endl;
    }
    else
    {
        cout << number << " nao eh um numero perfeito" << endl;
    }

    return 0;
}