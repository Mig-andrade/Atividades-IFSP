/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int M = 0, F = 0;
    char sexo;
    
    for(int i = 0; i < 8; i++) {
        printf("Digite o seu sexo: (M ou F)\n");
        scanf(" %c", &sexo);
        if (sexo == 'M' || sexo == 'm') {
            M++;
        } else if (sexo == 'F' || sexo == 'f') {
            F++;
        } 
        
    }
    printf("\033[H\033[J");
    printf("A quantidade de homens é de: %d, e de mulheres é de %d.", M, F);

}
