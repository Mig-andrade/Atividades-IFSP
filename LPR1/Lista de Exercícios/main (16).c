/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int senha;
    
    printf("Digite a senha: \n");
    scanf("%d", &senha);
    
    if (senha == 1234) {
        printf("\033[H\033[J");
        printf("Acesso permitido.");
    } else {
        while (senha != 1234) {
            printf("\033[H\033[J");
            printf("Senha incorreta. Digite a senha novamente.\n");
            scanf("%d", &senha);
            if (senha == 1234) {
                printf("\033[H\033[J");
                printf("Acesso permitido.");
            }
        }
    }

}