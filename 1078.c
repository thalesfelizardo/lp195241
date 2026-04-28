/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THALES FELIZARDO MAIA
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : imprimir a tabuada de um numero entre 2 e 1000 na tela
Aprendizado : comando for
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
    
    int n, i;
    
    scanf("%d", &n);
    
    if(n < 2 || n > 1000){
        return -1;
    }
    
    
    for(i = 1; i < 11; i++){
        printf("%d x %d = %d\n", i, n, n*i);
    }
 
    return 0;
}

