/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    double num[8];
    int pos = 0, neg = 0;
    
    for (int i = 0; i < 8; i++) {
        printf("Digite o número:\n");
        scanf("%lf", &num[i]);
        printf("\n");
        if (num[i] > 0) {
            pos++;
        } else if (num[i] < 0) {
            neg++;
        }
    }
    printf("\033[H\033[J");
    printf("A quantidade de números positivos é de %d, e de negativos é %d.", pos, neg);
}