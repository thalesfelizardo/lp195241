/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THALES FELIZARDO MAIA
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 29/05/2026
Objetivo    : imprimir a quantidade de leds necessarios para cada numero
Aprendizado : comando switch
-------------------------------------------------------------------------- */

#include <string.h>
#include <stdio.h>

int main(){

    int n;
    char numero[1000];

    scanf("%d", &n);

    for (int j = 0; j < n; j++) {
        scanf("%s", numero);

        int count = 0;

        for (int i = 0; numero[i] != '\0'; i++) {
            switch (numero[i]) {
                case '1':
                    count += 2;
                    break;
                case '2':
                    count += 5;
                    break;
                case '3':
                    count += 5;
                    break;
                case '4':
                    count += 4;
                    break;
                case '5':
                    count += 5;
                    break;
                case '6':
                    count += 6;
                    break;
                case '7':
                    count += 3;
                    break;
                case '8':
                    count += 7;
                    break;
                case '9':
                    count += 6;
                    break;
                case '0':
                    count += 6;
                    break;
            }
        }

        printf("%d leds\n", count);
    }

    return 0;
}
