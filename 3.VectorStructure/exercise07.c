#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int vetnum[10]={0}, vsoma=0, i=0, vtotal=0,vqtd=0, vpos=0;

	printf("Programa soma números\n\n");
	printf("\n\nValores iniciais do vetor :");
	for( vpos=0;vpos<10;vpos++){
        printf("\n\nValores iniciais do vetor :");
    }
	printf("\n\n");

	while(i<10){
		printf("Entre com um número inteiro para a posição %i do vetor :",i);
		scanf("%i",&vetnum[i]);
	/*	vsoma+=vetnum[i]; */
	    i++;
	}
	printf("\n\nValores armazenados no vetor :");
	for( vpos=0;vpos<10;vpos++){
	   printf(" %i",vetnum[vpos]);
	   vsoma+=vetnum[vpos];
	   if(vetnum[vpos]>10){
	   	 printf("* ");
	   	 vqtd++;
	   }

	}
/*	vtotal=vetnum[3]+vetnum[7]+vetnum[9]; */
	printf("\n\nO valor da soma é: %i",vsoma);
/*	printf("\n\nO valor de vtotal é : %i",vtotal); */

    printf("\n\nA quantidade de números maiores do que o número dez é : %i",vqtd);

	return(0);

}
