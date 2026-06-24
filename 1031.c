/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THALES FELIZARDO MAIA
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 24/04/2026
Objetivo    : encontrar o menor valor de salto para que a região 13 
seja a última região a ser desligada no problema da crise de energia
Aprendizado : uso de funcoes/laços de repeticao infinito
-------------------------------------------------------------------------- */

#include <stdio.h>

int ultima(int total, int intervalo) {
    
    int index = 0;
    int atual;

    for (atual = 2; atual < total; atual++) {
        index = (index + intervalo) % atual;
    }

    return index;
}

int main() {
    
    int regioes;

    scanf("%d", &regioes);

    while (regioes != 0) {
        
        int saldo = 1;
        
        while (1) {
            if ((ultima(regioes, saldo) + 1) % regioes == 12) {
                
                printf("%d\n", saldo);
                
                break;
            }

            saldo++;
        }
    
        scanf("%d", &regioes);
    }

    return 0;
}
