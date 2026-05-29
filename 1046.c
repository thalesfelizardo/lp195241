/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thales Felizardo Maia
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 28/04/2026
Objetivo    : Calcular a duracao de um jogo.
Aprendizado : uso de funcoes.
-------------------------------------------------------------------------- */


#include <stdio.h>

int calcularDuracao(int inicio, int fim);

int main(){

    int inicio, fim;

    scanf("%d %d", &inicio, &fim);

    printf("O JOGO DUROU %d HORA(S)\n", calcularDuracao(inicio, fim));

    return 0;
}

int calcularDuracao(int inicio, int fim){

    int duracao;

    if (fim == inicio)
    {
        return 24;
    }
    else if (fim>inicio)
    {
        return fim - inicio;
    }
    else{
        return 24 - inicio + fim;
    }

}
