/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thales Felizardo Maia
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 19/05/2026
Objetivo    : Ler um valor inteiro N até o fim da entrada e gerar uma matriz N x N,
              preenchendo a diagonal principal com 1, a diagonal secundária com 2
              e os demais elementos com 3.
Aprendizado : Alocacao de memoria dinamica de matriz com o malloc, aritmetica
              de ponteiros para percorrer a matriz, alem do uso do free para liberar
              a memoria da matriz.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;

    while (scanf("%d", &n) != EOF) {
        int *matriz = malloc(n * n * sizeof(int));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                int *valor = matriz + i * n + j;
                
                if (i == j && j == n - 1 - i){
                    *valor = 2;          
                }
                else if (i == j){
                    *valor = 1;   
                }       
                else if (j == n - 1 - i){
                *valor = 2;         
                }
                else{
                    *valor = 3;
                }  
            }
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++){
                printf("%d", *(matriz + i * n + j));
            }
            printf("\n");
        }

        free(matriz);
    }

    return 0;
}
