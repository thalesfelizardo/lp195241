/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : NNNN
Data        : 07/04/2026
Objetivo    : Ler 3 números e imprimir o maior na tela
Aprendizado : Comando scanf e uso do if e else.
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
 
    int x, y, z;
    
    scanf("%d %d %d", &x, &y, &z);
    
    if(x > y && x > z){
        printf("%d eh o maior\n", x);
    }
    else if(y > z){
        printf("%d eh o maior\n", y);
    }
    else{
        printf("%d eh o maior\n", z);        
    }
 
    return 0;
}
