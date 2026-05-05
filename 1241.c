/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thales FElizardo Maia
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 5/4/2026
Objetivo    : verificar se uma string está contida dentro da outra
Aprendizado : uso da funcao strcmp para ver se a string é igual.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

    int N;
    char string1[1001];
    char string2[1002];

    scanf("%d", &N);

    for (size_t i = 0; i < N; i++)
    {
        scanf("%s %s", string1, string2);

        if (strlen(string1) < strlen(string2))
        {
            printf("nao encaixa\n");
        }
        else
        {
            if (!strcmp(string1 + strlen(string1) - strlen(string2), string2)) 
            {
                printf("encaixa\n");
            }
            else
            {
                printf("nao encaixa\n");
            } 
        }
     
    }
    return 0;
}
