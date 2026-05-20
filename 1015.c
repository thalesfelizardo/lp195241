/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THALES FELIZARDO MAIA
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 20/05/2026
Objetivo    : Determinar a distancia de dois pontos.
Aprendizado : Foi aprendido comandos da biblioteca math.h, e tambem o uso de
funções.

-------------------------------------------------------------------------- */


#include <stdio.h>
#include <math.h>

float distancia(float x2, float x1, float y2, float y1){
    
    float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    return distancia;
}

int main(){

    float x1, x2, y1, y2;

    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    printf("%.4f\n", distancia(x2, x1, y2, y1));

    return 0;
}
