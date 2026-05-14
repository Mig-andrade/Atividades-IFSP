/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    double nota1, nota2, media;
    
    printf("Digite a nota 1:\n");
    scanf("%lf", &nota1);
    printf("Digite a nota 2:\n");
    scanf("%lf", &nota2);
    
    media = (nota1 + nota2) / 2;
    if (media >= 6) {
        printf("Você está aprovado, sua média é %.2f.", media);
    } else if (media < 6 && media > 4) {
        printf("Você está de recuperação, sua média é %.2f.", media);
    } else {
        printf("Você está reprovado, sua média é %.2f.", media);
    }
    
}