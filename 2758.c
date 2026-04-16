/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 2758
Data        : 09/04/2026
Objetivo    : Ler e imprimir numeros com pontos flutuantes.
Aprendizado : Foi aprendido manipular a quantidade de casas depois
da virgula no comando printf.
-------------------------------------------------------------------------- */


#include <stdio.h>

int main()
{
    float A, B;
    double C, D;
    
    scanf("%f %f %lf %lf", &A, &B, &C, &D);
    
    printf("A = %f, B = %f\nC = %lf, D = %lf\n", A, B, C, D);
    printf("A = %.1f, B = %.1f\nC = %.1lf, D = %.1lf\n", A, B, C, D);
    printf("A = %.2f, B = %.2f\nC = %.2lf, D = %.2lf\n", A, B, C, D);
    printf("A = %.3f, B = %.3f\nC = %.3lf, D = %.3lf\n", A, B, C, D);
    printf("A = %.3E, B = %.3E\nC = %.3E, D = %.3E\n", A, B, C, D);
    printf("A = %.f, B = %.f\nC = %.lf, D = %.lf\n", A, B, C, D);
    

    return 0;
}
