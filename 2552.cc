/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thales Felizardo Maia
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 22/06/2026
Objetivo    : 
Aprendizado : 
-------------------------------------------------------------------------- */


#include <iostream>
using namespace std;

int main() {
    int n, m;

    while (cin >> n >> m) {
        int matriz[100][100];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matriz[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (matriz[i][j] == 1) {
                    cout << 9;
                } else {
                    int qtd = 0;

                    if (i > 0 && matriz[i - 1][j] == 1) {
                        qtd++;
                    }

                    if (i < n - 1 && matriz[i + 1][j] == 1) {
                        qtd++;
                    }

                    if (j > 0 && matriz[i][j - 1] == 1) {
                        qtd++;
                    }

                    if (j < m - 1 && matriz[i][j + 1] == 1) {
                        qtd++;
                    }

                    cout << qtd;
                }
            }

            cout << '\n';
        }
    }

    return 0;
}
