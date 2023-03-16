/**
 * 3- Elabore um programa de computador que realize o cálculo de notas. Este programa deverá solicitar o nome do aluno e quatro notas, 
 * todo este conjunto deverá estar contido em um laço que confirme se deseja encerrar o programa ou continuar solicitando outros nomes e notas.
 * 
 * Ao final da solicitação do nome e das notas deverá ser impresso o nome do aluno e a sua média, se a nota for  menor que 6 imprimir Reprovado, senão, 
 * se a nota for igual ou maior que 6, imprimir Aprovado.
*/
#include <iostream>
using namespace std; 

int main() {

    const int N_NOTAS = 4;

    string nome;
    float notas[N_NOTAS] = {};
    int resposta = 1;

    do
    {
        float soma = 0;
        string status;

        cout << "##########  Programa para Calculo de media  ##########" << endl;
        cout << "Informe o nome do aluno: ";
        cin >> nome;

        // Coleta notas
        cout << "Informe as 4 notas do aluno: " << endl;
        for (int i = 0; i < N_NOTAS; i ++){
            cout << "Nota " << i + 1 << " : ";
            cin >> notas[i];
            soma += notas[i];
        }

        if (soma / N_NOTAS >= 6) {
            status = "APROVADO!";
        } else {
            status = "REPROVADO!";
        }

        cout << "Aluno: " << nome << " - " << "Media: " << soma / N_NOTAS << endl;
        cout << nome << " esta " << status << endl;

        cout << "\nInforme 1 para CONTINUAR ou 0 para SAIR" << endl;
        cin >> resposta;

        cout << endl;

    } while (resposta != 0);
    
    return 0;
}