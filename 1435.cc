/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THALES FELIZARDO MAIA
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 22/06/2026 
Objetivo    : Imprimir uma matriz justificada 3 casas à direita e separados por espaço
Aprendizado : linguagem cpp e manipulacao de matrizes 
-------------------------------------------------------------------------- */


#include <iostream>
#include <iomanip>

int main() {
    
    int n;
    std::cin >> n;
    while (n != 0) {
        
        int m[100][100];
        int a, b, c, d, menor;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a = i + 1;
                b = j + 1;
                c = n - i;
                d = n - j;
                
                menor = a;
                if (b < menor) menor = b;
                if (c < menor) menor = c;
                if (d < menor) menor = d;
                
                m[i][j] = menor;
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j > 0) std::cout << " ";
                std::cout << std::setw(3) << m[i][j];
            }
            std::cout << "\n";
        }
        std::cout << "\n";
        
        std::cin >> n;
    }
    
    return 0;
}
