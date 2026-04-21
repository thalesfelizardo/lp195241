/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THALES FELIZARDO MAIA
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 14/04/2026
Objetivo    : Ler dois números inteiros e imprimir a soma dos números impares consecutivos entre eles.
Aprendizado : Foi aprendido o uso do laço de repetição 'for' e o uso do comando "%" para saber o resto da divisão.
-------------------------------------------------------------------------- */


#include <stdio.h>

int main(){

    int x, y;
    int i = 0;
    int soma = 0;

    scanf("%d %d", &x, &y);
    
        for(i = y + 1; i < x; i++)
        {
            if (i % 2 != 0) 
            {
                soma += i;
            }
        
        }


    printf("%d\n", soma);

    return 0;
}
