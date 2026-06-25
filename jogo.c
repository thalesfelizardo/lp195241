/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thales Felizardo Maia
Linguagem   : C
Problema    : 
Data        : 22/06/2026
Objetivo    : Fazer um jogo de sudoku interativo.
Aprendizado : Em resumo, esse projeto define todo o aprendizado usado no semestre:
uso de funcoes, if e else, manipulacao de matrizes e vetores, laços de repeticao.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

int verificaquadrado(int matriz[9][9], int x);
int verificalinhas(int matriz[9][9], int linha);
int verificacolunas(int matriz[9][9], int coluna);
int imprimetabuleiro(int matriz[9][9]);
int sudokuCompleto(int matriz[9][9]);
int movimentoValido(int matriz[9][9], int linha, int coluna, int num);
int verificaSudokuFinal(int matriz[9][9]);

int main() {

    FILE *arquivo = fopen("input2.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    int matriz[9][9];

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            fscanf(arquivo, "%d", &matriz[i][j]);
        }
    }

    fclose(arquivo);

    int num;

    while (!sudokuCompleto(matriz)) {

        imprimetabuleiro(matriz);

        int linha = -1;
        int coluna = -1;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (matriz[i][j] == 0) {
                    linha = i;
                    coluna = j;
                    break;
                }
            }

            if (linha != -1) {
                break;
            }
        }

        printf("\nDigite o numero para linha %d coluna %d: ", linha + 1, coluna + 1);
        scanf("%d", &num);

        if (num < 1 || num > 9) {
            printf("Numero invalido.\n\n");
            continue;
        }

        if (movimentoValido(matriz, linha, coluna, num)) {
            matriz[linha][coluna] = num;
            printf("Numero inserido\n\n");
        } else {
            printf("Jogada invalida!\n\n");
        }
    }

    imprimetabuleiro(matriz);

    if (verificaSudokuFinal(matriz)) {
        printf("\nSudoku finalizado corretamente!\n");
    } else {
        printf("\nSudoku completo, mas esta incorreto!\n");
    }

    return 0;
}

int movimentoValido(int matriz[9][9], int linha, int coluna, int num) {

    for (int j = 0; j < 9; j++) {
        if (matriz[linha][j] == num) {
            return 0;
        }
    }

    for (int i = 0; i < 9; i++) {
        if (matriz[i][coluna] == num) {
            return 0;
        }
    }

    int inicioLinha = 3 * (linha / 3);
    int inicioColuna = 3 * (coluna / 3);

    for (int i = inicioLinha; i < inicioLinha + 3; i++) {
        for (int j = inicioColuna; j < inicioColuna + 3; j++) {
            if (matriz[i][j] == num) {
                return 0;
            }
        }
    }

    return 1;
}

int sudokuCompleto(int matriz[9][9]) {

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (matriz[i][j] == 0) {
                return 0;
            }
        }
    }

    return 1;
}

int verificaSudokuFinal(int matriz[9][9]) {

    for (int i = 0; i < 9; i++) {
        if (!verificalinhas(matriz, i)) {
            return 0;
        }

        if (!verificacolunas(matriz, i)) {
            return 0;
        }

        if (!verificaquadrado(matriz, i)) {
            return 0;
        }
    }

    return 1;
}

int verificalinhas(int matriz[9][9], int linha) {

    int veteste[10] = {0};

    for (int j = 0; j < 9; j++) {
        int valor = matriz[linha][j];

        if (valor < 1 || valor > 9) {
            return 0;
        }

        if (veteste[valor]) {
            return 0;
        }

        veteste[valor] = 1;
    }

    return 1;
}

int verificacolunas(int matriz[9][9], int coluna) {

    int veteste[10] = {0};

    for (int i = 0; i < 9; i++) {
        int valor = matriz[i][coluna];

        if (valor < 1 || valor > 9) {
            return 0;
        }

        if (veteste[valor]) {
            return 0;
        }

        veteste[valor] = 1;
    }

    return 1;
}

int verificaquadrado(int matriz[9][9], int x) {

    int veteste[10] = {0};

    int linha = 3 * (x / 3);
    int coluna = 3 * (x % 3);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            int valor = matriz[linha + i][coluna + j];

            if (valor < 1 || valor > 9) {
                return 0;
            }

            if (veteste[valor]) {
                return 0;
            }

            veteste[valor] = 1;
        }
    }

    return 1;
}

int imprimetabuleiro(int matriz[9][9]) {

    printf("\n      1  2  3    4  5  6    7  8  9\n");
    printf("   ---------------------------------\n");

    for (int i = 0; i < 9; i++) {

        if (i == 3 || i == 6) {
            printf("   ---------+---------+---------\n");
        }

        printf("%d |", i + 1);

        for (int j = 0; j < 9; j++) {

            if (matriz[i][j] == 0) {
                printf(" .");
            } else {
                printf("%2d", matriz[i][j]);
            }

            if (j == 2 || j == 5) {
                printf(" |");
            }

            if (j < 8) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
