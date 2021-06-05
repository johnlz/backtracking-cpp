#include <iostream>
using namespace std;

// Função para encontrar todas as permutações de um determinada string str[i..n-1]

void permutations(string str, int i, int n)
{
    if (i == n - 1)
    {
        cout << str << endl;
        return;
    }

    // processar cada caractere da string restante
    for (int j = i; j < n; j++)
    {
        // trocar o caractere no índice i com o caractere atual
        swap(str[i], str[j]);        // STL swap() used

        // recorre para a string [i+1, n-1]
        permutations(str, i + 1, n);

        // backtrack (restaure a string ao seu estado original)
        swap(str[i], str[j]);
    }
}

// Encontre todas as permutações de uma string
int main()
{
    string str = "ABC";

    permutations(str, 0, str.length());

    return 0;
}
