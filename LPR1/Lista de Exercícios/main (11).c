/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int N;
    
    printf("Digite o número:\n");
    scanf("%d", &N);
    printf("\033[H\033[J");
    
    for (int i = 1; i <= 10; i++) {
        printf("Tabuada X%d - > %d\n", i, N * i);
    }
}