#include <iostream>

using namespace std;

int main()
{
    int sequence_size, valor_1 = 1, valor_2 = 1, valor_3;

    cout << "Digite o tamanho da sequencia de fibonacci: ";
    cin >> sequence_size;

    while (sequence_size < 1)
    {
        cout << "Digite um valor positivo maior que zero: ";
        cin >> sequence_size;
    }

    if (sequence_size >= 1)
        cout << valor_1 << " ";
    if (sequence_size >= 2)
        cout << valor_2 << " ";

    for (int i = 3; i <= sequence_size; i++)
    {
        valor_3 = valor_1 + valor_2;
        cout << valor_3 << " ";
        valor_1 = valor_2;
        valor_2 = valor_3;
    }

    cout << endl;

    return 0;
}
