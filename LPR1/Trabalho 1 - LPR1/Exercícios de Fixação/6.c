#include <stdio.h>

int main()
{
    int operacao;
    double num1, num2;
    char continuar = 'S';
    
    
    
    while (continuar == 'S' || continuar == 's') {
        printf("\033[2J\033[H");
        printf("Escolha a operação desejada:\n");
        printf("1 -> Soma\n");
        printf("2 -> Subtração\n");
        printf("3 -> Multiplicação\n");
        printf("4 -> Divisão\n");
        scanf("%d", &operacao);
        printf("\033[2J\033[H");
        switch (operacao) {
            case 1:
                printf("Digite o primeiro número: \n");
                scanf("%lf", &num1);
                printf("\033[2J\033[H");
                printf("Digite o segundo número: \n");
                scanf("%lf", &num2);
                printf("\033[2J\033[H");
                printf("%.2f + %.2f = %.2f.\n", num1, num2, num1 + num2);
                printf("Deseja realizar outra operação? (S ou N):\n");
                scanf(" %c", &continuar);
                if (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                    printf("\033[2J\033[H");
                    while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                        printf("Resposta inválida. Digite novamente: (S ou N)\n");
                        scanf(" %c", &continuar);
                        printf("\033[2J\033[H");
                    }
                }
                break;
            case 2:
                printf("Digite o primeiro número: \n");
                scanf("%lf", &num1);
                printf("\033[2J\033[H");
                printf("Digite o segundo número: \n");
                scanf("%lf", &num2);
                printf("\033[2J\033[H");
                printf("%.2f + %.2f = %.2f.\n", num1, num2, num1 - num2);
                printf("Deseja realizar outra operação? (S ou N):\n");
                scanf(" %c", &continuar);
                if (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                    printf("\033[2J\033[H");
                    while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                        printf("Resposta inválida. Digite novamente: (S ou N)\n");
                        scanf(" %c", &continuar);
                        printf("\033[2J\033[H");
                    }
                }
                break;
            case 3:
                printf("Digite o primeiro número: \n");
                scanf("%lf", &num1);
                printf("\033[2J\033[H");
                printf("Digite o segundo número: \n");
                scanf("%lf", &num2);
                printf("\033[2J\033[H");
                printf("%.2f + %.2f = %.2f.\n", num1, num2, num1 * num2);
                printf("Deseja realizar outra operação? (S ou N):\n");
                scanf(" %c", &continuar);
                if (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                    printf("\033[2J\033[H");
                    while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                        printf("Resposta inválida. Digite novamente: (S ou N)\n");
                        scanf(" %c", &continuar);
                        printf("\033[2J\033[H");
                    }
                }
                break;
            case 4:
                printf("Digite o primeiro número: \n");
                scanf("%lf", &num1);
                printf("\033[2J\033[H");
                printf("Digite o segundo número: \n");
                scanf("%lf", &num2);
                printf("\033[2J\033[H");
                if (num1 == 0 || num2 == 0) {
                    printf("Divisão impossível, pois um dos valores é 0.\n");
                    printf("Deseja realizar outra operação? (S ou N):\n");
                    scanf(" %c", &continuar);
                    if (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                        printf("\033[2J\033[H");
                        while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                            printf("Resposta inválida. Digite novamente: (S ou N)\n");
                            scanf(" %c", &continuar);
                            printf("\033[2J\033[H");
                        }
                    }
                    break;
                } else {
                    printf("%.2f + %.2f = %.2f.\n", num1, num2, num1 / num2);
                    printf("Deseja realizar outra operação? (S ou N):\n");
                    scanf(" %c", &continuar);
                    if (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                        printf("\033[2J\033[H");
                        while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                            printf("Resposta inválida. Digite novamente: (S ou N)\n");
                            scanf(" %c", &continuar);
                            printf("\033[2J\033[H");
                        }
                    }   
                    break;
                }
            default:
                printf("Operação inválida.\n");
                printf("Deseja realizar outra operação? (S ou N):\n");
                scanf(" %c", &continuar);
                if (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                    printf("\033[2J\033[H");
                    while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                        printf("Resposta inválida. Digite novamente: (S ou N)\n");
                        scanf(" %c", &continuar);
                        printf("\033[2J\033[H");
                    }
                }
                break;
        }
    }
}