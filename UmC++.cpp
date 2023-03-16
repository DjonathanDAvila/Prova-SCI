/**
 * 1 - Solicitar a inserção de 5 números, ao final, imprimir os números pares, números ímpares e a média geral desses números.
*/
#include <iostream>
using namespace std; 

int main() {
    const int N = 5;
    int numero[N] = {};
    float soma = 0;
    int par = 0;
    int impar = 0;

    // Coletar dados de entrada
    cout << "Informe 5 numeros inteiros" << endl;
    for (int i = 0; i < N; i ++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numero[i];
        soma += numero[i];
    }

    // Imprimir numeros pares
    cout << "Lista dos numeros pares: [ ";
    for (int i = 0; i < N; i++) {
        if (numero[i] % 2 == 0) {
            cout << numero[i] << " ";
        }
    }
    cout << "]" << endl;

    // Imprimir numeros impares
    cout << "Lista dos numeros impares: [ ";
    for (int i = 0; i < N; i++) {
        if (numero[i] % 2 != 0) {
            cout << numero[i] << " ";
        }
    }
    cout << "]" << endl;

    // Imprimir media geral
    cout << "A media geral da lista e: " << soma / N;

    return 0;
}