#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
        setlocale (LC_ALL, "portuguese");
        int matnum[2][10]={0}, l=0, c=0, vetnum1[10]={0}, vetnum2[10]={0}, i=0;
        printf(" Esse programa separa 20 números em vetores de 10 números. \n\n\n");
        for (l=0;l<2;l++){
            for (c=0;c<10;c++){
                printf("\n Entre com um número para a posição %i %i da matriz: ",l,c);
                scanf("%i", &matnum[l][c]);
            }
        }
         for (l=0;l<2;l++){
            for (c=0;c<10;c++){
                if (l==0){
                vetnum1[c]=matnum[l][c];
                }
                else{
                vetnum2[c]=matnum[l][c];
                }
            }
        }
        printf("\n\n\n Os números armazenados na primeira linha são: ");
        for (i=0;i<10;i++){
            printf("%i ", vetnum1[i]);
        }
        printf("\n\n Os números armazenados na primeira linha são: ");
        for (i=0;i<10;i++){
            printf("%i ", vetnum2[i]);
        }
        printf("\n\n");
        return 0;
}
