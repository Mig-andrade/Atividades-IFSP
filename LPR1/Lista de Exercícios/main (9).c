/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int num[10], count = 0;
    
    for (int i = 0; i < 10; i++) {
        printf("Digite o número:\n");
        scanf("%d", &num[i]);
        printf("\n");
        if (num[i] % 2 == 0) {
            count++;
        }
    }
    printf("\033[H\033[J");
    printf("A quantidade de números pares é de: %d", count);
}