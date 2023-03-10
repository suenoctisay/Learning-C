#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
        setlocale (LC_ALL, "portuguese");
        int vnum=0, vcont=0, vqtd1=0, vqtd2=0, vqtd3=0, vqtd4=0, vqtd5=0;
        printf (" Este programa apresenta o total das notas de satisfação que clientes dão para o atendimento da loja, sendo: \n 1- Ruim \n 2- Razoável \n 3- Satisfatório \n 4- Bom \n 5- Ótimo \n\n Para que o programa pare, por favor, entre com um negativo. \n\n\n\n");
        while (vcont==0){
            printf ("\n Qual o seu nível de satisfação? ");
            scanf ("%i", &vnum);
            if (vnum<0){
                break;
            }
            else{
                if (vnum==1){
                    vqtd1++;
                }
                else{
                    if (vnum==2){
                        vqtd2++;
                    }
                    else {
                        if (vnum==3){
                            vqtd3++;
                        }
                        else {
                            if (vnum==4){
                                vqtd4++;
                            }
                            else {
                                if (vnum==5){
                                    vqtd5++;
                                }
                                else{
                                    printf ("\n\n Por favor, entre com um número válido: \n 1- Ruim \n 2- Razoável \n 3- Satisfatório \n 4- Bom \n 5- Ótimo \n\n Qual o seu nível de satisfação? ");
                                    scanf ("%i", &vnum);
                                }
                            }
                        }
                    }
                }
            }
        }
        printf("\n\n A soma das notas ruins foi de: %i", vqtd1);
        printf("\n\n A soma das notas razoáveis foi de: %i", vqtd2);
        printf("\n\n A soma das notas satisfatória foi de: %i", vqtd3);
        printf("\n\n A soma das notas boas foi de: %i", vqtd4);
        printf("\n\n A soma das notas ótimas foi de: %i", vqtd5);
        return 0;
}
