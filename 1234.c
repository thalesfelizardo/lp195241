/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THALES FELIZARDO MAIA
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 29/04/2026
Objetivo    : Alternar entre maiuscula e minuscula os caracteres da string
Aprendizado : uso da biblioteca string e ctype
-------------------------------------------------------------------------- */

/* codigo nao funciona para para determinadas frases. Um exemplo
do erro é no segundo caso do beecrowd:   This   is         a  dancing   sentence.
Esse erro ocorre devido começar com letra maiuscula */

#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    int n, maiuscula;
    char str[51];

    scanf("%[^\n]", str);
    n = strlen(str);
    maiuscula = 1;

    for (size_t i = 0; i < n; i+=2)
    {
        if (isalpha(str[i]) != 0)
        {
            if (islower(str[i]) != 0)
            {
                str[i] = toupper(str[i]);
            }
            else{
                str[i] = tolower(str[i]);
            }
        }
        
    }

    printf("%s", str);
    
    return 0;
}
