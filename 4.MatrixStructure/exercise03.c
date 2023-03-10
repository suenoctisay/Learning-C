#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
        setlocale (LC_ALL, "portuguese");
        int matnum[5][4]={0}, l=0, c=0, vmaior=0, vpos1=0, vpos2;
        printf(" Esse programa mostra o maior número da matriz e sua posição. \n\n\n");
        for (l=0;l<5;l++){
            for (c=0;c<4;c++){
                printf("\n Entre com um número para a posição %i %i da matriz: ",l,c);
                scanf("%i", &matnum[l][c]);
            }
        }
         vmaior=matnum[0][0];
         for (l=0;l<5;l++){
            for (c=0;c<4;c++){
                if (matnum[l][c]>vmaior){
                    vmaior=matnum[l][c];
                    vpos1=l;
                    vpos2=c;
                }
            }
         }
        printf("\n\n O maior número da matriz é: %i", vmaior);
        printf("\n Sua posição é: %i %i", vpos1, vpos2);
        printf("\n\n");
        return 0;
}
