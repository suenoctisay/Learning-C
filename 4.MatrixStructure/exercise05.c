#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
        setlocale (LC_ALL, "portuguese");
        int matnum[5][5]={0}, l=0, c=0, vsoma1=0, vsoma2=0, vsoma3=0, vsoma4=0, vsoma5=0;
        printf(" Esse programa faz a somatória das linhas de uma matriz 5x5. \n\n\n");
        for (l=0;l<5;l++){
            for (c=0;c<5;c++){
                printf("\n Entre com um número para a posição %i %i da matriz: ",l,c);
                scanf("%i", &matnum[l][c]);
            }
            vsoma1=matnum[0][0]+matnum[0][1]+matnum[0][2]+matnum[0][3]+matnum[0][4];
            vsoma2=matnum[1][0]+matnum[1][1]+matnum[1][2]+matnum[1][3]+matnum[1][4];
            vsoma3=matnum[2][0]+matnum[2][1]+matnum[2][2]+matnum[2][3]+matnum[2][4];
            vsoma4=matnum[3][0]+matnum[3][1]+matnum[3][2]+matnum[3][3]+matnum[3][4];
            vsoma5=matnum[4][0]+matnum[4][1]+matnum[4][2]+matnum[4][3]+matnum[4][4];
        }
        printf("\n\n A soma dos números da primeira linha é: %i", vsoma1);
        printf("\n\n A soma dos números da segunda linha é: %i", vsoma2);
        printf("\n\n A soma dos números da terceira linha é: %i", vsoma3);
        printf("\n\n A soma dos números da quarta linha é: %i", vsoma4);
        printf("\n\n A soma dos números da quinta linha é: %i", vsoma5);
        printf("\n\n");
        return 0;
}
