#include <stdio.h>
#include "notas.h"
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float nota1, nota2, mediaFinal;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);

    mediaFinal = calcularMedia(nota1, nota2);
    verificarSituacao(mediaFinal);

}