/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

 int main()
{
    double num1, num2;
    char operacao;
    
    printf("Digite o primeiro número:\n");
    scanf("%lf", &num1);
    printf("Digite o segundo número:\n");
    scanf("%lf", &num2);
    printf("\033[2J\033[H");
    printf("Digite a operação desejada (+, -, * ou /):\n");
    scanf(" %c", &operacao);
    printf("\033[2J\033[H");
    
    switch (operacao) {
        case '+':
            printf("%.2f + %.2f = %.2f.", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f.", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f.", num1, num2, num1 * num2);
            break;
        case '/':
            if (num1 == 0 || num2 == 0) {
                printf("Divisão impossível, pois um dos valores é 0.");
            } else {
                printf("%.2f / %.2f = %.2f.", num1, num2, num1 / num2);
            }

            break;
        default:
         printf("Operação inválida.");
    }
}


