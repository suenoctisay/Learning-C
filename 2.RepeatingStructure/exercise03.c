#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
        setlocale (LC_ALL, "portuguese");
        int vnum=0, vcont=0, vqtd1=0, vqtd2=0, vqtd3=0, vqtd4=0, vqtd5=0;
        printf (" Este programa apresenta o total das notas de satisfa��o que clientes d�o para o atendimento da loja, sendo: \n 1- Ruim \n 2- Razo�vel \n 3- Satisfat�rio \n 4- Bom \n 5- �timo \n\n Para que o programa pare, por favor, entre com um negativo. \n\n\n\n");
        while (vcont==0){
            printf ("\n Qual o seu n�vel de satisfa��o? ");
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
                                    printf ("\n\n Por favor, entre com um n�mero v�lido: \n 1- Ruim \n 2- Razo�vel \n 3- Satisfat�rio \n 4- Bom \n 5- �timo \n\n Qual o seu n�vel de satisfa��o? ");
                                    scanf ("%i", &vnum);
                                }
                            }
                        }
                    }
                }
            }
        }
        printf("\n\n A soma das notas ruins foi de: %i", vqtd1);
        printf("\n\n A soma das notas razo�veis foi de: %i", vqtd2);
        printf("\n\n A soma das notas satisfat�ria foi de: %i", vqtd3);
        printf("\n\n A soma das notas boas foi de: %i", vqtd4);
        printf("\n\n A soma das notas �timas foi de: %i", vqtd5);
        return 0;
}
