#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
        setlocale (LC_ALL, "portuguese");
        int vetnum[20]={0}, vmenor=0, vpos=0, i=0;
        printf(" Este progrma mostra o menor n�mero do vetor e sua posi��o. \n\n");
        for (i=0;i<20;i++){
            printf("\n Entre com um n�mero para a posi��o %i do vetor: ",i);
            scanf("%i", &vetnum[i]);
        }
        vmenor=vetnum[0];
        for (i=0;i<20;i++){
            if (vetnum[i]<vmenor){
                vmenor=vetnum[i];
                vpos=i;
            }
        }
        printf("\n\n O menor elemento do vetor �: %i", vmenor);
        printf("\n Sua posi��o �: %i", vpos);
        printf("\n\n");
        return 0;
}
