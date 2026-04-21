/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THALES FELIZARDO MAIA
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 20/04/2026
Objetivo    : LER 100 INTEIROS E PRINTAR O MAIOR VALOR E SUA POSICAO
Aprendizado : USAR UMA VARIAVEL AUXILIAR PARA ARMAZENAR O MAIOR VALOR
-------------------------------------------------------------------------- */

#include <stdio.h>
#define NUM 100

int main(){
    
    int num, i;
    int index = 0;
    int maior = 0;
    		
    for (i = 0; i < NUM; i++){
    	scanf("%d", &num);
    	if (num > maior){
    		maior = num;
    		index = i+1;
    	}	
    }
    
    printf("%d\n%d\n", maior, index);

    return 0;
}
