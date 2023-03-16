/**
 * 2 -  Solicitar 5 números, ao fim, imprimir o número maior e o número menor.
*/
#include <iostream>
using namespace std;

int main() {
    const int N = 5; 
    int numero[N] = {};

    //Coletar dados de entrada
    cout << "Informe 5 numeros inteiros" << endl;
    for(int i = 0; i < N; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numero[i];
    }

    int maior = 0;
    int menor = numero[0];

    //Procurar maior e menor numero
    for (int i = 0; i < N; i++) {
        if (numero[i] > maior) {
            maior = numero[i];
        }

        if (numero[i] <= menor) {
            menor = numero[i];
        }
    }

    // Imprimir maior e emenor numero
    cout << "O MAIOR numero da lista: " << maior << endl;
    cout << "O MENOR numero da lista: " << menor << endl;

    return 0;
}