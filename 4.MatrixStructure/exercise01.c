#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
        setlocale (LC_ALL, "portuguese");
        int matnum[5][5]={0}, l=0, c=0, vsoma=0;
        printf(" Esse programa faz a somatória das linhas de uma matriz 5x5. \n\n\n");
        for (l=0;l<5;l++){
            vsoma=0;
            for (c=0;c<5;c++){
                printf("\n Entre com um número para a posição %i %i da matriz: ",l,c);
                scanf("%i", &matnum[l][c]);
                vsoma+=matnum[l][c];
            }
            printf("\n\n A soma da linha %i é %i", l, vsoma);
            printf("\n\n");
        }
        return 0;
}
