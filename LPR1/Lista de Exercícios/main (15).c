/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    double num, soma = 0, off = 1;
    
    
    while (off != 0) {
        printf("Digite um número positivo: (digite um número negativo para encerrar)\n");
        scanf("%lf", &num);
        if (num < 0) {
            off = 0;
        } else {
            soma = soma + num;
        }
    }
    printf("\033[H\033[J");
    printf("A soma dos números digitados é: %.2f\n", soma);
}