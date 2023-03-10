#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
        setlocale (LC_ALL, "portuguese");
        int vqtd1=0, vqtd2=0, vcont=0, vnum=0, vsoma1=0, vsoma2=0, vmedia1=0, vmedia2=0;
        printf ("Este programa faz a média e somatória de números maiores ou menores que 10, num intervalo de 15 algarismos. \n\n");
        while (vcont<15){
            printf ("\n Entre com o %iº número: ", vcont+1);
            scanf ("%i", &vnum);
            if (vnum<10){
                vsoma1+=vnum;
                vqtd1++;
            }
            else {
                vsoma2+=vnum;
                vqtd2++;
            }
            vcont++;
        }
        vmedia1=vsoma1/vqtd1;
        vmedia2=vsoma2/vqtd2;
        printf("\n\n A soma dos números menores que 10 é: %i", vsoma1);
        printf("\n\n A soma dos números maiores que 10 é: %i", vsoma2);
        printf("\n\n A média dos números menores que 10 é: %i", vmedia1);
        printf("\n\n A média dos números maiores que 10 é: %i", vmedia2);
        return 0;
}
