/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THALES FELIZARDO MAIA
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 20/04/2026
Objetivo    : LER E PERCORRER UM ARRAY E PRINTAR O MAIOR VALOR E SUA POSICAO
Aprendizado : PERCORRER UM VETOR USANDO FOR E USO DE UMA AUXILIAR PARA ARMAZENAR 
O VALOR ARMAZENADO EM DETERMINADA POSICAO.
-------------------------------------------------------------------------- */

#include <stdio.h>
#define VET 4

int main()
{
    int vetor[VET];
    int index = 0;
    int i;
    int maior;
    
    for(i = 0; i < VET ; i++){
        scanf("%d", &vetor[i]);
    }
    
    maior = vetor[0];
    
    for(i = 0; i < VET; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            index = i + 1;
        }
    }
    
    printf("%d\n%d\n", maior, index);
    
    return 0;
}
