/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char turno;
    
    printf("Digite o código do seu turno (M, T ou N):\n");
    scanf(" %c", &turno);
    printf("\033[2J\033[H");
    switch (turno) {
        case 'm':
        case 'M':
            printf("Você trabalha no turno da manhã.\n");
            break;
        case 't':
        case 'T':
            printf("Você trabalha no turno da tarde.\n");
            break;
        case 'n':
        case 'N':
            printf("Você trabalha no turno da noite.\n");
            break;
        default:
            printf("Código inválido.");
             break;
    }
}