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
        printf("Digite um número inteiro: (digite 0 para sair)\n");
        scanf("%lf", &num);
        soma = soma + num;
        if (num == 0) {
            off = 0;
        }
    }
    printf("\033[H\033[J");
    printf("A soma dos números digitados é: %.2f\n", soma);
}