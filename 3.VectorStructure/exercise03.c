#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
        setlocale (LC_ALL, "portuguese");
        int vet1[10]={0}, vet2[10]={0}, i=0, vqtd=0;
        printf (" Esse programa verifica a existência de números iguais em dois vetores. \n\n");
        for (i=0;i<3;i++){
            printf ("\n\n Entre com o número para a posição %i do vetor 1: ",i);
            scanf ("%i", &vet1[i]);
            printf ("\n\n Entre com o número para a posição %i do vetor 2: ",i);
            scanf("%i", &vet2[i]);
        }
        for(i=0;i<3;i++){
            if (vet1[i]==vet2[i]){
                vqtd++;
            }
        }
        printf ("\n\n\n Os números repetidos nos vetores são: %i", i);
        printf ("\n Os números repetiram-se %i vezes", vqtd);
        printf ("\n\n");
        return 0;
}
