/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int num[5], count = 0;
    
    for(int i = 0; i < 5; i++) {
        printf("Digite o número %d:\n", i + 1);
        scanf("%d", &num[i]);
        if (num[i] > 10 && num[i] < 50) {
            count++;
        }
    }
    printf("\033[H\033[J");
    printf("A quantidade de números entre 10 e 50 é de: %d.", count);

}
