/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int opcao = 1;
    int num1, num2;
    
        do {
            printf("Escolha uma função:\n");
            printf("1 -> Tabuada\n");
            printf("2 -> Par ou ímpar\n");
            printf("3 -> Média de duas notas\n");
            printf("0 -> Sair\n");
            scanf("%d", &opcao);
            printf("\033[2J\033[H");
            
            switch(opcao) {
                case 1:
                    printf("Digite o número:\n");
                    scanf("%d", &num1);
                    printf("\033[2J\033[H");
                    for (int i = 1; i <= 10; i++) {
                        printf("Tabuada X%d -> %d\n", i, num1 * i);
                    }
                    printf("\n\n");
                    break;
                case 2:
                    printf("Digite o número:\n");
                    scanf("%d", &num1);
                    printf("\033[2J\033[H");
                    if (num1 % 2 == 0) {
                        printf("O número é par.\n");
                    } else {
                        printf("O número é ímpar.\n");
                    }
                    printf("\n\n");
                    break;
                case 3:
                    printf("Digite a primeira nota:\n");
                    scanf("%d", &num1);
                    printf("Digite a segunda nota:\n");
                    scanf("%d", &num2);
                    printf("\033[2J\033[H");
                    printf("A média das notas é de: %d", (num1 + num2) / 2);
                    printf("\n\n");
                    break;
                case 0:
                    printf("Programa encerrado.\n");
                    break;
                default:
                    printf("Opção inválida.\n\n");
            }
        } while (opcao != 0);
        
}


