/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thales Felizardo Maia
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
Data        : 28/05/2026
Objetivo    : Separar 15 números inteiros em vetores de pares e ímpares,
imprimindo cada vetor sempre que atingir 5 elementos.
Aprendizado : 
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

    int valor, par[5], impar[5];
    int vetp = 0, veti = 0;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &valor);

        if (valor % 2 == 0) {
            par[vetp] = valor;
            vetp++;

            if (vetp == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                vetp = 0;
            }
        } else {
            impar[veti] = valor;
            veti++;

            if (veti == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                veti = 0;
            }
        }
    }

    for (size_t j = 0; j < veti; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }

    for (size_t j = 0; j < vetp; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}
