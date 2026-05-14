/* Miguel Angelo de Andrade - IFSP ADS Noturno 1º Semestre */

#include <stdio.h>

int main()
{
    int opcao, opcao2;
    double num1, num2;
    char continuar = 'S';
    
    
    while (continuar == 'S' || continuar == 's') {
        printf("\033[2J\033[H");
        printf("——— Menu de Utilidades ———\n");
        printf("    1 -> Calculadora:     \n");
        printf("    2 -> Média:           \n");
        printf("    3 -> Par ou ímpar:    \n");
        printf("    4 -> Tabuada:         \n");
        printf("    5 -> Soma até 0:      \n");
        printf("    0 -> Sair:            \n");
        printf("——— Escolha uma opção: ———\n");
        scanf("%d", &opcao);
        printf("\033[2J\033[H");
        switch (opcao) {
            case 1:
                printf("\033[2J\033[H");
                printf("Escolha a operação desejada:\n");
                printf("1 -> Soma\n");
                printf("2 -> Subtração\n");
                printf("3 -> Multiplicação\n");
                printf("4 -> Divisão\n");
                scanf("%d", &opcao2);
                printf("\033[2J\033[H");
                switch (opcao2) {
                    case 1:
                        printf("Digite o primeiro número: \n");
                        scanf("%lf", &num1);
                        printf("\033[2J\033[H");
                        printf("Digite o segundo número: \n");
                        scanf("%lf", &num2);
                        printf("\033[2J\033[H");
                        printf("%.2f + %.2f = %.2f.\n", num1, num2, num1 + num2);
                        printf("Deseja usar outra utilidade? (S ou N):\n");
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
                        printf("Deseja usar outra utilidade? (S ou N):\n");
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
                        printf("Deseja usar outra utilidade? (S ou N):\n");
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
                            printf("Deseja usar outra utilidade? (S ou N):\n");
                            scanf(" %c", &continuar);
                            if (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                                printf("\033[2J\033[H");
                                while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                                    printf("Resposta inválida. Digite novamente: (S ou N)\n");
                                    scanf(" %c", &continuar);
                                    printf("\033[2J\033[H");
                                }
                            }
                        } else {
                            printf("%.2f + %.2f = %.2f.\n", num1, num2, num1 / num2);
                            printf("Deseja usar outra utilidade? (S ou N):\n");
                            scanf(" %c", &continuar);
                            if (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                                printf("\033[2J\033[H");
                                while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                                    printf("Resposta inválida. Digite novamente: (S ou N)\n");
                                    scanf(" %c", &continuar);
                                    printf("\033[2J\033[H");
                                }
                            }   
                        } break;
                    default:
                        printf("Operação inválida.\n");
                        printf("Deseja usar outra utilidade? (S ou N):\n");
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
                break;
            case 2:
                double nota1, nota2, media;
                printf("Digite a nota 1:\n");
                scanf("%lf", &nota1);
                printf("\033[2J\033[H");
                printf("Digite a nota 2:\n");
                scanf("%lf", &nota2);
                printf("\033[2J\033[H");
                media = (nota1 + nota2) / 2;
                if (media >= 6) {
                    printf("Você está aprovado, sua média é %.2f.\n", media);
                    printf("Deseja usar outra utilidade? (S ou N):\n");
                    scanf(" %c", &continuar);
                    if (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                        printf("\033[2J\033[H");
                        while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                            printf("Resposta inválida. Digite novamente: (S ou N)\n");
                            scanf(" %c", &continuar);
                            printf("\033[2J\033[H");
                        }
                    }
                } else if (media < 6 && media > 4) {
                    printf("Você está de recuperação, sua média é %.2f.\n", media);
                    printf("Deseja usar outra utilidade? (S ou N):\n");
                    scanf(" %c", &continuar);
                    if (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                        printf("\033[2J\033[H");
                        while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                            printf("Resposta inválida. Digite novamente: (S ou N)\n");
                            scanf(" %c", &continuar);
                            printf("\033[2J\033[H");
                        }
                    }
                } else {
                    printf("Você está reprovado, sua média é %.2f.\n", media);
                    printf("Deseja usar outra utilidade? (S ou N):\n");
                    scanf(" %c", &continuar);
                    if (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                        printf("\033[2J\033[H");
                        while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
                            printf("Resposta inválida. Digite novamente: (S ou N)\n");
                            scanf(" %c", &continuar);
                            printf("\033[2J\033[H");
                        }
                    }
                }
                break;
                
            default:
                printf("Opção inválida.");
                printf("Deseja usar outra utilidade? (S ou N):\n");
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