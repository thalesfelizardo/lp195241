/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THALES FELIZARDO MAIA
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 22/06/2026 
Objetivo    : Realizar o somatorio da sequencia fibonacci e imprimir quantas
              houveram
Aprendizado : uso da recursividade e de ponteiros em funcoes.
-------------------------------------------------------------------------- */



#include <stdio.h>

int fibonacci(int n, int *chamadas) {
    
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    *chamadas += 2;

    return fibonacci(n - 1, chamadas) + fibonacci(n - 2, chamadas);
}

int main() {

    int n;
    int chamadas;
    int num;
    int resultado;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        scanf("%d", &num);

        chamadas = 0;

        resultado = fibonacci(num, &chamadas);

        printf("fib(%d) = %d calls = %d\n", num, chamadas, resultado);
    }

    return 0;
}
