#include <stdio.h>
#include "calculadora.h"


int calcularPotencia(int base, int expoente) {
    int i, resultado = 1;

    for (i = 0; i < expoente; i++) {
        resultado = base * resultado;
    }
    return resultado;
}
int calcularRaiz(int radicando) {
    if (radicando < 0) {
        return -1;
    } else if (radicando == 0 || radicando == 1) {
        return radicando;
    }
    
    double palpite = radicando / 2;
    double anterior = 0;

    while (palpite != anterior) {
        anterior = palpite;
        palpite = (palpite + (radicando / palpite)) / 2;
    }
    return palpite;
}