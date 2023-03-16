/**
 * 4- Criar um vetor de cinco posições, solicitar cinco números e ao fim, imprimir o valor apresentado na posição três.
*/
#include <iostream>
using namespace std;

int main() {

    const int POSICOES = 5; 

    int vetor[POSICOES] = {};

    //Coletar dados
    cout << "Informe 5 numeros inteiros" << endl;
    for (int i = 0; i < POSICOES; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> vetor[i];
    }

    cout << "Valor na posicao 3 do vetor: [" << vetor[3] << "]" << endl;

    return 0;
}