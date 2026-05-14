/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int num[10], pos = 0, neg = 0, par = 0, impar = 0;
    
    for(int i = 0; i < 10; i++) {
        printf("Digite o número %d: (não repita números)\n", i + 1);
        scanf("%d", &num[i]);
        if (num[i] > 0 ) {
            pos++;
        } else if (num[i] < 0) {
            neg++;
        }
        if (num[i] % 2 == 0) {
            par++;
        } else if (num[i] % 2 == 1) {
            impar++;
        }
    } printf("Dos 10 números digitados, %d são negativos, %d são positivos, %d são pares e %d são impares.", neg, pos, par, impar);
   

}