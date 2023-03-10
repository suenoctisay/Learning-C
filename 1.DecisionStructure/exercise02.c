#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float vparcela=0.0, vcompra=0.0, vvalor=0.0, vvalorparcela=0.0;
    printf("Esse programa informa o valor de um produto e o valor de cada parcela a ser paga.");
    printf("\n\n entre com o valor do produto: ");
    scanf("%f", &vvalor);
    printf("\n\n entre com a quantidade de parcelas: ");
    scanf("%f", &vparcela);
    if (vparcela==1) {
        vcompra=vvalor-((vvalor*5)/100);
        printf("\n\n o valor da compra é de: %.2f \n\n", vcompra);
    }
    else {
        if (vparcela==2){
            vcompra=vvalor+((vvalor*3)/100);
            vvalorparcela=vcompra/vparcela;
            printf("\n\n o valor da compra é de: %.2f", vcompra);
            printf("\n o valor das parcelas são de: %.2f \n\n", vvalorparcela);
        }
        else {
            if (vparcela==3){
                vcompra=vvalor+((vvalor*5)/100);
                vvalorparcela=vcompra/vparcela;
                printf("\n\n o valor da compra é de: %.2f", vcompra);
                printf("\n o valor das parcelas são de: %.2f \n\n", vvalorparcela);
            }
            else {
                vcompra=vvalor+((vvalor*10)/100);
                vvalorparcela=vcompra/vparcela;
                printf("\n\n o valor da compra é de: %.2f", vcompra);
                printf("\n o valor das parcelas são de: %.2f \n\n", vvalorparcela);
            }
        }
    }
    return 0;
}


