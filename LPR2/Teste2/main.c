#include <stdio.h>
#include "calculadora.h"
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int opcao, resultado, n1, n2;

    printf("Calculadora de potência e raiz quadrada:\n\n");
    printf("Digite a opção desejada:\n");
    printf("1. Potência\t 2. Raiz quadrada\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("\nDigite a base da potência: ");
        scanf("%d", &n1);
        printf("\nDigite o expoente da potência: ");
        scanf("%d", &n2);
        resultado = calcularPotencia(n1, n2);
        printf("\n%d elevado a %d = %d.", n1, n2, resultado);
    } else if (opcao == 2) {
        printf("\nDigite o radicando: ");
        scanf("%d", &n1);
        resultado = calcularRaiz(n1);
        printf("\nRaiz quadrada de %d = %d.", n1, resultado);
    } else {
        printf("\nOpção inválida.");
        return 0;
    }
}