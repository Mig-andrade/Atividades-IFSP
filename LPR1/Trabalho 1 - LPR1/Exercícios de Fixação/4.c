/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int dia;

        printf("Digite um número de 1 a 7:\n");
        scanf("%d", &dia);
        printf("\033[2J\033[H");
        switch (dia) {
            case 1:
                printf("1 -> Fim de semana (Domingo).\n");
                break;
            case 2:
                printf("2 -> Dia de semana (Segunda).\n");
                break;
            case 3:
                printf("3 -> Dia de semana (Terça).\n");
                break;
            case 4:
                printf("4 -> Dia de semana (Quarta).\n");
                break;
            case 5:
                printf("5 -> Dia de semana (Quinta).\n");
                break;
            case 6:
                printf("6 -> Dia de semana (Sexta).\n");
                break;
            case 7:
                printf("7 -> Fim de semana (Sábado).\n");
                break;
            default:
                printf("Número inválido.\n\n");
        }
}


