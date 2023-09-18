#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
    int number;
    string word = "", aux = "";

    cout << "Digite a expressao: ";
    cin >> number;
    if (number)
    {
        word = to_string(number);
    }
    aux = word;
    reverse(aux.begin(), aux.end());

    cout << word << " - " << aux << endl;

    if (word == aux)
    {
        cout << "Eh Palíndromo" << endl;
    }
    else
    {
        cout << "Nao eh Palíndromo" << endl;
    }

    return 0;
}