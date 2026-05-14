/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    double num[6];
    
    for(int i = 0; i < 6; i++) {
        printf("Digite o número %d:\n", i + 1);
        scanf("%lf", &num[i]);
    }
    printf("\033[H\033[J");
    printf("Dos números digitados, os maiores que 10 são:\n");
    for (int i = 0; i < 6; i++) {
        if (num[i] > 10) {
            printf("Número %d --> %.2f\n", i + 1, num[i]);
        }
    }
}
