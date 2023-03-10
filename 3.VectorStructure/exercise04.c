#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
        setlocale (LC_ALL, "portuguese");
        int vetnum[10]={0}, vsoma=0, vmedia=0, i=0;
        printf (" Este programa faz a soma e média de 10 números. \n\n");
        for (i=0;i<10;i++){
            printf ("\n Entre com um número para a posição %i do vetor: ",i);
            scanf ("%i", &vetnum[i]);
            vsoma+=vetnum[i];
            vmedia=vsoma/10;
        }
        printf ("\n\n A soma dos números é: %i", vsoma);
        printf ("\n\n A média dos números é: %i", vmedia);
        printf ("\n\n");
        return 0;
}
