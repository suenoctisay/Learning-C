#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
        setlocale (LC_ALL, "portuguese");
        int vet1[10]={0}, vet2[10]={0}, i=0, vqtd=0;
        printf (" Esse programa verifica a exist�ncia de n�meros iguais em dois vetores. \n\n");
        for (i=0;i<3;i++){
            printf ("\n\n Entre com o n�mero para a posi��o %i do vetor 1: ",i);
            scanf ("%i", &vet1[i]);
            printf ("\n\n Entre com o n�mero para a posi��o %i do vetor 2: ",i);
            scanf("%i", &vet2[i]);
        }
        for(i=0;i<3;i++){
            if (vet1[i]==vet2[i]){
                vqtd++;
            }
        }
        printf ("\n\n\n Os n�meros repetidos nos vetores s�o: %i", i);
        printf ("\n Os n�meros repetiram-se %i vezes", vqtd);
        printf ("\n\n");
        return 0;
}
