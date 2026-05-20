/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thales Felizardo Maia
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 19/05/2026
Objetivo    : Ler um valor inteiro N até o fim da entrada e gerar uma matriz N x N,
              preenchendo a diagonal principal com 1, a diagonal secundária com 2
              e os demais elementos com 3.
Aprendizado : Foi aprendido como trabalhar com matriz quadrada em C, utilizando
              laços de repetição para percorrer linhas e colunas.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){

    int n;
    int i, j;

    while (scanf("%d", &n) != EOF) {

    int matriz[n][n];
    int count = 0;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                matriz[i][j] = 3;
                matriz[i][count] = 1;
                matriz[i][n - 1 - count] = 2;
            }           
            count++;
        }
        
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d", matriz[i][j]);
            }           
            printf("\n");
        }
        
    }
    
    return 0;
}
