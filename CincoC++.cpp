/**
 * 5 - Crie uma matriz bidimensional. Deverá ser solicitado três nomes de alunos e quatro notas, 
 * após solicitação dos nomes e das notas deverá ser impresso os nomes acompanhados da média geral de cada aluno, 
 * deverá ser impresso também o nome do aluno que obteve a maior média e o nome do aluno que obteve a menor média.
*/
#include <iostream>
using namespace std;

int main() {

    const int n_alunos = 3; 
    const int n_notas = 4;

    string nomes[n_alunos];
    float notas[n_alunos][n_notas];
    float medias[n_alunos];

    //Preencher matriz com nome e notas dos alunos
    for (int i = 0; i < n_alunos; i++) {
        cout << "Informe o NOME do aluno " << i + 1 << ": ";
        cin >> nomes[i];

        float soma_notas = 0;
        for (int j = 0; j < n_notas; j++) {
            cout << "Informe a NOTA " << j + 1 << " do aluno " << i + 1 << ": ";
            cin >> notas[i][j];
            soma_notas += notas[i][j];
        }

        medias[i] = soma_notas / 4;

        cout << endl;
    }

    float maior_media = 0;
    float menor_media = medias[0];
    string nome_maior_media, nome_menor_media;

    // Achar a mior e menor media
    for (int i = 0; i < n_alunos; i++) {
        if (medias[i] > maior_media) {
            maior_media = medias[i];
            nome_maior_media = nomes[i];
        }

        if (medias[i] <= menor_media) {
            menor_media = medias[i];
            nome_menor_media = nomes[i];
        }
    }

    //Imprimir nome dos alunos acompanhado das suas respectivas nedias

    for (int i = 0; i < n_alunos; i ++) {
        cout << "Nome: " << nomes[i] << " - " <<"Media: " << medias[i] << endl;
    }

    //Imprimir nome do aluno com a mior medai e a do aluno com menor media
    cout << "Aluno com MAIOR media: " << nome_maior_media << endl;
    cout << "Aluno com MENOR media: " << nome_menor_media << endl;

    return 0;
}
