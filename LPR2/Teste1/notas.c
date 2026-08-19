#include <stdio.h>
#include "notas.h"

float calcularMedia(float nota1, float nota2) {
    float media = (nota1 + nota2) / 2;
    printf("\nSua nota foi: %.2f", media);
    return media;
}
void verificarSituacao(float media) {
    if (media >= 6) {
        printf("\nVocê foi aprovado.");
    } else {
        printf("\nVocê foi reprovado.");
    }
 }