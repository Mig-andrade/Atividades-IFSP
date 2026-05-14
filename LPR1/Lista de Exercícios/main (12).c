/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int idade[5], maior = 0;
    
    for (int i = 0; i < 5; i++) {
        printf("Digite a idade %d:\n", i + 1);
        scanf("%d", &idade[i]);
        printf("\n");
        if (idade[i] > maior) {
            maior = idade[i];
        }
    }
    printf("A maior idade registrada foi de: %d", maior);
}