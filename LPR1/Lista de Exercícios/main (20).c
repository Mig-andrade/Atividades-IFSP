/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int num[7], soma = 0;
    
    for(int i = 0; i < 7; i++) {
        printf("Digite o número %d:\n", i + 1);
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0) {
            soma = soma + num[i];
        }
    }
    printf("\033[H\033[J");
    printf("A soma dos números pares é de: %d", soma);

}
