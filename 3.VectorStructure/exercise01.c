#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
        setlocale (LC_ALL, "portuguese");
        int vetnum[10]={0}, vnum =0, vqtd=0, i=0, vpos=0;
        printf(" Este programa verifica se um valor digitado se encontra ou não no vetor. \n\n");
        for (i=0;i<10;i++){
            printf("\n Entre com um número para a posição %i do vetor: ",i);
            scanf("%i", &vetnum[vpos]);
        }
        printf("\n\n Entre com o número a ser verificado: ");
        scanf("%i", &vnum);
        if (vnum==vetnum[vpos]){
            vqtd++;
        }
        if (vqtd>0){
            printf("\n\n O número está no vetor");
        }
        else{
            printf("\n\n O  número não está no vetor");
        }
        return 0;
}
