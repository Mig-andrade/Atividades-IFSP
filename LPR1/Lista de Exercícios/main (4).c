/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    double valor;
    
    printf("Digite o valor da compra:\n");
    scanf("%lf", &valor);
    
    if (valor >= 100) {
        printf("Como sua compra, no valor de %.2f, igualou ou ultrapassou R$100,00, ela recebeu um desconto de 10%, e terá um novo valor de %.2f.", valor, valor - (valor / 10));
    } else {
        printf("Como sua compra, no valor de %.2f, não igualou ou ultrapassou R$100,00, ela manterá seu valor atual.", valor);
    }
    
    
}