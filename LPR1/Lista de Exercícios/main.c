/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um número inteiro:\n");
    scanf("%d", &num);
    
    if (num > 0 ) {
        printf("O número é positivo.\n");
    } else if (num < 0 ) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é 0.\n");
    }
    
}