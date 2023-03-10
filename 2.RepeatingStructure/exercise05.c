#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
        setlocale (LC_ALL, "portuguese");
        int vcont=0, vidade=0, vsexo=0, vqtd1=0, vqtd2=0, vmediag=0, vmediam=0, vmediah=0, vsoma1=0, vsoma2=0;
        printf (" Este programa calcula a idade média de mulheres e homens e seu geral, em um intervalo de 12 pessoas. \n Para indicar o sexo, digite:  \n 1- Feminino \n 2- Masculino \n\n");
        for(vcont=1;vcont<5;vcont++){
            printf("Entre com a idade %d : ", vcont);
            scanf("%d", &vidade);
            printf (" Entre com o sexo: ");
            scanf ("%i", &vsexo);
            if (vsexo==1){
                vsoma1=vsoma1+vidade;
                vqtd1++;
            }
            else {
                vsoma2=vsoma2+vidade;
                vqtd2++;
            }
        }
        vmediag=(vsoma1+vsoma2)/12;
        vmediam=vsoma1/vqtd1;
        vmediah=vsoma2/vqtd2;
        printf("\n\n A media da idade do grupo é de: ", vmediag);
        printf("\n\n A media da idade de mulheres é de: ", vmediam);
        printf("\n\n A media da idade de homens é de: ", vmediah);
        return 0;
}
