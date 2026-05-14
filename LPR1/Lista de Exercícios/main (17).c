/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    double nota, maior = 0, menor = 10, count = 0, soma = 0, verificacao = 0;
    
    while (verificacao != -1) {
        printf("Digite uma nota de 0 a 10: (Digite -1 para parar)\n");
        scanf("%lf", &verificacao);
        if (verificacao > 0) {
            nota = verificacao;
            soma = soma + nota;
            if (maior < nota) {
                maior = nota;
            } 
            if (menor > nota) {
                menor = nota;
            } 
        } count++;
    }
    printf("A média de suas notas foi de %.2f, a maior nota foi de %.2f, e a menor nota foi de %.2f.", soma / (count - 1), maior, menor);
   

}