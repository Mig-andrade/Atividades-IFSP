/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    
    if (idade < 12 ) {
        printf("Você é uma criança.\n");
    } else if (idade < 18 ) {
        printf("Você é um adolescente.\n");
    } else if (idade < 60 ) {
        printf("Você é um adulto.\n");
    } else if (idade >= 60 ) {
        printf("Você é um idoso.\n");
    } else {
        printf("Erro.\n");
    }
    
}