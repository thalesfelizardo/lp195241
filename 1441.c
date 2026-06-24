/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THALES FELIZARDO MAIA
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 22/06/2026 
Objetivo    : Realizar atraves da recursao uma sequencia e imprimir seu maior numero
Aprendizado : aprofudnamento em recursao
-------------------------------------------------------------------------- */

#include <stdio.h>

int granizo(int num, int maior){
    
    if (maior < num)
    {
        maior = num;
    }

    if (num == 1)
    {
        return maior;
    }
    
    
    if (num % 2 == 0)
    {
        return granizo(num/2, maior);
    }
    
    else{
        return granizo(3 * num + 1, maior);
    }
    
}

int main(){

    int index;

    scanf("%d", &index);
    
    while (index != 0)
    {
        
        printf("%d\n", granizo(index, index));

        scanf("%d", &index);
    }
    

    return 0;
}
