/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

 int main()
{
    int opcao = 1;

    while (opcao != 0) {
        printf("Escolha um menu:\n");
        printf("1 -> Cadastrar:\n");
        printf("2 -> Consultar:\n");
        printf("3 -> Excluir:\n");
        printf("0 -> Sair:\n");
        scanf("%d", &opcao);
        printf("\033[2J\033[H");
        switch (opcao) {
        case 1:
            printf("Cadastro feito com sucesso.\n\n");
            break;
        case 2:
            printf("Consulta feita com sucesso.\n\n");
            break;
        case 3:
            printf("Cadastro excluido com sucesso.\n\n");
            break;
        case 0:
            printf("Programa encerrado.");
            break;
        default:
            printf("Opcão inválida.\n\n");
        }
    }
    
    

    
} 

