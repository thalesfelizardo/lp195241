/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thales Felizardo Maia
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 07/04/2026
Objetivo    : deslocar 3 posições para a direita os caracteres alfabéticos, inverter toda a string e 
deslocar 1 posição para a esquerda os caracteres da segunda metade.
Aprendizado : Neste exercício foi aprendido como utilizar a tabela ASCII para
alterar caracteres e como usar funções da biblioteca ctype.h (isalpha) para verificar se o caracter é uma letra.
-------------------------------------------------------------------------- */

#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    int N;
    char string[1001], aux;

    scanf("%d\n", &N);

    for(int i = 0; i < N; ++i){
        scanf("%[^\n]\n", string);

        for(size_t i = 0; i < strlen(string); i++){
            if(isalpha(string[i])){
                string[i] = string[i] + 3;
            }
        }
        for (int i = 0; i < strlen(string) / 2; i++) {
            aux = string[i];
            string[i] = string[strlen(string) - 1 - i];
            string[strlen(string) - 1 - i] = aux;
        }
        for(size_t i = strlen(string)/2; i < strlen(string); i++){
            string[i] = --string[i];
        }

        printf("%s\n", string);
    }

  return 0;
}
