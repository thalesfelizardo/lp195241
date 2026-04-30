/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THALES FELIZARDO MAIA
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 29/04/2026
Objetivo    : codificar um texto trocando letras de acordo com a entrada do usuário.
Aprendizado : trocar os caracteres manipulando a tabela ascii
-------------------------------------------------------------------------- */


#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k, l, t;
    scanf("%d", &t); 
    char str[51];
    char strconvertida;
    for (i = 0; i < t; i++)
    {
        scanf("%s", str);
        scanf("%d", &j);
        getchar();
        l = strlen(str);

        for (k = 0; k < l; k++)
        {
            strconvertida = str[k] - j; 
            if (strconvertida < 65)     
            {
                strconvertida += 26;
            }
            printf("%c", strconvertida);
        }
        printf("\n");
    }
    return 0;
}
