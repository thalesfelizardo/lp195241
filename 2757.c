/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THALES FELIZARDO MAIA
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2757
Data        : 09/04/2026
Objetivo    : Ler e imprimir numeros inteiros na tela.
Aprendizado : Foi aprendido usar espaçamentos ao usar o comando printf.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int A, B, C;
    
    scanf("%d %u %u", &A, &B, &C);
    
    printf("A = %d, B = %u, C = %u\n", A, B, C);
    printf("A = % 10d, B = % 10d, C = % 10d\n", A, B, C);
    printf("A = %010d, B = %010d, C = %010d\n", A, B, C);
    printf("A = %-10d, B = %-10d, C = %-10d\n", A, B, C);
    
    return 0;
}
