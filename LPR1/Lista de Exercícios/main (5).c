/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int cod;
    
    printf("Digite o código do produto (1 - 4):\n");

    scanf("%d", &cod);
    
    switch (cod) {
        case 1:
            printf("O código do produto é 1: Ele é um teclado.");
            break;
        case 2:
            printf("O código do produto é 2: Ele é um mouse.");
            break;
        case 3:
            printf("O código do produto é 3: Ele é um monitor.");
            break;
        case 4:
            printf("O código do produto é 4: Ele é uma impressora.");
            break;
        default:
            printf("Código inválido.");
    }
    
    
}