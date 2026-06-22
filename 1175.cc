/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THALES FELIZARDO MAIA
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 22/06/2026 
Objetivo    : Imprimir o vetor modificado invertido.
Aprendizado : manipulacao de vetores em c++
-------------------------------------------------------------------------- */


#include <iostream>

int main() {
    int vetor[20];
    
    for (int i = 0; i < 20; i++) {
        std::cin >> vetor[i];
    }
    
    for (int i = 0; i < 20; i++) {
        std::cout << "N[" << i << "] = " << vetor[19 - i] << "\n";
    }
    
    return 0;
}
