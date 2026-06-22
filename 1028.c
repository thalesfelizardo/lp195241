/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THALES FELIZARDO MAIA
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 22/06/2026 
Objetivo    : Fazer o mdc das figurinhas para saber quantos bolos podem ser trocados
Aprendizado : uso da recursividade 
-------------------------------------------------------------------------- */

#include <stdio.h>

int mdc(int n1, int n2) {

   if (n1 % n2 == 0) {
       return n2;
  }

  return mdc(n2, n1 % n2);
}

int main() {

    int n;
    int f1, f2;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        scanf("%d %d", &f1, &f2);

        printf("%d\n", mdc(f1, f2));
    }

    return 0;
}
