#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
        setlocale (LC_ALL, "portuguese");
        int matnum[4][4]={0}, l=0, c=0, vmaior=0, vmedia=0, vsoma=0, vqtd=0;
        printf(" Esse programa calcula a média dos números maiores que 5 existentes em uma matriz 4x4. \n\n\n");
        for (l=0;l<4;l++){
            for (c=0;c<4;c++){
                printf("\n Entre com um número para a posição %i %i da matriz: ",l,c);
                scanf("%i", &matnum[l][c]);
            if (matnum[l][c]>5){
                vqtd++;
                vsoma+=matnum[l][c];
                vmedia=vsoma/vqtd;
            }
            }
        }
        printf("\n\n A soma dos números é: %i", vsoma);
        printf("\n\n A média dos números é: %i", vmedia);
        printf("\n\n");
        return 0;
}
