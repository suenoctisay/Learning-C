#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
        setlocale (LC_ALL, "portuguese");
        int matnum[4][4]={0}, l=0, c=0, vmaior=0, vmedia=0, vsoma=0, vqtd=0;
        printf(" Esse programa calcula a m�dia dos n�meros maiores que 5 existentes em uma matriz 4x4. \n\n\n");
        for (l=0;l<4;l++){
            for (c=0;c<4;c++){
                printf("\n Entre com um n�mero para a posi��o %i %i da matriz: ",l,c);
                scanf("%i", &matnum[l][c]);
            if (matnum[l][c]>5){
                vqtd++;
                vsoma+=matnum[l][c];
                vmedia=vsoma/vqtd;
            }
            }
        }
        printf("\n\n A soma dos n�meros �: %i", vsoma);
        printf("\n\n A m�dia dos n�meros �: %i", vmedia);
        printf("\n\n");
        return 0;
}
