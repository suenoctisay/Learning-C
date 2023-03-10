#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
        setlocale (LC_ALL, "portuguese");
        int vpos=0, vetnum[10]={0}, vqtd=0, vsoma=0;
        printf("\n\nValores armazenados no vetor :");
	for(vpos=0;vpos<10;vpos++){
	   printf(" %i",vetnum[vpos]);
	   vsoma+=vetnum[vpos];
	   if(vetnum[vpos]>10){
	   	 printf("* ");
	   	 vqtd++;
	   }

	}
        return 0;
}


