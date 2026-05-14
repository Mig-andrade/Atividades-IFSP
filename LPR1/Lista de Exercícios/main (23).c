/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade[10], maior = 0, menor = 0;
    
    for(int i = 0; i < 10; i++) {
        printf("Digite a idade %d: \n", i + 1);
        scanf("%d", &idade);
        if (idade[i] >= 18) {
            maior++;
        } else if (idade[i] < 18) {
            menor++;
        }
        
    }
    printf("\033[H\033[J");
    printf("A quantidade de maiores de idade é de %d, e de menores de idade é de %d.", maior, menor);

}
