/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THALES FELIZARDO MAIA
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 22/06/2026
Objetivo    : imprimir quantos kg de graos foram coletados de acordo com as casas do tabuleiro
Aprendizado : uso do unsigned long long 
-------------------------------------------------------------------------- */


#include <stdio.h>

unsigned long long graos(int casa) {

    if (casa == 1) {
        return 1;
    }

    return 2 * graos(casa - 1) + 1;
}

int main() {

    int casos;

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++) {

        int casa;
        scanf("%d", &casa);

        printf("%llu kg\n", graos(casa)/12000);
    }

    return 0;
}
