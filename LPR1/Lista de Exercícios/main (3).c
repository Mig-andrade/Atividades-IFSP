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
    
    if (num % 2 == 1) {
        printf("Esse número é ímpar.");
    } else {
        printf("Esse número é par.");
    }
    
    
}