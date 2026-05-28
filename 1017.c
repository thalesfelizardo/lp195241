/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THALES FELIZARDO MAIA
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 28/05/2026
Objetivo    : Calcular a quantidade de litros de gasolina necessarios para fazer uma viagem
Aprendizado : uso de funcoes
-------------------------------------------------------------------------- */


#include <stdio.h>

float calcularLitros(int tempo, int velocidade);


int main(){

    int tempo, velocidade;

    scanf("%d %d", &tempo, &velocidade);

    printf("%.3f\n", calcularLitros(tempo, velocidade));


    return 0;
}

float calcularLitros(int tempo, int velocidade){

    float litros = (velocidade * tempo / 12.0);

    return litros;

}
