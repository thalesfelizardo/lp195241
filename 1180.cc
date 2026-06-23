/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thales Felizardo Maia
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 22/06/2026
Objetivo    : Imprimir o menor de um vetor e sua posicao 
Aprendizado : linguagem c++
-------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int vetor[n];

    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    int aux = vetor[0];
    int pos = 0;

    for (int i = 1; i < n; i++) {
        if (vetor[i] < aux) {
            aux = vetor[i];
            pos = i;
        }
    }

    cout << "Menor valor: " << aux << endl;
    cout << "Posicao: " << pos << endl;

    return 0;
}
