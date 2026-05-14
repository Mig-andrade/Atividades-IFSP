/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int num[5], soma = 0;
    
    for (int i = 0; i < 5; i++) {
        printf("Digite o número:\n");
        scanf("%d", &num[i]);
        soma = soma + num[i]; 
    }
    printf("\033[H\033[J");
    printf("A soma dos números deu %d", soma);
}