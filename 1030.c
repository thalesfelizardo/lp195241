/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THALES FELIZARDO MAIA
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 22/04/2026
Objetivo    : Calcular qual pessoa sobrevive no problema de Josephus
Aprendizado : somente revisao
-------------------------------------------------------------------------- */


#include <stdio.h>

int main() {
    int NC;
    scanf("%d", &NC);

    for (int caso = 1; caso <= NC; caso++) {
        int n, k;
        scanf("%d %d", &n, &k);

        int sobrevivente = 0;

        for (int i = 1; i <= n; i++) {
            sobrevivente = (sobrevivente + k) % i;
        }

        printf("Case %d: %d\n", caso, sobrevivente + 1);
    }

    return 0;
}
